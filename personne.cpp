#include "personne.hpp"
using namespace std;

Personne::Personne(string nom, string prenom, string adresse, string numero)
{
    m_nom = nom;
    m_prenom = prenom;
    m_adresse = adresse;
    m_numero = numero;
}

Personne::Personne(const Personne &p)
{
    m_adresse = p.m_adresse;
    m_nom = p.m_nom;
    m_numero = p.m_numero;
    m_prenom = p.m_prenom;
}

string Personne::toString() const
{
    string res;
    res = "Nom: " + m_nom + "\nPrenom: " + m_prenom + "\nAdresse: " + m_adresse + "\nNumero: " + m_numero + "\n";
    return res;
}

ostream& operator<<(ostream& os, const Personne& p)
{
    os << p.toString();
    return os;
}

string Personne::getNom() {return m_nom;}
string Personne::getPrenom() {return m_prenom;}
string Personne::getAdresse() {return m_adresse;}
string Personne::getNumero() {return m_numero;}
void Personne::setNom(string nom) {m_nom = nom;}
void Personne::setPrenom(string prenom) {m_prenom = prenom;}
void Personne::setAdresse(string adresse) {m_adresse = adresse;}
void Personne::setNumero(string numero) {m_numero = numero;}
