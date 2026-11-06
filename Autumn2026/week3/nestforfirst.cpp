#include <iostream>
int main(){
    int n,c2=0;
    std::cin>>n;
    for(;c2<n;c2++){
        for(int c=0;c<n;c++){
            std::cout<<"*";
            

        }
        std::cout<<std::endl;
    }

}
// 嵌套进去的for 的 initial 部分是要新定义的，不能直接在前面定义了。