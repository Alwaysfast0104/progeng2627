#include<iostream>
 double pow(double base, double expo){
   double result;
   result=base^expo;
   return result;
 }


 int main(){
    double k,n, e;
    std::cout<<"what is the base ? and what is the exponent";
    std::cin>>n>>e;
    k=pow(n,e);
    std::cout<<k<<std::endl;
 }
 
