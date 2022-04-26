#include <iostream>


int strlen(const char*c){
  int i;
  for (i = 0; c[i] != '\0'; i++);
  return i;
}





int main(){

std::cout<< strlen("algoritmo");

}