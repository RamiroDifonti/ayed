#include <iostream>
#include <vector>

double *funcion(const double a,const int n){
  double *v = new double[n];
  for(int i{0};i<n;i++){
    double x= i/(n-1.0);
    v[i]=a*x*x*(3-2*x);
  }
  return v;
}


int main(){

  double *v;
  v= funcion(2,10);
}