#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include <cstdlib>

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    bool check=true;
    
    for (int j = 0 ; j<vin1.size();j++){
        vout.push_back(vin1[j]);
    }
    for (int i=0; i<vin2.size();i++){
        check=true;
        for (int k=0; k<vout.size();k++){
            
            if (vin2[i]==vout[k]){
                check=false;

            }
        }
        if (check){
            vout.push_back(vin2[i]);

        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2,
     const std::vector<std::string>& vin3, std::vector<std::string>& vout){
    bool check_inter;
    
    for (int i=0; i<vin1.size();i++){
        check_inter=false;
        for (int k=0; k<vin3.size();k++){
            
            if (vin2[i]==vin3[k]){
                check_inter=true;

            }
        }
        if (check_inter){
            vout.push_back(vin2[i]);

        }
    }
}

int search_vector(std::string s, const std::vector<std::string>& vin){
    for (int i =0; i<vin.size();i++){
        if (s==vin[i]){
            return i;
        }
    }
    return -1;

}

int main(){
    std::ifstream infile;
    std::ofstream outfile;
    std::string s1,s2,tmp;
    
    std::vector<std::string> v1,v2, vout1,vout2;
    
    std::cout<<"what is the first file name?"<<std::endl;
    std::cin>>s1;
    std::cout<<"what is the second file name?"<<std::endl;
    std::cin>>s2;
    infile.open(s1);
    if(!infile.is_open()){
        return EXIT_FAILURE;
    }
    while(infile >> tmp){
        v1.push_back(tmp); 
    }
    infile.close();
    infile.open(s2);
    if(!infile.is_open()){
        return EXIT_FAILURE;
    }
    while(infile >> tmp){
        v2.push_back(tmp); 
    }
    infile.close();
    union_vector(v1,v2,vout1);
    outfile.open("union.txt");
    for (int i =1; i<vout1.size();i++){
        outfile<<vout1[i]<<std::endl;

    }
    outfile.close();
    intersection_vector(v1,v2,vout1,vout2);
    outfile.open("intersection.txt");
    if (!outfile.is_open()){
        return EXIT_FAILURE;
    }
    for (int j=0; j<vout2.size(); j++){
        outfile<<vout2[j]<<std::endl;
    }

}

//屎山代码练错在哪都不只知道！！！！！！！！！！