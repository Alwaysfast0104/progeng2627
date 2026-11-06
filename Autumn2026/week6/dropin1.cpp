#include<iostream>
#include<vector>

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

int main() {
    int num = 250;
    int base = 16;
    std::vector<int> digits;

    /// Construct several more test cases
    /// using different values of num and base

    if (digits_in_base(num, base, digits)) {
        display(digits);
    } 
    else {
        std::cout << "Invalid base" << std::endl;
    }

    return 0;
}