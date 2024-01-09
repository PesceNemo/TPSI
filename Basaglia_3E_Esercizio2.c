#include <stdio.h>

int main()
{
    float importo, sconto, prezzoNetto;
    char risposta;

    do
    {
        do{// Amount input
        printf("Inserisci l'importo dell'acquisto: ");
        scanf("%f", &importo);
        } while (importo < 0);
        // Calculation of the discount based on the amount
        if (importo <= 500)
        {
            sconto = importo * 1 * 10 / 100;
        }
        else if (importo <= 1000)
        {
            sconto = importo * 0.2;
        }
        else
        {
            sconto = importo * 0.3;
        }

        // Calculation of the net price
        prezzoNetto = importo - sconto;

        // Discount and net price output
        printf("Sconto applicato: %.2f euro\n", sconto);
        printf("Prezzo netto: %.2f euro\n", prezzoNetto);

        // Request to enter additional sums of money
        printf("Vuoi inserire un'altra somma? (s/n): ");
        scanf(" %c", &risposta);

    } while (risposta == 's' || risposta == 'S');

    printf("Grazie per l'utilizzo del programma.\n");

    return 0;
}
