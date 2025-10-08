#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char palindromo[] = "i topi non avevano nipoti";
    char *inizio = palindromo;
    char *fine = palindromo;

    while (*fine != '\0') {
        fine++;
    }
    fine--; // Puntatore all'ultimo carattere

    while (*inizio <= *fine) {
        if (*inizio == ' ') {
            inizio++;
        }
        if (*fine == ' ') {
            fine --;
        }
    }


}