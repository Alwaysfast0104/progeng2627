#include<iostream>
#include<iostream>
void swap(std::string& s1, std::string& s2){
    std::string temp;
    temp=s1;
    s1=s2;
    s2=temp;
}

// int main(){
//     std::string ss1;
//     std::string ss2;
//     std::cout<<"please input two strings"<<std::endl;
//     std::cin>>ss1;
//     std::cin>>ss2;
//     swap(ss1,ss2);
//     std::cout<<"the two strings are: "<<ss1<<ss2 <<std::endl;
// }

int main(){
    std::string st="man",ts="manba";
    swap(st,ts);
    std::cout<< (ts=="man"&&st=="manba") << std::endl;
}