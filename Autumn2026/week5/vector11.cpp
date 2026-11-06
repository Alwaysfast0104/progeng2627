#include<iostream>
#include<vector>

int search_vector(int n, const std::vector<int>& vin){
    for (int i = 0; i<vin.size();i++){
        if(vin.at(i)==n){
            return i;
        }

    }
    return -1;

}

int main(){
    std::vector <int>v={0,-1,2};
    std::cout<< (search_vector(2,v)==2)<<std::endl;
    std::cout<< (search_vector(3,v)==-1)<<std::endl;
}