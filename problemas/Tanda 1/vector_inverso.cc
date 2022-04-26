#include <iostream>
#include <vector>


int main(){
  int n=10;
  int *A= new int[n];

  for(int i=0;i<n;i++)
    A[i]=i;
  for(int i=n-1;i>=0;i--)
    std::cout<<A[i]<<" ";
  
  delete[] A;

  return 0;
}