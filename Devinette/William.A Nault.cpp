// But : Compléter un programme pour qu'il donne la possibilité
// à l'utilisateur de deviner le nombre contenu dans random avec 5 chances
// Auteur : William Nault
// Date : 2021-09-15

   #include <iostream>
   #include <time.h>

   // Permet d'enlever les std
   using namespace std;

int main()
{
   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");

   // Déclaration des variables

   int nombre;
   int nbchance = 4;
   int random;
   //random == rand();
    


   for (int compteur = 0; compteur < 5; compteur++)
   {
            cout << "Veuillez choisir un chiffre entre 0 et 100 : ";
            cin >> nombre  ;
           
            
               if (nombre < 0 || nombre > 100)
                  {
                     cout << "ERREUR! Ce chiffre n'est pas compris entre 0 et 100. \n";
               }
              /* if (random = nombre)
               {
                  cout << "Good job le frère!" << endl;
               }*/
               else
               {
                  cout << "Il vous reste  " << nbchance << " chances \n";
                  nbchance--;
               }
               
                
   
               
      
      
   }

   
}

// Plan de test
//    nombre     |    écran
//      67       |   Il vous reste "nbchance" chances
//      -3       |   ERREUR! Ce chiffre n'est pas compris entre 0 et 100.
//       0       |   Il vous reste "nbchance" chances
//     348       |   ERREUR! Ce chiffre n'est pas compris entre 0 et 100.
