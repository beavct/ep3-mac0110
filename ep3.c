#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 256


    /*printf ("Bem vindo ao programa de processamento de imagens\n");
    printf ("Escolha uma opção:\n");
    printf ("Q Quit (terminar o programa\n");
    printf ("L Ler um arquivo de imagens\n");
    printf ("S Salvar a imagem em arquivo\n");
    printf ("M Manter a imagem-entrada anterior\n");
    printf ("B Binarizar a imagem-entrada\n");
    printf ("C Calcular Contorno da imagem-entrada\n");
    printf ("F Filtrar a imagem-entrada\n");
    printf ("I Inverter a imagem-entrada\n");
    printf ("R Rotular a imagem-entrada\n");*/

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
    int rodando = 1;
    char filename[256];
    char escolha;
    int *I, *R;
    int h, w, t;

    while (rodando) {

        if (*I== NULL) {
            printf ("Escolha uma opção:\n");
            printf ("Q Quit\n");
            printf ("L Ler um arquivo de imagens\n");
            scanf ("%c", &escolha);        
        }

        else if (*I !NULL && *R == NULL) {
            printf ("Escolha uma opção:\n");
            printf ("M Manter a imagem-entrada anterior\n");
            printf ("B Binarizar a imagem-entrada\n");
            printf ("C Calcular Contorno da imagem-entrada\n");
            printf ("F Filtrar a imagem-entrada\n");
            printf ("I Inverter a imagem-entrada\n");
            printf ("R Rotular a imagem-entrada\n");
            scanf ("%c", &escolha);
        }

        else if (*I != NULL && *R != NULL) {
            printf ("escolha uma opção\n");

            scanf ("%c", &escolha);
        }

        if (escolha == L) {
            printf ("Digite o nome do arquivo de entrada:\n");
            scanf ("%s", filename);
            if (arq == NULL) {
                printf ("Não consegui ler o arquivo %s\n", filename);
                return 0;
            }
            else {
                arq = fopen (filename, "r");
                *I = *load_image_from_file (filename, *w, *h);
                fclose (arq);
        }
        else if (escolha == S) {

        }
        else if (escolha == M) {
            
        }
        else if (escolha == B) {
            printf ("Digite o valor da limiarização:\n");
            scanf ("%d", &t);
            *I = binarize (*I, w, h, t);
        }
        else if (escolha == C) {
            
        }
        else if (escolha == F) {
            
        }
        else if (escolha == I) {
            
        }
        else if (escolha == R) {
            
        }
        else /*escolha == Q */ {
            free (I); I = NULL;
            if (*R !NULL) {
                free (R); R = NULL;
            }
            rodando = 0;
        }
    }
    return 0;
}

int *load_image_from_file(char *filename, int *w, int *h) {
    int *V;
    int i;

    arq = fopen (filename, "r");
    fscanf (f, "%[^\n]\n", line);
    fscanf (f, "%d %d", &w, &h);
    V = malloc (sizeof(int) * w * h);

    for (i = 0; i < w * h; i++) {
        scanf ("%d", &V[i]);
    }
    return *V;
    free (V); V = NULL;
}

void save_image_to_file(char *filename, int *I, int w, int h) {

}

int *invert_image(int *I, int w, int h) {
    int *R;
    int i, j;

    R = malloc (sizeof(int) * w * h);

    w--; h--;
    for (i = 0; i < w; i++) {
        for (j = 0; j < h; j++) [
            *R[(i * w) + j] = 255 - *I [(i * w) + j];
        ]
    }
    return *R;
    free (R); R = NULL;
}

int *label_components(int *I, int w, int h, int *ncc) {

}

int *filter_image(int *I, int w, int h, int d, int tipo) {

}

void contorno () {

}

int *binarize(int *I, int w, int h, int t) {
    int *R;
    int i, j;

    R = malloc (sizeof(int) * w * h);

    w--; h--;
    for (i = O; i < w; i++) {
        for (j = 0; j < h; j++){
            if (*R[(i * w) + j] >= t) R[(i * w) + j] = 255;
            else *R[(i * w) + j] = 0;
        }
    }
    return *R;
    free (R); R = NULL;
}
