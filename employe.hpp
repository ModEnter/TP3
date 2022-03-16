#ifndef EMPLOYE_H
#define EMPLOYE_H
#include "personne.hpp"

class Employe : virtual public Personne
{
    protected:
    int m_salaire = 0;
    string m_poste = "";

    public:
    Employe(string nom, string prenom, string adresse, string numero, int salaire, string poste);
    virtual ~Employe() {};

    virtual string toString() const;
    friend ostream& operator<<(ostream& os, const Employe& p);
    Employe& operator=(const Employe&) = default;
    int getSalaire();
    string getPoste();
    void setSalaire(int salaire);
    void setPoste(string poste);
    string statut_d_emploi();
};
#endif