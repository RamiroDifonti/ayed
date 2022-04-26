#include <iostream>
#include <cmath>
#include <vector>
int dig(int n){
   return n==0? 0: 1+dig(n/10);
}

int sum(const int n){
    return n?(n%10)+sum(n/10) : 0;
}
int bin(const int n){
    return n<=1?  n : bin(n/2)*10 + (n%2);
}
int col(const int n){
    return n==1? 1 : n%2==0? 1+col(n/2): 1+col(3*n+1);
}


bool primo(const int n, const int divisor){
  return n==divisor? 1 : n%divisor==0? 0 : primo(n, divisor+1);
}

int mcd(const int a, const int b, const int divisor){
  return (a<divisor || b<divisor)? 1 : (a%divisor==0 && b%divisor==0)? (divisor * mcd(a/divisor,b/divisor,divisor)) : mcd(a,b,divisor+1);
}

int mcm(const int a, const int b, const int divisor){
    return (a<divisor || b<divisor)? a*b :
           (a%divisor==0 && b%divisor==0)?  (divisor * mcm(a/divisor,b/divisor,divisor)) :
           (a%divisor==0)? divisor*mcm(a/divisor,b,divisor) :
           (b%divisor==0)? divisor*mcm(a,b/divisor,divisor) : mcm(a,b,divisor+1);
}


std::vector<int> det(const std::vector<int> a){
  return a
}
int main(){

  std::cout<< dig(10)<<std::endl;
  std::cout<< sum(10)<<std::endl;
  std::cout<< bin(10)<<std::endl;
  std::cout<< col(13);
  std::cout<<primo(3,0);
  std::cout<< mcd(8250,350,2);
  std::cout<< mcm(8250,350,2);
}