#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>
#include <iostream>
#include <sstream>


using namespace std;


class Personne
{
    protected:
    string m_nom = "";
    string m_prenom = "";
    string m_adresse = "";
    string m_numero = "";
    // constructeurs dans protected pour abstraction de la classe
    Personne(string nom, string prenom, string adresse, string numero);
    Personne(const Personne &p); // constructeur de recopie

    public:
    virtual ~Personne() {};
    Personne& operator=(const Personne&) = default; // opérateur d'affectation explicite (C11+)
    virtual string toString() const;
    friend ostream& operator<<(ostream& os, const Personne& p); // opérateur d'affichage explicite
    string getNom();
    string getPrenom();
    string getAdresse();
    string getNumero();
    void setNom(string nom);
    void setPrenom(string prenom);
    void setAdresse(string adresse);
    void setNumero(string numero);
    virtual string statut_d_emploi() = 0; // virtuelle pure
};
#endif