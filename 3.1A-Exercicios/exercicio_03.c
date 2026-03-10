#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char texto[500];

    // Abre o arquivo para leitura
    arquivo = fopen("arquivo_texto.txt", "a");
    // Verifica se o arquivo foi aberto com sucesso
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Digite um texto para ser adicionado ao arquivo.\n");

    fgets(texto, sizeof(texto), stdin);

    if (texto == NULL) {
        printf("Erro ao ler entrada do usuario.\n");
        return 1;
    }

    // Teste input pelo usuario
    printf("Texto lido: %s.", texto);

    // Adicionar texto ao final do arquivo
    fprintf(arquivo, "%s", texto);

    // Fecha o arquivo
    fclose(arquivo);

    return 0;
}
