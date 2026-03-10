/*
Leitura e Impressão de Linhas Específicas: Escreva um programa que leia um
arquivo de texto linha por linha e imprima apenas as linhas que começam com uma
determinada letra ou palavra especificada pelo usuário
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arquivo;
    char linha[500];
    char busca[100];

    // Abrir arquivo
    arquivo = fopen("arquivo_texto.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Digite a letra ou palavra que a linha deve comecar: ");
    fgets(busca, sizeof(busca), stdin);

    // Remove o \n do fgets
    busca[strcspn(busca, "\n")] = 0;

    printf("\nLinhas que comecam com \"%s\":\n\n", busca);

    // Ler linha por linha
    while (fgets(linha, sizeof(linha), arquivo) != NULL) {

        // Comparar o inicio da linha
        if (strncmp(linha, busca, strlen(busca)) == 0) {
            printf("- %s\n\n", linha);
        }
    }

    fclose(arquivo);

    return 0;
}