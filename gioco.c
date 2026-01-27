#include <stdio.h>
#include <ctype.h>

void presentazione() {
    printf("Benvenuto al gioco di domande e risposte!\n");
    printf("Rispondi alle domande e accumula il tuo punteggio!\n\n");
}

char menu_scelta() {
    char scelta;
    printf("\n--- MENU DI SCELTA ---\n");
    printf("A - Iniziare una nuova partita\n");
    printf("B - Uscire dal gioco\n");
    printf("Scelta: ");
    scanf(" %c", &scelta); // Spazio prima di %c per pulire il buffer
    return scelta;
}

int giocare() {
    char nome[50];
    int punteggio = 0;
    char risposta_utente;

    printf("\nInserisci il tuo nome: ");
    scanf("%s", nome);
    printf("Ciao %s, iniziamo il gioco!\n", nome);

    // Domanda 1
    printf("\nDomanda 1: Qual e' la capitale dell'Italia?\n");
    printf("A- Roma\nB- Milano\nC- Parigi\nRisposta: ");
    scanf(" %c", &risposta_utente); 
    if (toupper(risposta_utente) == 'A') {
        printf("Risposta corretta!\n");
        punteggio++;
    } else {
        printf("Risposta sbagliata!\n");
    }

    // Domanda 2
    printf("\nDomanda 2: Quanto fa 2+2?\n");
    printf("A- 3\nB- 4\nC- 5\nRisposta: ");
    scanf(" %c", &risposta_utente);
    if (toupper(risposta_utente) == 'B') {
        printf("Risposta corretta!\n");
        punteggio++;
    } else {
        printf("Risposta sbagliata!\n");
    }

    // Domanda 3
    printf("\nDomanda 3: Chi ha scritto la Divina Commedia?\n");
    printf("A- Dante Alighieri\nB- Leonardo Da Vinci\nC- Michelangelo\nRisposta: ");
    scanf(" %c", &risposta_utente);
    if (toupper(risposta_utente) == 'A') {
        printf("Risposta corretta!\n");
        punteggio++;
    } else {
        printf("Risposta sbagliata!\n");
    }

    printf("\n--- %s, hai totalizzato %d punti ---\n", nome, punteggio);
    return punteggio;
}

int main() {
    char scelta;
    presentazione();

    do {
        scelta = menu_scelta();
        switch (toupper(scelta)) {
            case 'A': 
                giocare(); 
                break;
            case 'B': 
                printf("Arrivederci!\n"); 
                break;
            default: 
                printf("Scelta non valida! Riprova.\n");
                break;
        }
    } while (toupper(scelta) != 'B');

    return 0;
}

    