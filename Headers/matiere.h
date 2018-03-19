#ifndef MATIERE_H
#define MATIERE_H

#include <iostream>

class matiere
{
public:
    // constructeur, destructeur
    matiere();
    matiere(std::string codeMatiere,
            std::string intitule,int coefficient);
    virtual ~matiere();

    // m�thode retour
    std::string codeMatiere() const;
    std::string intitule() const;
    int coefficient() const;

    //m�thode modificateur
    void setIntitule(const std::string& intitule);
    void setCoefficient(int coefficient);

    // m�thode abstraite
    virtual void afficher(std::ostream& ost) const;
    virtual int heureCours() const  ;
    virtual int heureTd() const ;
    virtual int heureTp() const ;
    virtual int ects() const ;


private:
    std::string d_code ;
    std::string d_intitule ;
    int d_coefficient ;
};

#endif // MATIERE_H
