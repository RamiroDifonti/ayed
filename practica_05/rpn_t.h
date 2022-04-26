// AUTOR: Ramiro Nicolas Difonti Dome
// FECHA: 22-04-2021
// EMAIL: ALU0101425030@ull.edu.es
// VERSION: 2.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// PRÁCTICA Nº: 5
// ESTILO: Google C++ Style Guide
// COMENTARIOS: Clase RPN (Reverse Polish Notation)

#ifndef RPNT_H_
#define RPNT_H_

#include <iostream>
#include <cctype>
#include <cmath>
//#include <cstdlib>

#include "queue_l_t.h"

// Clase RPN (Reverse Polish Notation)
template <class T> class rpn_t {
 public:
  // constructor
 rpn_t(void) : stack_() {}

  // destructor
  ~rpn_t() {}

  // operaciones
  const double evaluate(queue_l_t<char>&);

 private: 
  T stack_;
  void operate_(const char operador);
};


// operaciones
template<class T> const double rpn_t<T>::evaluate(queue_l_t<char>& q) {
  
  while (!q.empty()) 	{
    char c = q.front();
    
    q.pop();
    std::cout << "Sa-camos de la cola un caracter: " << c;

    if (isdigit(c)) {
      double i = c - '0';
      stack_.push(i);
      std::cout << " (es un digito) " << std::endl
		<< "   Lo metemos en la pila..." << std::endl;
    } else {
      std::cout << " (es un operador)" << std::endl;
      operate_(c);
    }
  }
  return stack_.top();
}

template<class T> void rpn_t<T>::operate_(const char c) {

  double d{0};
  if(c== 'l' || c== 'c' || c== 'r'){
    double a= stack_.top();
    stack_.pop();
    std::cout << "   Sacamos de la pila un operando: " << a<< std::endl;
    switch (c) {

    case 'l':
      d=((log(a))/(log(2)));
      break;
    case 'c':
      d=a*a;
      break;
    case 'r':
      d= sqrt(a);
      break;
    
    default:
      std::cout<<"'"<<c<<"' No es un operador valido.\n";
      assert(false);
    }
  }else{

    double a= stack_.top();
    stack_.pop();
    std::cout << "   Sacamos de la pila un operando: " << a<< std::endl;

    double b= stack_.top();
    stack_.pop();
    std::cout << "   Sacamos de la pila otro operando: " <<b <<std::endl;
  
    switch (c) {
      case '+':
        d=b+a;
        break;
      case '-':
        d=b-a;
        break;
      case '*':
        d=b*a;
        break;
      case '/':
      d= (b>a)?b/a :a/b;
        break;
      case '^':
        d=(b>a)?pow(a,b):pow(b,a);
        break;
      case 'r':
        d=a*a;
        break;
      default:
        std::cout<<"'"<<c<<"' No es un operador valido.\n";
        assert(false);
    }
  }
  stack_.push(d);
  std::cout << "   Metemos en la pila el resultado: " <<d<< std::endl;
}

 
#endif  // RPNT_H_
