#include <iostream>

int gcd (int a, int b){

    int temp1,temp2,remainder=1;
    bool check= true ;

    if (a>b){
        temp1=a;
        temp2=b;
    }
    else if(a<b){
        temp1=b;
        temp2=a;
    }

    while (check){
        remainder=temp1%temp2;
        if (remainder==0){
            return temp2;
        }
        temp1=temp2;
        temp2=remainder;
        if (remainder==1){
            check=false;
        }
    }
    return 0;
    
}
int main(){
    std::cout<<(gcd(24,18)==6)<<std::endl;
}