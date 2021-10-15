//Ditributeur d'Oréos
//Problème : La gourmandise et ses conséquences.
//Solution : Limiter le nombre d'Oréos dans une journée.

#include <stdio.h>
#include <cs50.h>
#include <string.h>
typedef struct

{
    string name; //déclarations chaîne de caractère "name"
    int code; //déclaration d'un entier "code"
}   user; // conteneur de données

int main(void)
{
    user people[4]; // tableau contenant les données des utilisateurs
    people[0].name = "Théo";
    people[0].code = 0000 ;
    people[1].name = "Max";
    people[1].code = 1111 ;
    people[2].name = "Cloé";
    people[2].code = 2222 ;
    people[3].name = "Lola";
    people[3].code = 3333 ;



    string answer1 = get_string("Feeling a little peckish?\nWhich greedy are you ? Théo,Max,Cloé,Lola ?\n"); //

    for (int i = 0; i < 4; i ++) //boucle afin d'éviter la répetition de la saisie
    {
        if (strcmp(answer1, people[i].name) == 0)  //Comparaison des chaînes de caractères
        {
            int code = get_int("enter your code\n"); //appel de la variable "code"
            if (code == people[i].code) //
            {
                printf("opened, treat yourself !"); //affichage
                return 0;

            }
            else
            {
                printf("wrong code\n"); //affichage
                return 0;
            }

        }

    }
    printf("wrong user !\n");
    return 0;

}
