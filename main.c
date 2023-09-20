#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int prixAleatoire = rand() % 1000 + 1; // genere un nombre entre 1 et 1000

    int prix_demande;
    char choix_continuer;

    printf("Bienvenue au jeu du Juste Prix !\n");
    printf("Devinez le prix compris entre 1 et 1000.\n");

    while (1){
        printf("Entrez un prix. \n");
        scanf("%d", &prix_demande);

        if (prix_demande < prixAleatoire) {
            printf("C'est plus ! \n");
        }else if (prix_demande > prixAleatoire){
            printf( "C'est moins ! \n");
        }else{
            printf("Bravo, vous avez trouve le juste prix !\n");
            break;
        }
        printf("Voulez-vous continuer (o/n) ? \n ");
        scanf(" %c", &choix_continuer);

        if (choix_continuer == 'n') {
            printf("Vous avez choisi de quitter le jeu. Au revoir !\n");
            break;
        }

    }
    return 0;
}
