#include <iostream>
int main(){
    int num, rem;
    bool if_even;
    std::cout<< "what is the number?" <<std::endl;
    std::cin>> num;
    rem = num%2;
    if_even = (rem=0);
    if (if_even){
        std::cout<<"it is an even number"<< std::endl;
    }
    else{
        std::cout<<"it is a odd number"<< std::endl;
    }
}