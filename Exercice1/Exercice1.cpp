#include <iostream>

template<typename T>
T maximum(T a, T b){
    return (a < b)? b : a;
}

int main(){

    int a = maximum(4,9);

    std::cout<< a << std::endl;

    std::cout<<maximum(3,7)<<std::endl;

    std::cout<<maximum(3.8,7.7)<<std::endl;

    std::cout<<maximum('A','Z')<<std::endl;

    return 0;
}
