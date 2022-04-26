#include <iostream>
#include <vector>

int buscar(const int v[],const int a,const int b){
  for(int i{0};i<a;i++)
    if(v[i]==b)
      return i;
  return -1;
}


int main(){

int v[] = {18, -79, 20, 61, 32, -53, 44};
int i = buscar(v, 7, 32); 
int j = buscar(v, 7, 9);
std::cout<<i<<" "<<j;
}