#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int main(){
    std::ifstream infile; 
    infile.open("input.txt");

    std::vector<int> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    int tmp;
    std::string name;

    while(infile >> tmp){
        v.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close(); 


    // TODO: print the content of v in reversed order
    // onto a different text file
    std::ofstream outfile;
    std::cout<<"what is the filename "<<std::endl;
    std::cin>>name;
    outfile.open(name);
    if(!outfile.is_open()){
        std::cout<<"can't find the file"<<std::endl;
        return EXIT_FAILURE;
    }
    for (int i =1; i<=v.size();i++){
        outfile<<v[v.size()-i]<<std::endl;

    }
    outfile.close();

}