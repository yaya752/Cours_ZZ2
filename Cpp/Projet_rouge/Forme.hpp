#ifndef _Forme
#define _Forme
#include "Point.hpp"
enum class COULEURS {
  NOIR, BLANC,ROUGE,BLEU,JAUNE, VERT
};
class Forme{

    public:
        int w;
        int h;
        Point p ;
        static int compteur;
        static int Id;
        COULEURS couleur = COULEURS::BLEU;
    public:
        void setId();
        int getW();
        int getH();
        int getX();
        int getY();
        void setH(int valeurH);
        void setW(int valeurW);
        void setX(int ValeurX);
        void setY(int ValeurY);
        int getId();
        static int prochainId();
    public:
        Forme();
        Forme(Point p1, int h1, int w1);
        Forme(Point p1, COULEURS couleur);
    public:
        int getCompteur();
        COULEURS getCouleur();
        Point& getPoint();
        void setCouleur(COULEURS couleur1);
        virtual std::string toString();
        virtual ~Forme();

};

#endif