// But : Écrire un programme qui lit 10 nombres et qui détermine et affiche la plus grande valeur.
// Auteur : William Nault
// Date : 2021-09-15

#include <iostream>

// Permet d'enlever les std
using namespace std;

void main()
{
   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");

   // Déclaration des variables
   int compteur = 0;
   double nombre;
   int max = 0;


   // Demander à l'utilisateur de rentrer 10 nombres
   cout << "veuillez entrer 10 nombre : \n";
   // Création de la loop
   while (compteur < 10)
   {
      cin >> nombre;
      compteur++;
      
      if (max < nombre)
      {

         max = nombre;
      }
   }
   cout << " Le plus grand nombre est : ";
   cout << max;




   system("pause");
}
// Plan de test
//                  nombre                      |         Écran
//   7, 60, 87 ,12, 3, 0, 56, 85, 9, 10         |  Le plus grand nombre est : 87
//   0, 0, 0, 0, 0, 0, 0, 0, 0, 0               |  Le plus grand nombre est : 0
//  780, 862, 1090, 9, 2, 8075, 9134, 0, 134, 78|  Le plus grand nombre est : 9134
//  -5, 0, -349, -90, 2, -67, -10, -76, 12, -903|  Le plus grand nombre est : 12