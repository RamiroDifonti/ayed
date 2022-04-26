#include <iostream>



int main(){
  
  const int m=3;

  int B[m][4] = {{ 1, 2, 3, 7 },
                 { 4, 5, 6, 8 },
                 { 7, 8, 9, 10 }};

  std::cout<<"DIAGONAL PRINCIPAL: ";
  for(int i=0;i<m;i++)
    std::cout<<B[i][i]<<" ";
  std::cout<<"\nDIAGONAL Secundaria: ";
  for(int i=m;i>0;i--)
    std::cout<<B[4-i-1][i]<<" ";

  return 0;
}