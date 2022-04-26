SparsePolynomial SparsePolynomial::recero(){

  SparsePolynomial a=*this;
  float inf= -INFINITY;
  int j{0},k{0};
  for(int i=0;i<get_nz();i++){
    a.at(i)=at(i);
    if(at(i).get_val()>inf){
      inf=at(i).get_val();
      j=at(i).get_inx();
      k=i;
    }
  }
  a.at(k).set(0.0,j);
  return a;

}
double
sparse_vector_t::modulo()const{
  double mod;
  for(int i=0;i<get_nz();i++)
  mod+=pow(at(i).get_val(),2);
  return sqrt(mod);
}
void
sparse_vector_t::angulo(const sparse_vector_t &v){
  double a=modulo();
  std::cout<<"EL ANGULO FORMADO ES: "<<(prod_esc(v))/(v.modulo()*a)<<"\n";
}
void
sparse_vector_t::elem(const double eps)const {
  for(int i=0;i<get_nz();i++)
    if(at(i).get_val()>eps)
      std::cout<<at(i).get_val()<<"x^"<<at(i).get_inx()<<" ";
}
void
sparse_vector_t::potencia(const int num){
  for(int i=0;i<get_nz();i++)
    at(i).set(pow(at(i).get_val(),num),at(i).get_inx()*num);
}
double
sparse_vector_t::prod_esc(const sparse_vector_t & v){
  
  assert(get_nz()==v.get_nz());
  double prod;
  for(int i=0;i<get_nz();i++)
    prod+= at(i).get_val()*v.at(i).get_val();
  return prod;
}
void
sparse_vector_t::equal(const double num){
  for(int i=0;i<get_nz();i++)
    if(abs(at(i).get_val()-num)<1.0e-3)
      std::cout<<at(i).get_val()<<" es igual a "<<num<<"\n";
}