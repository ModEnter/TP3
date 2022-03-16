#pragma once
#include "etudiant.hpp"
#include "employe.hpp"

class Stagiaire : virtual public Etudiant, virtual public Employe
{
    protected:
    string m_responsable = "";

    public:
    Stagiaire(string nom, string prenom, string adresse, string numero, string universite, string programme, int salaire, string poste,  string responsable);
    virtual ~Stagiaire() {};

    virtual string toString() const;
    friend ostream& operator<<(ostream& os, const Stagiaire& p);
    Stagiaire& operator=(const Stagiaire&) = default;
    string getResponsable();
    void setResponsable(string programme);
    string statut_d_emploi();
};