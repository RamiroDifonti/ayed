#include <iostream>


int main(){

  int A[15]={1,2,3,4,5,1,1,1,5,8,9,6,1,4,7};
  int n=3,m{0};
  for(int i=0;i<15;i++)
    if(A[i]>=n)
      ++m;

  std::cout<<"Hay "<<m<<" numeros mayores o iguales que "<<n;
  return 0;
}