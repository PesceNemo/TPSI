#include <stdio.h>

int main()
{
    int N, somma = 0, num = 2, cont = 0, primo = 0;

    // Number input N
    do
    {
        printf("Inserisci un numero intero positivo N: \n");
        scanf("%d", &N);

        if (N <= 0)
            printf("Il numero deve essere positivo. Reinserisci\n");
        
    } while (N <= 0);

    // Calculation of the sum of the first alternating prime numbers up to N
    while (num <= N)
    {
        primo = 1; // Assumes num is prime

        // Tests whether current_number is divisible by a number between 2 and num-1
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                primo = 0; // If it's divisible, it's not prime
                break;
            }
        }

        if (primo==1)
        {
            cont++;
            if (cont % 2 == 1)
            {
                printf("Numero primo alternato: %d\n", num);
                somma += num;
            }
        }

        num++;
    }

    // I print the sum
    printf("La somma dei primi numeri primi alternati fino a %d e': %d\n", N, somma);

    return 0;
}
