#include <stdio.h>
#include <math.h>
int main(void) {
    int y;
    printf("inserisci un valore reale: ");
    scanf("%d", &y);
    int x;
    for (x=1; pow(x,x) < y; x++) {
    }
    x--;
    printf("il valore che puo' raggiungere x e': %d^%d < %d\n",x, x, y);
    return 0;
}