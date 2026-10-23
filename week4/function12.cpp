#include<iostream>
void  panda(double a, double b, double& p, double& A){
    if (a>0&&b>0){
        p=2*(a+b);
        A=a*b;
    }
}
int main(){
    double s1=1.0, s2=2.3, n1=0,n2=0;
    panda(s1,s2,n1,n2);
    std::cout<<(n1==6.6&&n2==2.3)<<std::endl;


}