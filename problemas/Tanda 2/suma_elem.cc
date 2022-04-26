#include <iostream>

int main(){

  int A[9]={1,2,3,5,6,7,8,9}, num{0};

  for(int i=0;i<9;i++)
    if((A[i]%3==0) && (A[i]%2==1))
      num+= A[i];
  std::cout<<"La suma de los numeros pares e impares es: "<<num;
  
  return 0;
}