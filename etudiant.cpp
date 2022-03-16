#include "etudiant.hpp"

Etudiant::Etudiant(string nom, string prenom, string adresse, string numero, string universite, string programme) : 
Personne::Personne(nom, prenom, adresse, numero)
{
    m_universite = universite;
    m_programme = programme;
}

string Etudiant::statut_d_emploi()
{
    return "sans emploi";
}

string Etudiant::toString() const
{
    string res = Personne::toString();
    res += "Université: " + m_universite + "\nProgramme: " + m_programme + "\n";
    return res;
}

ostream& operator<<(ostream& os, const Etudiant& p)
{
    os << p.toString();
    return os;
}

string Etudiant::getUniversite() {return m_universite;}
string Etudiant::getProgramme() {return m_programme;}
void Etudiant::setUniversite(string universite) {m_universite = universite;}
void Etudiant::setProgramme(string programme) {m_programme = programme;}