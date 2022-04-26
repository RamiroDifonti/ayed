#include <iostream>
#include <vector>
#include <cmath>
void funcion(const double a,double *v,const int n){

  for(int i{0};i<n;i++){
    double x= i/(n-1.0);
    v[i]=a*x*x*(3-2*x);
  }
}


int main(){

  double v[10]={};
  funcion(2,v,10);

}