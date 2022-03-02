#include<stdio.h>
#include<stdlib.h>

/*Zadatak 2.2.1 Napisati funkciju void uredi(int *pa, int *pb) koja ure-
đuje svoja dva celobrojna argumenta tako da se u prvom nalazi manja vrednost,
a u drugom veća. Napisati program koji učitava dva cela broja i ispisuje uređene
brojeve.*/

void uredi(int *pa, int *pb)
{   int a,b;
    if(a<b)
    {
        int temp= *pa;
        *pa=*pb;
        *pb=temp;
    }
}

int main(){
    int a,b;
    int *pa=&a;
    int *pb=&b;

    printf("Unesi dva cela broja: ");
    scanf("%d %d", &pa, &pb);
    uredi(&a,&b);
    printf("Uredjeni: %d, %d\n" , pa,pb);

    return 0;



}
