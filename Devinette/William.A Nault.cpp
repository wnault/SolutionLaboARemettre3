// But : Compl�ter un programme pour qu'il donne la possibilit�
// � l'utilisateur de deviner le nombre contenu dans random avec 5 chances
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

   // D�claration des constantes
  
   const int nbchance = 5;
   const int max = 30;
   const int min = 20;


   // D�claration des variables
   int random;
   int nombre; // C'est la responsabilit� de l'utilisateur de lui donner une valeur de d�part
   int nbessaies = nbchance;  // Une variable pour le calcul dans le programme, 
                             //c'est la responsabilit� du programmeur de lui mettre une valeur de d�part
   // Au d�part, au d�but du programme, l'utilisateur a bien nbchance chances
   srand(time(0));
   random = rand() % (max -min + 1) + min;

   // Pour tester le programme, on affiche le nombre � deviner
  // cout << " casse to� pas la t�te le nombre c'est : " << random << endl;
    
   // Demander � l'utilisateur un nombre
   cout << "Vous devez deviner un nombre compris entre " << min << " et " << max << "." << endl;
   cout << "Vous avez " << nbchance << "chance(s)." << endl;
   cout << "Veuillez entrer un nombre compris entre " << min << " et " << max << " : ";
   cin >> nombre;

   // Tant que le nombre n'est pas compris entre min et max, on affiche un message d'erreur

   while (!(nombre>=min && nombre<=max)) 
      // nombre doit �tre plus grand que min(0) || nombre doit �tre plus petit que max(100)
      // Le !(n'est pas) annule et inverse toute les signes 
   {
      cout << "ERREUR : Le nombre n'est pas compris entre " << min << " et " << max << "." << endl;
      cout << "Veuillez entrer un nombre compris entre " << min << " et " << max << " : ";
      cin >> nombre;
   }
   // On vien de lire un bon nombre, le nombre d'essais doit diminuer de 1
   nbessaies--;
               
    // Tant que le nombre n'est pas �gal a random et qu'il reste des chances, alors on doit redemmander le nombre            
      while (nombre != random && nbessaies >=1) //nb est diff�rent de random
         {
         cout << " Non ce n'est pas le bon nombre." << endl;
         cout << "Il vous reste " << nbessaies << " chance(s). " << endl;
         cin >> nombre;
         while (!(nombre >= min && nombre <= max))
            // nombre doit �tre plus grand que min(0) || nombre doit �tre plus petit que max(100)
            // Le !(n'est pas) annule et inverse toute les signes 
         {
            cout << "ERREUR : Le nombre n'est pas compris entre " << min << " et " << max << "." << endl;
            cout << "Veuillez entrer un nombre compris entre " << min << " et " << max << " : ";
            cin >> nombre;
         }
         // On vien de lire un bon nombre, le nombre d'essais doit diminuer de 1
         nbessaies--;

         }


      // Quand on sort de la boucle soit on a gagn� soit on a �puis� toutes les chances
      if (nombre == random)
      {
         cout << " good shit le gros ta pogn� le bon num�ro en " << nbchance - nbessaies << " essai(s)." << endl;
      }
      else
      {
         cout << "Dommage, le bon nombre �tait " << random << "." << endl;
      }


     return 0;
   }

   


// Plan de test
//    nombre     |    �cran
//      67       |   Il vous reste "nbchance" chances
//      -3       |   ERREUR! Ce chiffre n'est pas compris entre 0 et 100.
//       0       |   Il vous reste "nbchance" chances
//     348       |   ERREUR! Ce chiffre n'est pas compris entre 0 et 100.
