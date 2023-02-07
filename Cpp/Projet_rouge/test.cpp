#include "catch.hpp"
#include "Point.hpp"
#include "Forme.hpp"
#include "Cercle.hpp"
#include "Rectangle.hpp"
#include "Groupe.hpp"

TEST_CASE("Instanciation", "[Point]") {
  Point p1;
  REQUIRE(p1.getX() == 0);
  REQUIRE(p1.getY() == 0);
  
  p1.setX(11);
  p1.setY(21);

  REQUIRE(p1.getX() == 11);
  REQUIRE(p1.getY() == 21);

  Point p2(12, 22);

  REQUIRE(p2.getX() == 12);
  REQUIRE(p2.getY() ==  22);  
}

TEST_CASE("Origine", "[Point]") {
  REQUIRE(ORIGINE.getX() == 0);
  REQUIRE(ORIGINE.getY() == 0);
}
TEST_CASE("Compteur", "[Forme]") {
  // Pour être correct, ce test doit etre le premier sur Forme
  REQUIRE(0 == Forme::prochainId());
  Forme f1;
  REQUIRE(0 == f1.getId());
  REQUIRE(1 ==  Forme::prochainId());  
  // Verification que la valeur n'est pas decrementee accidentellement.
  Forme *p = new Forme;
  REQUIRE(1 == p->getId());
  delete p;
  REQUIRE(2 == Forme::prochainId()); 
}
TEST_CASE("Instanciation1", "[Forme]") {
  Forme f1;
  REQUIRE(f1.getPoint().getX() == 0);
  REQUIRE(f1.getPoint().getY() == 0);
  REQUIRE(f1.getCouleur() ==  COULEURS::BLEU);
}

TEST_CASE("Instanciation2", "[Forme]") {
  Forme f2;
  
  f2.setX(15);
  f2.setY(25);
  f2.setCouleur(COULEURS::VERT);
  REQUIRE (f2.getPoint().getX() == 15);
  REQUIRE (f2.getPoint().getY() == 25);
  REQUIRE (f2.getCouleur() == COULEURS::VERT);
  REQUIRE_FALSE (f2.getCouleur() == COULEURS::BLEU);
  REQUIRE_FALSE (f2.getCouleur() == COULEURS::ROUGE);
  REQUIRE_FALSE (f2.getCouleur() == COULEURS::JAUNE);
}

TEST_CASE("Instanciation3", "[Forme]") {
  // SI LE TEST NE MARCHE PAS, VOUS AVEZ UNE ERREUR DANS VOTRE CODE
  Forme f2(Point(10,20), COULEURS::ROUGE);
  REQUIRE (f2.getPoint().getX() == 10);
  REQUIRE (f2.getPoint().getY() == 20);
  REQUIRE (f2.getCouleur() == COULEURS::ROUGE);
  REQUIRE_FALSE (f2.getCouleur() == COULEURS::BLEU);

  f2.getPoint().setX(15);
  f2.getPoint().setY(25);
  f2.setCouleur(COULEURS::JAUNE);
  REQUIRE (f2.getPoint().getX() == 15);
  REQUIRE (f2.getPoint().getY() == 25);
  REQUIRE (f2.getCouleur() == COULEURS::JAUNE);
  REQUIRE_FALSE (f2.getCouleur() == COULEURS::BLEU);
  REQUIRE_FALSE (f2.getCouleur() == COULEURS::ROUGE);
}


TEST_CASE("Cercle", "[Cercle]") {
  int compteur = Forme::prochainId();
  Cercle c1;
  Cercle c2{1,2,3,4}; 
  
  REQUIRE(c1.toString() == "CERCLE:5 0 0 0 0");
  REQUIRE(c2.toString() == "CERCLE:6 1 2 3 4");

  c2.setRayon(5);
  REQUIRE(c2.getRayon()   == 5  );
  REQUIRE(c2.toString()   == "CERCLE:6 1 2 10 10");
  REQUIRE(c2.getLargeur() == 10);
  REQUIRE(c2.getHauteur() == 10);  

  REQUIRE(Forme::prochainId() == (compteur+2) ); 
}
TEST_CASE("Polymorphisme", "[Forme]") {
  Forme * f1 = new Cercle;
  Forme * f2 = new Rectangle;

  REQUIRE(f1->toString() == "CERCLE:7 0 0 0 0");
  REQUIRE(f2->toString() == "RECTANGLE:8 0 0 0 0");

  delete f1;
  delete f2;
}
TEST_CASE("Strucutre liste", "[Groupe]") {
    Rectangle c = Rectangle{10,10,30,30};
    Rectangle r = Rectangle{10,10,40,40};
    Groupe g = Groupe{};
    g.ajoutForme(&c);
    g.ajoutForme(&r);
    
  

    REQUIRE(c.toString() == "RECTANGLE:9 10 10 30 30");
    REQUIRE(r.toString() == "RECTANGLE:10 10 10 40 40");
    REQUIRE(g.toString() == "GROUPE:11 10 10 40 40\nRECTANGLE:9 10 10 30 30\nRECTANGLE:10 10 10 40 40\n");
}