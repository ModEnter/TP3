#include "employe.hpp"

Employe::Employe(string nom, string prenom, string adresse, string numero, int salaire, string poste) : 
Personne::Personne(nom, prenom, adresse, numero)
{
    m_salaire = salaire;
    m_poste = poste;
}

string Employe::statut_d_emploi()
{
    return "travailleur";
}

string Employe::toString() const
{
    string res = Personne::toString();
    res += "Poste: " + m_poste + "\nSalaire: " + to_string(m_salaire) + "\n";
    return res;
}

ostream& operator<<(ostream& os, const Employe& p)
{
    os << p.toString();
    return os;
}

int Employe::getSalaire() {return m_salaire;}
string Employe::getPoste() {return m_poste;}
void Employe::setSalaire(int salaire) {m_salaire = salaire;}
void Employe::setPoste(string poste) {m_poste = poste;}