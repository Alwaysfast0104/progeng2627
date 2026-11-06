#include <iostream>
int main(){
    int n;
    std::cout<< "what is your number?"<<std::endl;
    std::cin>>n;
    
    while (n!=1){
        
        if (n%2!=0){
            n=n*3+1;
            std::cout<<n<<std::endl;
        }
        else{
            n=n/2;
            std::cout<<n<<std::endl;
        }

        

    }
}

// 为什么直接按下control C 会有垃圾数字出现。