#include <iostream>

char *strstr(char *a, const char *b){

  for (int i = 0, j=0; a[i] != '\0'; i++) {
    while(a[i]==b[j]){
      j++,i++;
      if (b[j] == '\0') return a + i-j;
    }
  }

  return NULL;
}

int main(){

  std::cout<<strstr("alfarero","far");
}