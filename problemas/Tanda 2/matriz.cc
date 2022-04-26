#include <iostream>



int main(){

  const int m=3,n=3;

  int *A=new int[m*n];

  for(int i=0;i<m*n;i++)
    A[i]= i;
  int j{1};
  for(int i=0;i<m * n;i++){
    if(i%n==0)
    std::cout<<"\n";
    if(i%n==0 || i==0){
    std::cout<<"FILA "<<j<<": ";
    ++j;
    }
    std::cout<<A[i]<<" ";
    
  }
      
  delete[] A;
  return 0;
}