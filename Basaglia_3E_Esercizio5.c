#include <stdio.h>
#include <string.h>

int main() {
    char denominazione[50];
    float prezzo, sommaPrezzi = 0, mediaPrezzi = 0;
    float prezzoMassimo = 0, prezzoMinimo = 0;
    float mediaPrezziIntervallo = 0;
    int countAzioni = 0, countAzioniIntervallo = 0;
    int inserimentoValido = 1; // Flag to manage price reinsertion

    printf("Inserisci la denominazione dell'azione (inserisci 'terminato' per terminare): ");
    scanf("%s", denominazione);

    while (strcmp(denominazione, "terminato") != 0) {//Until the user types 'Finished', the program continues to ask for the name.
        do {
            printf("Inserisci il prezzo dell'azione: ");
            scanf("%f", &prezzo);

            if (prezzo <= 0) {
                printf("Il prezzo deve essere maggiore di zero. Reinserisci.\n");
                inserimentoValido = 0;
            } else {
                inserimentoValido = 1;
            }
        } while (!inserimentoValido);

        // Update information
        sommaPrezzi += prezzo;
        mediaPrezzi = sommaPrezzi / (float)countAzioni;
        countAzioni++;

        if (prezzo > prezzoMassimo || countAzioni == 1) {
            prezzoMassimo = prezzo;
        }

        if (prezzo < prezzoMinimo || countAzioni == 1) {
            prezzoMinimo = prezzo;
        }

        if (prezzo >= 2.50 && prezzo <= 3.50) {
            mediaPrezziIntervallo += prezzo;
            countAzioniIntervallo++;
        }

        // Request input for next action
        printf("Inserisci la denominazione dell'azione (inserisci 'terminato' per terminare): ");
        scanf("%s", denominazione);
    }

    // View the results
    printf("\nRisultati:\n");
    printf("1) Somma dei prezzi delle azioni: %.2f\n", sommaPrezzi);
    printf("2) Media dei prezzi delle azioni: %.2f\n", mediaPrezzi);
    printf("3) Azione con il prezzo massimo: %.2f\n", prezzoMassimo);
    printf("4) Azione con il prezzo minimo: %.2f\n", prezzoMinimo);
    
    if (countAzioniIntervallo > 0) {
        printf("5) Media dei prezzi delle azioni con importo tra 2.50 e 3.50 euro: %.2f\n", mediaPrezziIntervallo / countAzioniIntervallo);
    } else {
        printf("5) Nessuna azione con importo tra 2.50 e 3.50 euro.\n");
    }

    return 0;
}
