#include<iostream>
#include <vector>

int main(){

    int out;
    std::vector<int> n;

    for(int i=0; i<3;i++){
        int temp;
        std::cin>>temp ;
        n.push_back(temp);

    }
    out=n[0]*(n[1]+n[2]);
    std:: cout<< out<< std::endl;
}