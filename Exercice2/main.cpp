#include <utility>
#include <iostream> // Pour std::swap(a,b);

template<typename T>
void echanger(T& a, T& b){
    std::swap(a, b);
}

int main(){

    int a, b;
    a = 3;
    b = 5;

    std::cout<<"a vaut : "<<a<< std::endl;
    std::cout<<"b vaut : "<<b<< std::endl;

    echanger(a,b);
    std::cout<<"Resultat apres echange"<<std::endl;

    std::cout<<"a vaut : "<<a<< std::endl;
    std::cout<<"b vaut : "<<b<< std::endl;

    return 0;
}
