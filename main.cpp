#include "cercle.h"

int main() {
    // Création des 5 cercles (caractéristiques basées sur l'image)
    CCercle cercles[] = {
        CCercle(0, 0, 10),          // Cercle 0 (le grand cercle)
        CCercle(-3, 3, 2),          // Cercle 1 (cercle supérieur gauche)
        CCercle(3, 3, 2),           // Cercle 2 (cercle supérieur droit)
        CCercle(0, 0, 1),           // Cercle 3 (petit cercle au centre)
        CCercle(0, -5, 3)           // Cercle 4 (cercle inférieur)
    };

    // Afficher les caractéristiques des cercles
    for (int i = 0; i < 5; i++) {
        cout << "Cercle " << i << ": ";
        cercles[i].afficher();
    }

    // Saisie des coordonnées d'un point
    double x, y;
    cout << "\nEntrez les coordonnées du point (x y) : ";
    cin >> x >> y;

    // Vérification d'appartenance du point dans chaque cercle
    for (int i = 0; i < 5; i++) {
        if (cercles[i].dedans(x, y)) {
            cout << "Le point (" << x << ", " << y << ") est dans le Cercle " << i << "." << endl;
        }
    }

    return 0;
}
