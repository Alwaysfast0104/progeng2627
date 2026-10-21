#include <iostream>
int main(){
    int n, c=0,number=0;
    std::cin>>n;
    while (c<n){
        number=0;
        while (number<n){
            std::cout<<"*";
            number=number+1;
            
        }
        std::cout<<std::endl;
        c=c+1;

    }
}