#include <iostream>


char *strcat(char *a, const char *b){
  int i,j;
  for(i=0;a[i]!='\0';i++);
  for(j=0;b[j]!='\0';i++,j++)
    a[i]=b[j];
  a[i]='\0';
  return a;

}



int main(){

  char x[10]= "algo";
  strcat(x, "ritmo");
  std::cout<<x;
}