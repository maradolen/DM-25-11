#include <iostream>
#include <math.h>
using namespace std;

class CCercle {
private:
    double x0, y0; // Centre du cercle
    double R;      // Rayon

public:
    // Constructeurs
    CCercle(double x, double y, double rayon);
    CCercle(double x1, double y1, double x2, double y2);

    // Accesseurs
    double getCentreX(); // Renvoie x0
    double getCentreY(); // Renvoie y0
    double getRayon();   // Renvoie R

    // Méthodes
    bool dedans(double x, double y); // Vérifie si un point est dans le cercle
    double circonference();          // Renvoie la circonférence
    double surface();                // Renvoie la surface
    void afficher();                 // Affiche les caractéristiques du cercle
};

