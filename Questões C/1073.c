#include <stdio.h>

int main(){
    int N, V=2;

    scanf("%d", &N);

    while (V <= N){
        printf ("%d^2 = %d\n", V, V*V);
        V = V+2;
    }

    return 0;
}