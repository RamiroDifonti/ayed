#include <iostream>
#include <cmath>
void bernoulli(const int d, const int t,double &x,double &y){
  const double sin_t = sin(t);
  const int raiz_dos= sqrt(2);
  x= (d*raiz_dos*cos(t))/(sin_t*sin_t+1);
  y = x * sin_t;
}


int main(){
  double x,y;
  bernoulli(2,3,x,y);
  std::cout<<x<<" "<<y<<std::endl;
}