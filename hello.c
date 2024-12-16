#include <stdio.h>

// Funzione per simulare la porta NOT
int NOT(int A) {
    // Il valore di ritorno della funzione
    return 1 - A;
}

// Funzione per simulare la porta AND
int AND(int A, int B) {
    // Il valore di ritorno della funzione
    // TODO aggiungere l'espressione matematica per soddisfare la porta AND
    return A*B;
}

// Funzione per simulare la porta OR
int OR(int A, int B) {
    // Il valore di ritorno della funzione
    // TODO aggiungere l'espressione matematica per soddisfare la porta OR
    return (1-(1-A)*(1-B));
}

int main() {
    // Dichiara una variabile
    int A, B, C, D, E, F;

    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di A (0 o 1):\n");
    // Attende che l'utente inserisca un valore e prema invio
    scanf("%d", &A);
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Hai inserito il valore A: %d\n", A);

    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di B (0 o 1):\n");
    // Attende che l'utente inserisca un valore e prema invio
    scanf("%d", &B);
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Hai inserito il valore B: %d\n", B);

        // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di C (0 o 1):\n");
    // Attende che l'utente inserisca un valore e prema invio
    scanf("%d", &C);
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Hai inserito il valore C: %d\n", C);

            // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di D (0 o 1):\n");
    // Attende che l'utente inserisca un valore e prema invio
    scanf("%d", &D);
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Hai inserito il valore D: %d\n", D);

                // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di E (0 o 1):\n");
    // Attende che l'utente inserisca un valore e prema invio
    scanf("%d", &E);
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Hai inserito il valore E: %d\n", E);

                // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Inserisci il valore di F (0 o 1):\n");
    // Attende che l'utente inserisca un valore e prema invio
    scanf("%d", &F);
    // Mostra un messaggio sul terminale che l'utente può leggere
    printf("Hai inserito il valore F: %d\n", F);

    if (A != 0 && A != 1 && B != 0 && B != 1 && C != 0 && C != 1 && D != 0 && D != 1 && E != 0 && E != 1 && F != 0 && F != 1) {
        printf("I valori inseriti non sono 1 o 0\n");
    } else {
        printf("I valori inseriti sono 1 o 0\n");
        int Labirinto1 = AND(OR(NOT(A), A), OR(NOT(B), B));
        int Labirinto2 = AND(OR(NOT(C), C), OR(NOT(D), D));
        int Labirinto3 = AND(OR(NOT(E), E), OR(NOT(F), F));
        int Labirinto = OR(AND(Labirinto1, Labirinto2), Labirinto3);
        printf("Il valore di uscita della funzione Labirinto è: %d\n", Labirinto);
    }

    printf("\n\n");
}