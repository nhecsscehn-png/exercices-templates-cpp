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

    double c, d;
    c=14;
    d=56;

    std::cout<<"c vaut : "<<c<< std::endl;
    std::cout<<"d vaut : "<<d<< std::endl;

    echanger(c,d);
    std::cout<<"Resultat apres echange"<<std::endl;

    std::cout<<"c vaut : "<<c<< std::endl;
    std::cout<<"d vaut : "<<d<< std::endl;

    return 0;
}
