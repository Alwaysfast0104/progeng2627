#include <iostream>
#include <vector>

std::vector<unsigned long> catalan_numbers(int n){
    std::vector <unsigned long> number;
    int first_number=1, count=0;
    unsigned long  temp;
    number.push_back(first_number);
    while (count<=n-1){
        temp=0;
        for (int i=0; i<number.size(); i++){
            
            temp=temp+number[i]*number[number.size()-i-1];
        

        }
        number.push_back(temp);
        count=count+1;
    
    }
    return number;

}

int main() {
    int n;

    
    std::cout << "Enter n: ";
    std::cin >> n;

    std::vector<unsigned long> numbers = catalan_numbers(n);

    for (int i = 0; i < numbers.size(); i++) {
        std::cout << "C" << i << " = " << numbers[i] << std::endl;
    }

    return 0;
}