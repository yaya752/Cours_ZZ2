#ifndef _Point
#define _Point
class Point{
    int x;
    int y;
    static int compteur;

    public:
        int getX();
        void setX(int valeurX);
        int getY();
        void setY(int valeurY);
        void deplacerVers(int i, int j);
        void deplacerDe(int deltaX, int deltaY);
    public:
        Point();
        Point(int x, int y);
    public:
    static int getCompteur();
};
#endif