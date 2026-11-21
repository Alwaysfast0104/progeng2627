#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>
#include<iomanip>


std::vector<double> string_to_double(std::string line){
    std::stringstream ss;
    std::string temp;
    std::vector<double> out;
    ss<<line;
    while(ss>>temp){
        out.push_back(std::stod(temp));
    }
    return out;
}

std::vector<std::vector<double>> read_content_from_file(std::string filename){
    std::ifstream infile;
    std::string temp;
    std::vector<std::vector<double>> out;
    infile.open(filename);
    while (std::getline(infile,temp)){
        out.push_back(string_to_double(temp));
    }
    return out;
}

std::vector<double> column(int k, const std::vector<std::vector<double>>& m1){
    std::vector<double> out;
    for (int i=0; i<m1.size();i++){
        out.push_back(m1[i][k]);
    }
    return out;
}


// std::string matrix_to_string(std::vector<std::vector<double>> m){

//     std::stringstream out;
//     // to set precision when printing
//     out << std::fixed << std::setprecision(2);

//     for(int i = 0; i < m.size(); i++){
//         for(int j = 0; j < m[0].size(); j++){
//             out << (m[i][j]) << "\t";
//         }
//         out << "\n";
//     }

//     // getting the std::string representation 
//     // of this std::stringstream object
//     return out.str();
// }


int main(int argc,char* argv[]){
    std::vector<std::vector<double>> ma1=read_content_from_file(argv[1]);
    std::vector<double> manba;
    std::stringstream out;
    manba=column(1,ma1);
    for (int i=0; i<manba.size(); i++){
        std::cout<<manba[i]<<std::endl;
    }
 


}