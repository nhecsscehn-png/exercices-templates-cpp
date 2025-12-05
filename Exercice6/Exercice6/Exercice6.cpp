#include <iostream>

template<typename T>
class Point {
public:
    T x, y;

    // Constructeur
    Point(T x = T{}, T y = T{}) : x(x), y(y) {} // Les "T{}" signifie "construit une valeur par défaut à T"

    // Surcharge de operator+ (membre ou non-membre ? → non-membre pour symétrie)
    // On le déclare ici comme friend pour accès direct, ou on le met en dehors.
};

// Opérateur + non-membre (recommandé pour symétrie)
template<typename T>
Point<T> operator+(const Point<T>& a, const Point<T>& b) {
    return Point<T>(a.x + b.x, a.y + b.y);
}

// Opérateur << pour affichage (facultatif mais pratique)
template<typename T>
std::ostream& operator<<(std::ostream& os, const Point<T>& p) {
    return os << "(" << p.x << ", " << p.y << ")";
}

// Exemple d'utilisation
int main() {
    Point<int> p1(2, 3), p2(4, 5);
    Point<int> p3 = p1 + p2;
    std::cout << p3 << std::endl;  // → (6, 8)

    Point<double> q1(1.5, 2.5), q2(0.5, 1.0);
    std::cout << q1 + q2 << std::endl;  // → (2, 3.5)

    return 0;
}
