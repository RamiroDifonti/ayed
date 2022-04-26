#include <iostream>


int main(){
  
  int A[9]={1,2,3,4,5,6,7,8,9};
  int z=8, indice{0}, comprobar{0};
  
  for(int i=0;i<9;i++)
    if(A[i]==z){
      indice=i+1;
      comprobar=1;
    }
  if(comprobar==1)
    std::cout<<"Encontrado en "<<indice<<"\n";
  else
    std::cout<<"No encontrado";

  return 0; 

}