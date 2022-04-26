// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 3.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 4
// ESTILO: Google C++ Style Guide
// COMENTARIOS: 

#ifndef SLLT_H_
#define SLLT_H_

#include <iostream>
#include <cassert>

#include "sll_node_t.h"

// Clase para almacenar una lista simplemente enlazada
template <class T> class sll_t {
 public:
  // constructor
  sll_t(void) : head_(NULL) {}

  // destructor
  ~sll_t(void);

  // getters
  sll_node_t<T>* get_head(void) const { return head_; };
  
  bool empty(void) const;

  // operaciones
  void push_front(sll_node_t<T>*);
  sll_node_t<T>* pop_front(void);

  void insert_after(sll_node_t<T>*, sll_node_t<T>*);
  sll_node_t<T>* erase_after(sll_node_t<T>*);

  sll_node_t<T>* search(const T&) const;
  T top(void);
  void change(void);
  void duplicate(void);
  void pair(void);
  void impair(void);
  // E/S
  std::ostream& write(std::ostream& = std::cout) const;

 private:
  sll_node_t<T>* head_;
};


// destructor
template <class T> sll_t<T>::~sll_t(void) {
  while (!empty()) {
    sll_node_t<T>* aux = head_;
    head_ = head_->get_next();
    delete aux;
  }
}

// Comprobar si lista vacía
template <class T> bool sll_t<T>::empty(void) const {
  return head_ == NULL;
}

// operaciones
template <class T> void sll_t<T>::push_front(sll_node_t<T>* n) {
  assert(n != NULL);

  n->set_next(head_);
  head_ = n;
}

template <class T> sll_node_t<T>* sll_t<T>::pop_front(void) { 
  assert(!empty());
  sll_node_t<T>* aux = head_;
  head_ = head_->get_next();
  aux->set_next(NULL);

  return aux;
}

template <class T> void sll_t<T>::insert_after(sll_node_t<T>* prev,
					       sll_node_t<T>* n) {
  assert(prev != NULL && n != NULL);

  n->set_next(prev->get_next());
  prev->set_next(n);
}

template <class T> sll_node_t<T>* sll_t<T>::erase_after(sll_node_t<T>* prev) { 
  assert(!empty());
  assert(prev != NULL);
  sll_node_t<T>* aux = prev->get_next();
  
  assert(aux != NULL);
  prev->set_next(aux->get_next());
  aux->set_next(NULL);

  return aux;
}

template <class T> sll_node_t<T>* sll_t<T>::search(const T& d) const {
  sll_node_t<T>* aux = head_;
  while ((aux != NULL) && (aux->get_data() != d))
    aux = aux->get_next();
    
  return aux;
}

// E/S
template <class T> std::ostream& sll_t<T>::write(std::ostream& os) const {
  sll_node_t<T>* aux = head_;

  while (aux != NULL) {
    aux->write(os);
    aux = aux->get_next();
  }
  return os;
}
template <class T> T sll_t<T>::top(void){
  sll_node_t<T>* aux= get_head(),*aux2=NULL;
  while(aux->get_next()!=NULL){
    aux2=aux;
    aux=aux->get_next();
  }
  sll_node_t<T>* nodo;
  if(aux2 == NULL)
    nodo = pop_front();
  else
  nodo = erase_after(aux2);
  T a = nodo->get_data();
  
  delete nodo;
  
  

  return a;
}
template <class T> void sll_t<T>::change(void){
  sll_node_t<T> *aux=get_head();
  assert(!empty());
  sll_node_t<char> *a = new sll_node_t<T>(aux->get_data());
  sll_node_t<char> *b = new sll_node_t<T>(aux->get_next()->get_data());
  pop_front(),pop_front();
  push_front(a),push_front(b);
}
template <class T> void sll_t<T>::duplicate(void){
  sll_node_t<T> *aux=get_head();
  while(aux!=NULL){
    
    insert_after(aux,new sll_node_t<T>(aux->get_data()));
    
    aux= aux->get_next()->get_next();;
  }
}
template <class T> void sll_t<T>::pair(void){
  sll_node_t<T> *aux=get_head();
  
  while(aux!=NULL){
      
      sll_node_t<T> *nodo;
      nodo = erase_after(aux);
      delete nodo;
      aux=aux->get_next();
  }
}
template <class T> void sll_t<T>::impair(void){
  sll_t<T> odds_list;
  sll_node_t<T>* aux = get_head();
  if (!empty()) {
    odds_list.push_front(pop_front());  // Mover primer nodo a lista impares
    aux = get_head();
  }
  while (aux != NULL && aux->get_next() != NULL) {  // Recorrer toda la lista
    odds_list.push_front(erase_after(aux));  // Mover el siguiente a aux
    aux = aux->get_next();  // Solo adelantar aux un nodo, impar ya movido
  }
  return odds_list;  // Retornar lista de impares
}
#endif  // SLLT_H_
