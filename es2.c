#include <stdio.h>

int main()
{
    float importo, sconto, prezzoNetto;
    char risposta;

    do
    {
        do{// Input dell'importo
        printf("Inserisci l'importo dell'acquisto: ");
        scanf("%f", &importo);
        } while (importo < 0);
        // Calcolo dello sconto in base all'importo
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

        // Calcolo del prezzo netto
        prezzoNetto = importo - sconto;

        // Output dello sconto e del prezzo netto
        printf("Sconto applicato: %.2f euro\n", sconto);
        printf("Prezzo netto: %.2f euro\n", prezzoNetto);

        // Richiesta di inserire ulteriori somme di denaro
        printf("Vuoi inserire un'altra somma? (s/n): ");
        scanf(" %c", &risposta);

    } while (risposta == 's' || risposta == 'S');

    printf("Grazie per l'utilizzo del programma.\n");

    return 0;
}
