// AUTOR: 
// FECHA: 
// EMAIL: 
// VERSION: 1.0
// ASIGNATURA: Algoritmos y Estructuras de Datos
// COMENTARIOS: programa de prueba del TAD cola
// Se compila con:
// g++ main_queue.cpp -o main_queue

//#include <cstdio>
#include "queue_v_t.h"
#include "queue_l_t.h"
#include <vector>
template <class T>
void reves(T &src){
  const int n = src.size();
  char stack[n];
  for(int i=0;i<n;i++){
	  stack[i]= src.front();
	  src.pop();
  }
  for(int i=n-1;i>=0;i--)
    src.push(stack[i]);

}




int main(void)
{
	queue_l_t<char> cola_vector,a;

	for (int i = 0; i < 10; i++)
	{
		cola_vector.push('a' + i);
		//cout << cola_vector;
	}
	cout<< cola_vector;
	reves(cola_vector);
	cout << endl;
	cout<< cola_vector<<endl;

	return 0;
}
