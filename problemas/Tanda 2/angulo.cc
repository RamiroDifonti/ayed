#include <iostream>
#include <cmath>
#include <vector>
int main(){
 
  int vec1{0},vec2{0};
  float num{0};

  std::vector<int> A={1,4,5,6,3,7}, B={2,6,8,4,7,3};

  if(A.size()!=B.size())
    return -1;

  for(int i=0;i<A.size();i++){
    vec1+= pow(A[i],2);
    vec2+= pow(B[i],2);
    num+= A[i]*B[i];
  }
  num=num/((sqrt(vec1))*(sqrt(vec2)));
  
  std::cout<<"El modulo del vector es: "<<num;
  return 0; 
}