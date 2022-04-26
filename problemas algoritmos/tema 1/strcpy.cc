#include <iostream>

char *strcpy(char *a,const char *b){
int i;
for(i=0;b[i]!='\0';i++)
    a[i]=b[i];
a[i]='\0';
return a;
}


int main(){

char x[10];
strcpy(x, "algoritmo");
std::cout<<x;
}