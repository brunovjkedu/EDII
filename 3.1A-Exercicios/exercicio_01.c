
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char caractere;
    int contador = 0;
    // Abre o arquivo para leitura
    arquivo = fopen("arquivo_texto.txt", "r");
    // Verifica se o arquivo foi aberto com sucesso
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    // Lê o arquivo caractere por caractere até o final
    while ((caractere = fgetc(arquivo)) != EOF) {
        if(caractere == ' ' || caractere == '\n' ){
            contador ++;
        }
    }
    // Garantir que conte a ultima palavra
    contador += 1;

    // Imprimir resultado
    printf("O arquivo possui: %d palavras.\n", contador);

    // Fecha o arquivo
    fclose(arquivo);

    return 0;
}
