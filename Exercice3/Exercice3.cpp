
#include <iostream>

template<typename T>
void afficherTableau(const T* tableau, size_t taille, const char* separateur = " ") { // on écrit const char* car les char doivent être passé comme pointeur.
    for (size_t i = 0; i < taille; ++i) {
        std::cout << tableau[i];
        if (i < taille - 1) std::cout << separateur;
    }
    std::cout << std::endl;
}



// Utilisation (C++20) :
int main(){
    // Exemple :
    int tab[] = {1, 2, 3, 4};  // ✅ Déclaration + initialisation
    afficherTableau(tab, 4);          // 1 2 3 4
    afficherTableau(tab, 4, ", ");    // 1, 2, 3, 4

    return 0;
}
