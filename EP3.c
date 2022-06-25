#include <stdio.h>
#include <stdlib.h>
#define MAX 256

/*Q Quit (terminar o programa)
L Ler um arquivo de imagens
S Salvar a imagem em arquivo
M Manter a imagem-entrada anterior
B Binarizar a imagem-entrada
C Calcular Contorno da imagem-entrada
F Filtrar a imagem-entrada
I Inverter a imagem-entrada
R Rotular a imagem-entrada*/

int *load_image_from_file(char *filename, int *w, int *h);
void save_image_to_file(char *filename, int *I, int w, int h);
int *invert_image(int *I, int w, int h);
int *label_components(int *I, int w, int h, int *ncc);
int *filter_image(int *I, int w, int h, int d, int tipo);
void contorno();
int *binarize(int *I, int w, int h, int t);

int main () {
    FILE *arq;
    char filename[256];

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", filename);
    if (arq == NULL) {
    printf("Nao consegui abrir o arquivo %s.\n", filename);
    return 0;
    }
    arq = fopen(filename, "r");
    /*formato da imagem: formato, dimensão, máximo, matriz*/



    fclose(arq);
    return 0;
}

int *load_image_from_file(char *filename, int *w, int *h) {

}

void save_image_to_file(char *filename, int *I, int w, int h) {

}

int *invert_image(int *I, int w, int h) {

}

int *label_components(int *I, int w, int h, int *ncc) {

}

int *filter_image(int *I, int w, int h, int d, int tipo) {

}

void contorno () {

}

int *binarize(int *I, int w, int h, int t) {

}