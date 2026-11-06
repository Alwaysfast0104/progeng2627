#include <iostream>
int main(){
    double n, total=1;
    std::cin>>n;
    for(;n>0;){
        total=total*n;
        n=n-1;
    }
    std::cout<<total<<std::endl;
}
