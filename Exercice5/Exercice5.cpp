#include <iostream>
#include <string>

template<typename T1, typename T2>
class Couple {
    T1 premier;
    T2 second;

public:
    // Constructeur
    Couple(const T1& a, const T2& b) : premier(a), second(b) {}

    // Méthode d'affichage
    void afficher() const {
        std::cout << "(" << premier << ", " << second << ")" << std::endl;
    }
};


int main(){

    Couple<int, std::string> c(1, "Alice");
    c.afficher();  // (1, Alice)

    Couple<double, char> c2(3.14, 'X');
    c2.afficher(); // (3.14, X)

    return 0;
}
