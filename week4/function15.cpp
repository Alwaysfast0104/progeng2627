#include <iostream>
int smallest_factor(int n){
    bool found_factor;
    
    found_factor=false;
    for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){
         // n can be divided by cf...
            

            found_factor = true;
            return cf;
            //...it means we have found a factor!
        }
       
    }
    return n;
}
int main(){
    int n=13;
    std::cout<<(smallest_factor(n)==13)<<std::endl;
}