#include<stdio.h>
#include<stdlib.h>

/*Napisati funkciju void rgb_u_cmy(int r, int g, int b,
float *c, float *m, float *y) koja datu boju u rgb formatu konvertuje u boju
u cmy formatu po sledećim formulama:
m = 1 − g/255,
y = 1 − b/255
c = 1 − r/255,

Napisati program koji učitava boju u rgb formatu i ispisuje vrednosti unete boje
u cmy formatu. U slučaju neispravnog unosa, ispisati odgovarajuću poruku o
grešci. Napomena: Vrednosti boja u rgb formatu su u opsegu [0, 255].*/

#define MAX 255
#define MIN 0

void rgbucmy(int r, int g, int b,float *c, float *m, float *y){
    *m = 1 - g/255;
    *y = 1 - b/255;
    *c = 1 -r/255;



}

int main(){
    int r,g,b;
    float c,m,y;
    float *pc=&c;
    float *pm=&m;
    float *py=&y;
    printf("Unesite vrednosti r,g,b: ");
    scanf("%d%d%d", &r,&g,&b);
    if(r>MAX || r<MIN){
        printf("Greska: neispravan unos\n");
        exit(EXIT_FAILURE);
    }
    else if(g>MAX || g<MIN){
        printf("Greska: neispravan unos\n");
        exit(EXIT_FAILURE);
    }
    else if(b>MAX || b<MIN){
        printf("Greska: neispravan unos\n");
        exit(EXIT_FAILURE);
    }

    rgbucmy(r,g,b,pc, pm, py);

    printf("%f %f %f\n" ,*pc, *pm, *py);

    exit(EXIT_SUCCESS);
}