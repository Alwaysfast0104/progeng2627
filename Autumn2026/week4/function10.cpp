#include <iostream>

// function myswap to be used 
// in sort_two_numbers below
// must be included here (beforehand)

// void sort_two_numbers(double& s1, double& s2){
//     // complete this function
//     // so that the output is as in the examples below

//     double temp;
//     temp=s1;
//     s1=s2;
//     s2=temp;
//     // use function myswap within this function
//     // (remember to change the type of the parameters to double)
// }

// int main(){
//     double n1, n2;
//     std::cout << "please enter two numbers:" << std::endl;
//     std::cin >> n1 >> n2;
//     sort_two_numbers(n1, n2);
//     std::cout << n1 << " " << n2 << std::endl;
//}
void sort_three_numbers(double& s1,double& s2, double& s3){
    double temp1;
    temp1=s1;
    s1=s2;
    s2=s3;
    s3=temp1;

}
int main(){
    double n1=0.89, n2=0.99,n3=0.01;
    sort_three_numbers(n1,n2,n3);
    std::cout<< (n1==0.99)<<std::endl;
    std::cout<< (n2==0.01)<<std::endl;
    std::cout<< (n3==0.89)<<std::endl;

}