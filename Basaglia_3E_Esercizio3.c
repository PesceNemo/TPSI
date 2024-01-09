//Scrivere un programma in C che, dopo aver letto N numeri 
//( scelto dall'utente) calcoli e visualizzi media somma 
//conteggio
#include <stdio.h>

int main() {
    int N, num,sommaP = 0, sommaN = 0,contP = 0, contN = 0;
    float mediaP = 0.0, mediaN = 0.0;
    do{
    // Input del numero di elementi N
    printf("Inserisci il numero di elementi N: ");
    scanf("%d", &N);
    }while(N<=0);
    // Input dei numeri e calcolo delle statistiche
    for (int i = 0; i < N; i++) {
        printf("Inserisci il %d° numero: ", i + 1);
        scanf("%d", &num);

        if (num > 0) {
            sommaP += num;
            contP++;
        } else if (num < 0) {
            sommaN += -num; // Somma in valore assoluto
            contN++;
        }
    }

    // Calcolo delle medie
    if (contP > 0) {
        mediaP = (float)sommaP / contP;
    }

    if (contN > 0) {
        mediaN = (float)sommaN / contN;
    }

    // Output dei risultati
    printf("\nSomma dei numeri positivi: %d\n", sommaP);
    printf("Somma dei numeri negativi in valore assoluto: %d\n", sommaN);
    printf("Conteggio dei numeri positivi: %d\n", contP);
    printf("Conteggio dei numeri negativi: %d\n", contN);
    printf("Media dei numeri positivi: %.2f\n", mediaP);
    printf("Media dei numeri negativi: %.2f\n", mediaN);

    return 0;
}