#include "catch.hpp"
#include "semestre.h"
#include "uesimple.h"


TEST_CASE("V�rification des m�thodes accesseurs semestre", "[semestre]"){
    semestre s (1);
    SECTION("Accesseur num�roSemestre"){
        REQUIRE(s.numero() == 1);
    }
}

TEST_CASE("V�rification sur la liste matiere du semestre", "[semestre]"){
    semestre s (1);
    uesimple *math = new uesimple("math5", "algebre", 1, 3, 10, 12, 14);
    s.ajouterMatiere(math);
    SECTION("test sur trouverMatiere"){
        REQUIRE(s.trouverMatiere("quiExistePas") == -1);
        REQUIRE(s.trouverMatiere("math5")==0);
    }
    SECTION("Suppresion d'une mati�re"){
        s.supprimerMatiere(0);
        REQUIRE(s.trouverMatiere("math5") == -1);
    }
}
