#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()

{
       float C, F;
    printf("veuillez entrez la temperature en Fahrenheit!\n");
    scanf("%f", &F);

    C = (F - 32) / 1.8;
    printf("la temperature en degre celsius est : %f \n", C);

    if (C >= 34) {
        printf("il fait chaud");
    }

    else if (C <= 10) {
        printf("il fait tres froid");
    } else {
        printf("il fait froid");
    }
     

    return 0;
}
