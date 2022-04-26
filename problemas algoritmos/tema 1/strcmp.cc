#include <iostream>

using namespace std;
int strcmp(const char *a, const char *b){
  for(int i{0};a[i]!='\0';i++)
    if(a[i]!=b[i])
      return a[i]<b[i] ?-1 : 1;

  return 0;

}

int main(){
    cout<<strcmp("alfa","algo")<<endl;
    cout<<strcmp("rho","delta")<<endl;
    cout<<strcmp("beta","beta")<<endl;
}
