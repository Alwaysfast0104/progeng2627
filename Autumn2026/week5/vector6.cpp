#include <iostream>
#include <vector>
int main(){
    int n,s,temp,count=0;
    
    std::vector<int> v;
    std::vector<int> k;
    std::cout<<"please enter a number n!"<<std::endl;
    std::cin>>n;
    for (int i=0; i<n;i++){
        std::cin>>temp;
        v.push_back(temp);
    }
    std::cout<<"please enter another number s"<<std::endl;
    std::cin>>s;
    for  (int j=0; j<v.size();j++){
        if (v.at(j)==s){
            count++;
            k.push_back(j);
        }
    }
    std::cout<<"its occurance is:"<<count<<std::endl;
    std::cout<<"found number"<< s << "in the following indices:"<<std::endl;
    for (int x=0;x<k.size();x++){
        std:: cout<<k.at(x)<<std::endl;
    }

}