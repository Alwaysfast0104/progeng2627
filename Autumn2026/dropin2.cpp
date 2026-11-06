#include <iostream>
#include <vector>

bool digits_in_base(int i, int b,std::vector<int>& dig){
  
    int temp,remainder;
    
    temp=i;
    if (i<0){
        return false;
    }
    if (b<2||b>16){
        return false;
    }
    while (temp!=0){
        remainder=temp%b;
        dig.push_back(remainder);
        temp=temp/b;
       
    }
    return true;
}

int display(const std::vector<int>& vin){
    for(int i=1; i<=vin.size();i++){
        if (vin.at(vin.size()-i)<10){
            std::cout<<vin.at(vin.size()-i);
        }
        else if(vin.at(vin.size()-i)==10){
            std::cout<<"A";
        }
        else if(vin.at(vin.size()-i)==11){
            std::cout<<"B";
        }
        else if(vin.at(vin.size()-i)==12){
            std::cout<<"C";

        }
        else if(vin.at(vin.size()-i)==13){
            std::cout<<"D";
        }
        else if(vin.at(vin.size()-i)==14){
            std::cout<<"E";
        }
        else if(vin.at(vin.size()-i)==15){
            std::cout<<"F";
        }
    }
    return 0;

}


int deci(int b, std::vector<int> ds){
    int sum=0,temp=1;
    for (int i=0; i<ds.size();i++){
        if (ds.at(i)==0){
                sum=sum;
            }
        else{
            temp=1;
            for (int j =0;j<i;j++){
                
                temp=temp*b;

            }
            sum=sum+temp*ds.at(i);

        }

    }
    return sum;
}

int main() {
    int num = 8;
    int base = 7;
    std::vector<int> digits;

    if (digits_in_base(num, base, digits)) {
        display(digits);

        int decimal = deci(base,digits);
        std::cout << "Decimal number restored from digits: " << decimal << std::endl;
    } else {
        std::cout << "Invalid base" << std::endl;
    }

    return 0;
}