#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Boite {
private:
    T valeur;

public:
    // Constructeur
    Boite(const T& v = T{}) : valeur(v) {}

    // Getter
    const T& getValeur() const {
        return valeur;
    }

    // Setter
    void setValeur(const T& v) {
        valeur = v;
    }
};

// Exemple d'utilisation
int main() {
    Boite<string> b("Hello");
    cout << b.getValeur() << endl;  // Hello

    Boite<int> b2(42);
    cout << b2.getValeur() << endl;  // 42

    b2.setValeur(100);
    cout << b2.getValeur() << endl;  // 100

    return 0;
}
