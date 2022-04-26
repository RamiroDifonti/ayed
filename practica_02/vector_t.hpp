// AUTOR: Ramiro Difonti Domé
// FECHA: 04/03/2021
// EMAIL: alu0101425030@ull.edu.es
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 2
// COMENTARIOS: se indican entre [] las pautas de estilo aplicadas de
//              "C++ Programming Style Guidelines"
//              https://geosoft.no/development/cppstyle.html

#pragma once

#include <iostream>
#include <cassert>

using namespace std;

template<class T>
class vector_t
{
public: //A PARTIR DE AQUI TODOS LOS ATRIBUTOS Y MÉTODOS SON PÚBLICOS HASTA EL INICIO DE LOS PRIVADOS(LINEA 47)
  vector_t(const int = 0); //CONSTRUCTOR
  ~vector_t(); //DESTRUCTOR
  
  void resize(const int);
  
  // getters
  T get_val(const int) const; //METODO PARA ACCEDER A LOS ATRIBUTOS
  int get_size(void) const;  //METODO PARA ACCEDER A LOS ATRIBUTOS
  
  // setters
  void set_val(const int, const T); //METODO PARA ACCEDER A LOS ATRIBUTOS
  
  
  // getters-setters
  T& at(const int); //METODO PARA ACCEDER A LOS ATRIBUTOS
  
  T& operator[](const int); //METODO PARA ACCEDER A LOS ATRIBUTOS
  
  // getters constantes
  const T& at(const int) const; //METODO PARA ACCEDER A LOS ATRIBUTOS
  const T& operator[](const int) const; //METODO PARA ACCEDER A LOS ATRIBUTOS

  void write(ostream& = cout) const; //METODO PARA ESCRITURA EN PANTALLA
  void read(istream& = cin); //METODO PARA LECTURA DE TECLADO

private: //A PARTIR DE AQUI TODOS LOS ATRIBUTOS Y MÉTODOS SON PRIVADOS HASTA EL FINAL DE LA CLASE
  T *v_; 
  int sz_;
  
  void build(void);
  void destroy(void);
};



template<class T>
vector_t<T>::vector_t(const int n)
{ sz_ = n;
  build();
}



template<class T>
vector_t<T>::~vector_t()
{
  destroy();
}



template<class T>
void
vector_t<T>::build()
{
  v_ = NULL;
  if (sz_ != 0) {
    v_ = new T[sz_];
    assert(v_ != NULL);
  }
}



template<class T>
void
vector_t<T>::destroy()
{
  if (v_ != NULL) {
    delete[] v_;
    v_ = NULL;
  }
  sz_ = 0;
}



template<class T>
void
vector_t<T>::resize(const int n)
{
  destroy();
  sz_ = n;
  build();
}



template<class T>
inline T
vector_t<T>::get_val(const int i) const
{
  assert(i >= 0 && i < get_size());
  return v_[i];
}



template<class T>
inline int
vector_t<T>::get_size() const
{
  return sz_;
}



template<class T>
void
vector_t<T>::set_val(const int i, const T d)
{
  assert(i >= 0 && i < get_size());
  v_[i] = d;
}



template<class T>
T&
vector_t<T>::at(const int i)
{
  assert(i >= 0 && i < get_size());
  return v_[i];
}



template<class T>
T&
vector_t<T>::operator[](const int i)
{
  return at(i);
}



template<class T>
const T&
vector_t<T>::at(const int i) const
{
  assert(i >= 0 && i < get_size());
  return v_[i];
}



template<class T>
const T&
vector_t<T>::operator[](const int i) const
{
  return at(i);
}



template<class T>
void
vector_t<T>::write(ostream& os) const
{ 
  os << get_size() << ":\t";
  for (int i = 0; i < get_size(); i++)
    os << at(i) << "\t";
  os << endl;
}



template<class T>
void
vector_t<T>::read(istream& is)
{
  is >> sz_;
  resize(sz_);
  for (int i = 0; i < sz_; ++i)
    is >> at(i);
}


// FASE II: producto escalar
template<class T> //AQUI SE REALIZAN LAS OPERACIONES PARA EL PRODUCTO ESCALAR
T
scal_prod(const vector_t<T>& v, const vector_t<T>& w)
{
  assert(v.get_size() == w.get_size());
  T vector_num;
  for(int i=0;i<=v.get_size()-1;i++){
    vector_num=(v[i]*w[i])+vector_num;
  } 
  return vector_num;
}

double
scal_prod(const vector_t<rational_t>& v, const vector_t<rational_t>& w)
{
  assert(v.get_size() == w.get_size());
  double vector_num;
  for(int i=0;i<=v.get_size()-1;i++){
    rational_t temp = v[i]*w[i];
    vector_num= temp.value()+vector_num;
  } 
  return vector_num; 
}