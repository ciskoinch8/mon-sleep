// Programme qui fait une pause.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void mon_sleep(int nbr_seeconds);

int main(void){
    
    int x;
    int wait = 13;

    printf("Pause pendant %d seconds\n", wait);
    printf("==> ");

    for(x = 1; x <= wait; x++){
        printf("x");
        fflush(stdout); // on force l'affichage du point sur les machines qui utilisent la memoire tampon.
        mon_sleep(1); // pause de 1 secondes
    }
    printf("\nFin !\n");

   EXIT_SUCCESS;
}

// Pause pendant un nombre de secondes determine

void mon_sleep(int nbr_seeconds){
    clock_t goal;

    goal = ( nbr_seeconds * CLOCKS_PER_SEC) + clock();

    while(goal > clock()){
        ; // loop
    }
}
