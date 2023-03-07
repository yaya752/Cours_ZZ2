#include "catch.hpp"
#include <cstring>
#include <sstream> // a mettre en commentaire 
//#include "Vecteur.hpp"
#include "VecteurGen.hpp"
typedef VecteurGen<float> Vecteur;
TEST_CASE ("Vecteur1") {
  const Vecteur v;
 
  REQUIRE ( v.capacity() >= 10 );
  REQUIRE ( v.size()     == 0  );
}
TEST_CASE ("Vecteur somme") {
  Vecteur v1(10);
  Vecteur v2(10);
  for (int i=0; i<4; ++i)
      v1.push_back(i*1.0);
  for (int i=0; i<6; ++i)
      v2.push_back(i*1.0);
  Vecteur v = v1 + v2;
  REQUIRE ( v1.size()     == 4  );
  REQUIRE ( v.capacity() == 20 );
  REQUIRE ( v.size()     == 10  );
}

TEST_CASE ("Vecteur2" ) {
  Vecteur v(20);
 
  REQUIRE ( v.capacity() == 20 );
  REQUIRE ( v.size()     == 0  );
}
TEST_CASE ("Vecteur3" ) {
  Vecteur v(5);
 
  SECTION("ajout de quelques elements") {
    REQUIRE ( v.capacity() == 5 );

    for (int i=0; i<4; ++i)
      v.push_back(i*1.0);

    REQUIRE ( v.size()     == 4  );
  }

  SECTION("tableau un peu agrandi") {
    // on peut verifier que vecteur est bien un nouveau :-) 
  REQUIRE ( v.capacity() == 5 );
    for (int i=0; i<6; ++i)
      v.push_back(i*1.0);

    REQUIRE ( v.capacity()  == 10 );
    REQUIRE ( v.size()      == 6  );
  }

  SECTION("on verifie les valeurs dans le vecteur") {
    for (int i=0; i<25; ++i)
      v.push_back(i*1.0);

    REQUIRE( v.capacity() ==  40 );
    REQUIRE( v.size()     ==  25 );

    for (int i=0; i<25; ++i)
      CHECK(v[i] == Approx(i*1.0+0.1));  // :-)
  }

  SECTION("on verifie les exceptions") {
    REQUIRE_THROWS_AS( v[-1] == 0, Vecteur::OutOfRangeException); 
    REQUIRE_THROWS_AS( v [6] == 0, std::bad_alloc);  // :-)
   }
}