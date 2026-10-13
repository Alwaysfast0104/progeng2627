#include <iostream>
int main(){
    int num, rem;
    std:: cout<< "what is the number?"<< std:: endl;
    std:: cin>>num;
    rem = num % 3;
    if (rem == 0 ){
        std:: cout<< "it has a factor three!" << std:: endl;
    }
    else{
        std:: cout<< " it doesn't have a factor three!"<< std:: endl;
    }

}