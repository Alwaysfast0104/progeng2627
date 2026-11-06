#include<iostream>
#include<fstream>
#include<cstdlib>
#include <vector>

int main(){
    std::ifstream infile;
    std::vector<std::string> v;
    std::string s, temp;
    std::cout<<"what is your file name?"<<std::endl;
    std::cin>>s;
    infile.open(s);

    if (!infile.is_open()){
        std::cout<<"didn't find the file!!!!!!"<<std::endl;
        return EXIT_FAILURE;
    }
    else{
        
        while(infile>>temp){
            v.push_back(temp);
        }
        for (int i =1; i<=v.size(); i++){
            std::cout<<v[v.size()-i]<<std::endl;
        }

     
    }
    infile.close();



}
