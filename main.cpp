#include "stagiaire.cpp"
#include "employe.cpp"
#include "personne.cpp"
#include "etudiant.cpp"
#include <vector>


int main()
{
    vector<Personne*> liste;
    Etudiant* p1 = new Etudiant("Paul", "de La Porte", "751 rue des hospitalieres", "87654321", "UCAQ", "Informatique");
    Stagiaire* p2 = new Stagiaire("Jean", "Dupont", "31 bd talbot", "12345678", "UQAC", "Commerce", 1000, "Consultant", "Jacques Dupont");
    Employe* p3 = new Employe("Claire", "Tremblay", "4 rue du Crist-Roi", "87654321", 3400, "responsable comptabilité");
    Etudiant* p4 = new Etudiant("Simon", "Pierre", "3 rue des hospitalieres", "12345678", "Paris IV", "Gestion");
    Stagiaire* p5 = new Stagiaire("Pierre", "Apôtre", "lieu-dit le paradis", "87654321", "Paradis club", "Disciple", 10000, "Videur", "Jesus Christ");
    Employe* p6 = new Employe("Matthieu", "l'évangéliste", "7 rue du Crist-Roi", "12345678", 4000, "rédacteur en chef");
    Employe* p7 = new Employe("Jimmy", "Tremblay", "4 bd de l'université", "87654321", 2300, "technicien de surface");
    Etudiant* p8 = new Etudiant("Jérôme", "Gagnon", "3 rue Pablo Escobar", "12345678", "UQAM", "Philosophie");
    Stagiaire* p9 = new Stagiaire("Henri", "Roy", "boulevard de l'étoile", "87654321", "Polytechnique", "Génie quantique", 400, "Chercheur", "William Tremblay");
    Employe* p10 = new Employe("kevin", "Côté", "423 rue du maréchal de Lattre de Tassigny", "12345678", 2800, "enseignant");
    liste.push_back(p1);
    liste.push_back(p2);
    liste.push_back(p3);
    liste.push_back(p4);
    liste.push_back(p5);
    liste.push_back(p6);
    liste.push_back(p7);
    liste.push_back(p8);
    liste.push_back(p9);
    liste.push_back(p10);

    for(size_t i = 0; i < liste.size(); i++)
    {
        string tmp = liste[i]->toString();
        cout << tmp << endl << endl;
    }

    for(size_t i = 0; i < liste.size(); i++)
    {
        delete liste[i]; // on libère la mémoire, les destructeurs étant dynamiques
    }
}

