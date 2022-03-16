#ifndef ETUDIANT_H
#define ETUDIANT_H
#include "personne.hpp"

class Etudiant : virtual public Personne
{
    protected:
    string m_universite = "";
    string m_programme = "";

    public:
    Etudiant(string nom, string prenom, string adresse, string numero, string universite, string programme);
    virtual ~Etudiant() {};

    virtual string toString() const;
    friend ostream& operator<<(ostream& os, const Etudiant& p);
    Etudiant& operator=(const Etudiant&) = default;
    string getUniversite();
    string getProgramme();
    void setUniversite(string universite);
    void setProgramme(string programme);
    string statut_d_emploi();
};
#endif