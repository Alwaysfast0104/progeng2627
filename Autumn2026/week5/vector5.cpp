#include <iostream>
#include <vector>
int main(){
    int n,t,temp;
    std::vector<int> v;
    std::cout<<"please enter a number n!"<<std::endl;
    std::cin>>n;
    for (int i=0; i<n;i++){
        std::cin>>temp;
        v.push_back(temp);
    }
    std::cout<<"please enter another number t"<<std::endl;
    std::cin>>t;
    for  (int j=0; j<v.size();j++){
        if (v.at(j)<t){
            std::cout<< v.at(j)<<std::endl;
        }
    }



}