#ifndef UECHOIX_H
#define UECHOIX_H

#include "ecue.h"
#include <vector>

using std::cout;
using std::endl;
using std::cin;

class uechoix : public matiere
{
public:
    // constructeur, destructeur
    uechoix();
    uechoix(std::string , std::string , int );
    ~uechoix();

    // m�thode modificateur
    void mettreEcue(ecue*);
    void supprimerEcue(int);

    // m�thode retour
    std::vector <ecue*> ecueDisponible() const ;

    // m�thode abstraite
    virtual void afficher(std::ostream&) const override;
//    virtual int nombreTotalHeure() const override;

private:
    std::vector <ecue*> d_choixDisponibleEcue;
};

#endif // UECHOIX_H
