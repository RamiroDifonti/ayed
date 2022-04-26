#include <iostream>



int main(){

  const int m=3,n=3;
  
  int *A= new int[m*n], num{0};
  for(int i=0;i<m*n;i++)
    A[i]= i;
  for(int i=0;i<m*n;i++)
    if(A[i]>0)
      num+= A[i];
  std::cout<<"La suma es: "<<num;
  
  delete[] A;
  return 0;
}