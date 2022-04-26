#include <iostream>


class Punto2D {
 protected:
  float x, y;
 public:
  Punto2D(const float x = 0,
          const float y = 0): x(x), y(y) {}
  Punto2D operator+(const Punto2D&) const;
};
Punto2D Punto2D::operator+(const Punto2D &a)const{
  return Punto2D(x+a.x,y+a.y);
}


class Punto3D : private Punto2D {
 private:
  float z;
 public:
  Punto3D(const float x = 0,
          const float y = 0,const float z=0): Punto2D(x,y),z(z) {}
  friend std::ostream& operator<<(std::ostream &os,const Punto3D&);
};
std::ostream& operator<<(std::ostream &os,const Punto3D&);
std::ostream& operator<<(std::ostream &os,const Punto3D& p){
    os<<"("<<p.x<<"), ("<<p.y<<")";
    return os;
}
int main(){
  
  Punto3D a(2,3,4);
  std::cout<<a;
}

