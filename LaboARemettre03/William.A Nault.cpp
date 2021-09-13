// But : Développer un programme qui entre les ventes brutes hebdomadaires de chaque représentant 
// et qui calcule et affiche son salaire.
// Auteur : William Nault
// Date : 2021-09-13

#include <iostream>

using namespace std;

void main()
{
   // Pour afficher correctement les accents
   setlocale(LC_ALL, "");

   const double salaire = 250;

   double ventebrute;

   double total;