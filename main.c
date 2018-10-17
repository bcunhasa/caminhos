#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void iniciaGrafo();
void imprimeGrafo();
void buscaCaminho(int, int, int);

const int VERTICES = 20;
const int VIZINHOS = 5;

int adjacencias[VERTICES][VIZINHOS];

int main() {
    iniciaGrafo();
    imprimeGrafo();
    
    for (int i = 0; i < VERTICES; i++) {
        buscaCaminho(i, i, 0);
    }
    
    return 0;
}

void iniciaGrafo() {
    srand(time(NULL));
    for (int i = 0; i < VERTICES; i++)
        for (int j = 0; j < VIZINHOS; j++)
            adjacencias[i][j] = rand() % VERTICES;
}

void imprimeGrafo() {
    for (int i = 0; i < VERTICES; i++) {
        for (int j = 0; j < VIZINHOS; j++) {
            printf("%d, ", adjacencias[i][j]);
        }
        printf("\n");
    }
}

void buscaCaminho(int inicial, int atual, int contador) {
    for (int i = 0; i < VERTICES; i++) {
        if (contador == VERTICES)
        
        if (adjacencias[atual][i] != 1)
    }
    if (adjacencias[inicial][atual])
}
