#ifndef UESIMPLE_H
#define UESIMPLE_H

#include "ecue.h"

class uesimple : public ecue
{
public:
    // constructeur, destructeur
    uesimple();
    uesimple(std::string codeUe, std::string nomUe, int coefficient, int ects,
             int nombreHeureCours, int nombreHeureTd, int nombreHeureTp);
    ~uesimple() ;

    // m�thode retour
    //int ects() const;

    // m�thode modificateur
    void mettreEcts(int );
    void afficher_UE(std::ostream &ost) const;

    // m�thode abstraite
    virtual void afficher(std::ostream &ost) const;
    virtual int heureCours() const ;
    virtual int heureTd() const ;
    virtual int heureTp() const ;
    virtual int ects() const ;

private:
    int d_ects;
};

#endif // UESIMPLE_H
