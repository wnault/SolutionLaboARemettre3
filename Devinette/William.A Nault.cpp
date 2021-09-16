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

   // Déclaration des constantes
  
   const int nbchance = 5;
   const int max = 30;
   const int min = 20;


   // Déclaration des variables
   int random;
   int nombre; // C'est la responsabilité de l'utilisateur de lui donner une valeur de départ
   int nbessaies = nbchance;  // Une variable pour le calcul dans le programme, 
                             //c'est la responsabilité du programmeur de lui mettre une valeur de départ
   // Au départ, au début du programme, l'utilisateur a bien nbchance chances
   srand(time(0));
   random = rand() % (max -min + 1) + min;

   // Pour tester le programme, on affiche le nombre à deviner
  // cout << " casse toé pas la tête le nombre c'est : " << random << endl;
    
   // Demander à l'utilisateur un nombre
   cout << "Vous devez deviner un nombre compris entre " << min << " et " << max << "." << endl;
   cout << "Vous avez " << nbchance << "chance(s)." << endl;
   cout << "Veuillez entrer un nombre compris entre " << min << " et " << max << " : ";
   cin >> nombre;

   // Tant que le nombre n'est pas compris entre min et max, on affiche un message d'erreur

   while (!(nombre>=min && nombre<=max)) 
      // nombre doit être plus grand que min(0) || nombre doit être plus petit que max(100)
      // Le !(n'est pas) annule et inverse toute les signes 
   {
      cout << "ERREUR : Le nombre n'est pas compris entre " << min << " et " << max << "." << endl;
      cout << "Veuillez entrer un nombre compris entre " << min << " et " << max << " : ";
      cin >> nombre;
   }
   // On vien de lire un bon nombre, le nombre d'essais doit diminuer de 1
   nbessaies--;
               
    // Tant que le nombre n'est pas égal a random et qu'il reste des chances, alors on doit redemmander le nombre            
      while (nombre != random && nbessaies >=1) //nb est différent de random
         {
         cout << " Non ce n'est pas le bon nombre." << endl;
         cout << "Il vous reste " << nbessaies << " chance(s). " << endl;
         cin >> nombre;
         while (!(nombre >= min && nombre <= max))
            // nombre doit être plus grand que min(0) || nombre doit être plus petit que max(100)
            // Le !(n'est pas) annule et inverse toute les signes 
         {
            cout << "ERREUR : Le nombre n'est pas compris entre " << min << " et " << max << "." << endl;
            cout << "Veuillez entrer un nombre compris entre " << min << " et " << max << " : ";
            cin >> nombre;
         }
         // On vien de lire un bon nombre, le nombre d'essais doit diminuer de 1
         nbessaies--;

         }


      // Quand on sort de la boucle soit on a gagné soit on a épuisé toutes les chances
      if (nombre == random)
      {
         cout << " good shit le gros ta pogné le bon numéro en " << nbchance - nbessaies << " essai(s)." << endl;
      }
      else
      {
         cout << "Dommage, le bon nombre était " << random << "." << endl;
      }


     return 0;
   }

   


// Plan de test
//    nombre     |    écran
//      67       |   Il vous reste "nbchance" chances
//      -3       |   ERREUR! Ce chiffre n'est pas compris entre 0 et 100.
//       0       |   Il vous reste "nbchance" chances
//     348       |   ERREUR! Ce chiffre n'est pas compris entre 0 et 100.
