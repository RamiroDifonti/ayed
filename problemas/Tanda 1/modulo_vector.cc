#include <iostream>
#include <cmath>


int main(){

  const int n= 4;
  int A[n]={1,4,5,6};
  float num{0};
  
  for(int i=0;i<n;i++)
    num+= pow(A[i],2);
  num= sqrt(num);
  std::cout<<"El modulo del vector es: "<<num;
}