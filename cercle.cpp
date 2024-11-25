#include "cercle.h"

// Constructeur avec centre et rayon
CCercle::CCercle(double x, double y, double rayon) {
    x0 = x;
    y0 = y;
    R = rayon;
}

// Constructeur à partir de deux points d'un rectangle circonscrit
CCercle::CCercle(double x1, double y1, double x2, double y2) {
    x0 = (x1 + x2) / 2;
    y0 = (y1 + y2) / 2;
    R = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) / 2;
}

// Accesseurs
double CCercle::getCentreX() {
    return x0;
}

double CCercle::getCentreY() {
    return y0;
}

double CCercle::getRayon() {
    return R;
}

// Vérifie si un point est dans le cercle
bool CCercle::dedans(double x, double y) {
    double centreX = getCentreX();
    double centreY = getCentreY();
    double rayon = getRayon();

    return pow(x - centreX, 2) + pow(y - centreY, 2) <= pow(rayon, 2);
}

// Renvoie la circonférence
double CCercle::circonference() {
    return 2 * M_PI * R;
}

// Renvoie la surface
double CCercle::surface() {
    return M_PI * R * R;
}

// Affiche les caractéristiques du cercle
void CCercle::afficher() {
    cout << "Centre: (" << getCentreX() << ", " << getCentreY() << "), Rayon: " << getRayon() << endl;
}
