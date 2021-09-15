// But : Développer un programme qui entre les ventes brutes hebdomadaires de chaque représentant 
// et qui calcule et affiche son salaire.
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
   int vb;
   // Demmander à l'utilisateur d'insérer un montant3
   cout << "Veuiller insérer le montant des ventes brutes ou -1 pour fermer le programme : ";
   cin >> vb;

      while (vb !=-1)
      {

         cout << (vb * 0.075) + 250 << "$" << " au total pour les ventes \n";


         cout << "Veuiller insérer le montant des ventes brutes ou -1 pour fermer le programme : ";
         cin >> vb;



         system("pause");
      }
}


// Plan de test
//    vb   |   écran
// --------------------
//  5000   |   625$ au total pour les ventes
// 10450   |   1033,75$ au total pour les ventes
//     0   |   250$ au total pour les ventes
//    -1   |   "Le programme se ferme"
// -5000   |  -125$ au total pour les ventes