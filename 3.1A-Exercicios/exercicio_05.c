/*
Contagem de Caracteres Específicos: Crie um programa que conte quantas vezes
um caractere específico aparece em um arquivo de texto. Permita que o usuário
especifique o caractere a ser contado
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char caractere;
    // Abre o arquivo para leitura
    arquivo = fopen("arquivo_texto.txt", "r");
    // Verifica se o arquivo foi aberto com sucesso
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    // Lê o arquivo caractere por caractere até o final
    while ((caractere = fgetc(arquivo)) != EOF) {
        printf("%c\n", caractere);
    }
    // Fecha o arquivo
    fclose(arquivo);

    return 0;
}
