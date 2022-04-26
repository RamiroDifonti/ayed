// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 2.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// TEMA: 5
// ESTILO: Google C++ Style Guide
// COMENTARIOS: 
// COMPILACIÓN: g++ -g main_stack.cc -o main_stack
// EJECUCIÓN: ./main_stack

#include <iostream>

#include "stack_v_t.h"
#include "stack_l_t.h"

using namespace std;

int main(void) {
  stack_v_t<char> pila_vector;
  cout << "********** PILA VECTOR **********" << endl;
  for (int i = 0; i < 10; i++) {
    pila_vector.push('a' + i);
  }
  pila_vector.write();
  cout << endl;
  //INTERCAMBIAR EL PRIMER ELEMENTO CON EL SEGUNDO

  // char a= pila_vector.top();
  // pila_vector.pop();
  // char b= pila_vector.top();
  // pila_vector.pop();
  // pila_vector.push(a);
  // pila_vector.push(b);

  //GENERAR PILA A PARTIR DE OTRA EN ORDEN INVERSO

  // stack_v_t<char> lista;
  // while(!pila_vector.empty()){
  //   lista.push(pila_vector.top());
  //   pila_vector.pop();
  // }
  // cout<<"Inversa:\n";
  // lista.write();
  // cout << endl;

  //ELIMINAR ELEMENTOS IMPARES

  // stack_v_t<char> temp;
  // while(!pila_vector.empty()){
  //   temp.push(pila_vector.top());
  //   pila_vector.pop();
  //   pila_vector.pop();
  // }
  // while (!temp.empty()) {
  //   pila_vector.push(temp.top());
  //   temp.pop();
  // }
  // cout<<"Eliminando impares:\n";
  // pila_vector.write();
  // cout<<endl;

  //ORDENAR PILA A PARTIR DE UN VALOR

  // const int n=101;
  // stack_v_t<char> menores,mayores;
  // while(!pila_vector.empty()){
  //   if(pila_vector.top()>101)
  //     mayores.push(pila_vector.top());
  //   else
  //     menores.push(pila_vector.top());
  //   pila_vector.pop();
  // }
  // cout<<"PILA CON MAYORES:\n";
  // mayores.write();
  // cout<<"\nPILA CON MENORES:\n";
  // menores.write();
  
  //COMPARAR E IR DEJANDO VALOR MAXIMO EN LA PILA
  bool salir{false};
  while(!pila_vector.empty() && salir==false){
    char temp= pila_vector.top();
    pila_vector.pop();

    if(!pila_vector.empty()){
      char temp2= pila_vector.top();
      pila_vector.pop();
    if(temp>temp2)
    temp2=temp;
    }else
    salir = true;
    pila_vector.push(temp);
  }
  pila_vector.write();

  while (!pila_vector.empty()) {
    pila_vector.pop();
    pila_vector.write();
    cout << endl;
  }

  stack_l_t<char> pila_lista;
  cout << "********** PILA LISTA **********" << endl;
  for (int i = 0; i < 10; i++) {
    pila_lista.push('a' + i);

  }
  pila_lista.write();
  cout << endl;

  while (!pila_lista.empty()) {
    pila_lista.pop();
    pila_lista.write();
    cout << endl;
  }
	
  return 0;
}
