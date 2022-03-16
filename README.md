Si ce fichier ne s'affiche pas correctement, veuillez le consulter à l'adresse suivante :

https://github.com/ModEnter/TP3



# TP3 - Héritage multiple

## Auteurs

Paul de la Porte des Vaux - DELP27010300

Pierre Bourrely - BOUP26100206



## Implémentations

- [x] Classe abstraite **Personne** et ses attributs
- [x] Classe **Etudiant** et ses attributs
- [x] Classe **Employe** et ses attributs
- [x] Classe **Stagiaire** héritant virtuellement de **Employe** et **Etudiant**
- [x] Accesseurs des classes
- [x] Accesseurs modificateurs des classes
- [x] Afficheur de chaque classe
- [x] Constructeur et destructeur virtuels
- [x] Constructeur de recopie et canonisation des classes
- [x] Liste polymorphe (vecteur de pointeurs de **Personnes**)
- [x] Affichage à l'aide du polymorphisme (méthode **toString** virtuelle)
- [x] Compartimentation des classes (grâce aux fonctions amies, à l'héritage protégé et aux accesseurs)



## Compilation et exécution

#### Linux

```makefile
make main
./main
```

#### Windows

- Ouvrir la solution (fichier sln) dans Visual Studio 2019

- Lancer la compilation à l'aide du débogueur MSVC sur le fichier main.cpp

- Exécuter le fichier *TP3.exe* généré (dans le dossier x64 ou x86 selon configuration)

  

## Commentaire

Toutes les conditions demandées sont implémentées. Le constructeur de **Personne** est en protected pour forcer l'abstraction de la classe. La liste est affichée grâce à la ligature dynamique de la fonction **toString**. Tous les objets instanciés sont détruits (pas de fuite de mémoire).