#include <iostream>
#include <cmath>

int main(){
 
  int A[9]={6,7,4,9,2,3,5,9,8};
  float mayor{-INFINITY}, menor{INFINITY},indice{0},indice1{0};
  for(int i=0;i<9;i++){
    if(A[i]<=menor){
      indice=i+1;
      menor=A[i];
    }
    if(A[i]>=mayor){
      indice1=i+1;
      mayor=A[i];
    }
  }
  std::cout<<"El mayor es: "<<mayor<<" en la posicion: "<<indice1<<"\nEl menor es: "<<menor<<" en la posicion: "<<indice;
}