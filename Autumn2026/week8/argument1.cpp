#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>

int main (int argc ,char* argv[]){

    double tmp;
    std::ifstream infile;
    infile.open(argv[1]);
    if (!infile.is_open()){
        std::cout<<"error openning file"<< std:: endl;
        return  EXIT_FAILURE;
    }

    if (infile.is_open()){
        
        while(infile>>tmp){
        std::cout<<tmp<<std::endl;
        }
    }
    infile.close();
    
}