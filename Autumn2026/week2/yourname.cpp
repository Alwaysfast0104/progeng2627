#include <iostream>

int main(){
    std::string user_name;
    std::cout <<"what is your name?"<<std::endl;
    std::cin>> user_name;
    std::cout <<"hello" <<""<<user_name<<std::endl;
}
//加空格没有用 只能提取第一个词，空格以后的就不行了