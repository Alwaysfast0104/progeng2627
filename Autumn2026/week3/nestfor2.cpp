#include <iostream>
int main(){
    int n,l=0,i=0,gap=1;
    std::cin>>n;
    for (;l<n;l++){
        
        i=0;
        i=i+gap;
        for (int count=1;count<= n;count++){
            
            std::cout<<i;
            std::cout << "\t";
            i=i+gap;
        }
        std::cout<<std::endl;
        gap++;

    }
    
}