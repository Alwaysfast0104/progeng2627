#include<iostream>
#include<vector>

int min_vector_element(const std::vector<double>& vin){
    int min,temp;
    if (vin.size()==0){
        return -1;

    }
    min=vin.at(0);

    for (int i=0;i<vin.size();i++){
        if (vin.at(i)<min){
            min=vin.at(i);
            temp=i;
        }
    }
    return temp;

}

int  main(){
    std::vector<double> v={0,1,2,3,0,-1};
    std::vector<double> v2={};
    std::cout<< (min_vector_element(v)==5)<<std::endl;
    std::cout<< (min_vector_element(v2)==-1)<<std::endl;
}



