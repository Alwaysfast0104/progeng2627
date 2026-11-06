#include <iostream>
int main(){
    double total=0,n,ave;
    int counter=0;
    while(counter>-1){
        std::cin>>n;
        counter=counter+1;
        total=total+n;
        ave=total/counter;
        std::cout<<"the average is"<< ave << std:: endl;


    }
}