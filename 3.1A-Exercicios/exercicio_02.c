#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo, *novo_arquivo;
    char caractere;
    // Abre o arquivo para leitura
    arquivo = fopen("arquivo_texto.txt", "r");
    novo_arquivo = fopen("novo_arquivo_texto.txt", "w");

    // Verifica se os arquivos foram abertos com sucesso
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo existente.\n");
        return 1;
    }
    if (novo_arquivo == NULL) {
        printf("Erro ao abrir o novo arquivo.\n");
        fclose(novo_arquivo);
        return 1;
    }

    // Copia caractere por caractere
    while ((caractere = fgetc(arquivo)) != EOF) {
        fputc(caractere, novo_arquivo);
    }

    // Fecha o arquivo
    fclose(arquivo);
    fclose(novo_arquivo);

    return 0;
}
