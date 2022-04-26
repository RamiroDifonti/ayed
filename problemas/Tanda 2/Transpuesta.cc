#include <iostream>



int main(){

  const int m=3,n=3;
  int A[m][n] = {{ 1, 2, 3 },
                 { 4, 5, 6 },
                 { 7, 8, 9 }};

  for(int j=0;j<m;j++){
    for(int i=0;i<n;i++){
    std::cout<<A[i][j]<<" ";
    }
   std::cout<<"\n";
  }
}
