#include "stagiaire.hpp"

Stagiaire::Stagiaire(string nom, string prenom, string adresse, string numero, string universite, string programme, int salaire, string poste, string responsable) : 
Personne::Personne(nom, prenom, adresse, numero),
Etudiant::Etudiant(nom, prenom, adresse, numero, universite, programme), 
Employe::Employe(nom, prenom, adresse, numero, salaire, poste) // héritage multiple
{
    m_responsable = responsable;
}

string Stagiaire::statut_d_emploi()
{
    return "travailleur";
}

string Stagiaire::toString() const
{
    string res = Etudiant::toString();
    res += "Poste: " + m_poste + "\nSalaire: " + to_string(m_salaire) + "\n";
    res += "Responsable: " + m_responsable + "\n";
    return res;
}

ostream& operator<<(ostream& os, const Stagiaire& p)
{
    os << p.toString();
    return os;
}

string Stagiaire::getResponsable() {return m_responsable;}
void Stagiaire::setResponsable(string responsable) {m_responsable = responsable;}