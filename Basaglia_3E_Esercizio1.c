#include <stdio.h>

int main() {
    int N, num, sommaPari = 0, sommaDispari = 0, contPari = 0, contDispari = 0;

    // Request for the number of elements
    printf("Inserisci il numero di elementi (non superiore a 30): ");
    scanf("%d", &N);

    if (N <= 0 || N > 30) {
        printf("Numero non valido. Assicurati che sia compreso tra 1 e 30.\n");
        return 1;
    }

    // Reading numbers and calculating sum and average
    printf("Inserisci i numeri:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) { // Even number
            sommaPari += num;
            contPari++;
        } else { // Odd number
            sommaDispari += num;
            contDispari++;
        }
    }

    // Calculation of the average
    float mediaPari = (contPari > 0) ? (float)sommaPari / contPari : 0;
    float mediaDispari = (contDispari > 0) ? (float)sommaDispari / contDispari : 0;

    // Printing of results
    printf("\nRisultati:\n");
    printf("Somma numeri pari: %d\n", sommaPari);
    printf("Media numeri pari: %.2f\n", mediaPari);
    printf("Somma numeri dispari: %d\n", sommaDispari);
    printf("Media numeri dispari: %.2f\n", mediaDispari);

    return 0;
}
