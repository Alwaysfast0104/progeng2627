#include <iostream>

int main(){
    int n;

    std::cin >> n;

    while((-11<n)&&(n<11)){
        std::cout << n << std::endl;
        std::cin >> n;
    }
}

// && logical and
// || logical or
// & bitwise and 也就是1001001 and 10000100 返回 10000000
// | bitwise or ；也就是两个值然后or每一个bit
// 按control c可以停止正在进行中的program