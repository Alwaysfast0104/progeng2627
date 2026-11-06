#include<iostream>
#include<vector>


void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    for (int i = 0; i<vin1.size();i++){
        vout.push_back(vin1.at(i));
    }
    for (int j = 0; j<vin2.size();j++){
        vout.push_back(vin2.at(j));
    }

}

int main(){
    std::vector <int> v1={1,7,3,4};
    std::vector <int> v2={2,-2,19};
    std::vector <int> v3;
    append_vectors(v1,v2,v3);
    for(int i = 0; i < v3.size(); i++){
            std::cout << v3[i] << std::endl;
    }
}
