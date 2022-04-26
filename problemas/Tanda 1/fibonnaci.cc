#include <iostream>


int main(){
  int n{0},temp{0},temp2{1},num{0};
  std::cin>>n;
  int *A= new int[n];

  A[0]=0;
  A[1]=1;
  for(int i=2;i<n+1;i++)
    A[i] = A[i-1] + A[i-2];
  
  for(int i=0;i<n;i++)
    std::cout<<A[i]<<" ";
    
  delete[] A;
  return 0;
}