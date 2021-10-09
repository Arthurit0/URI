#include <stdio.h>

int main(){
    int Init, N[10], i;

    scanf("%d", &Init);
    N[0] = Init;
    printf("N[0] = %d\n", Init);

    for (i = 1; i<10; i++){
        N[i] = N[i-1]*2;
        printf("N[%d] = %d\n", i, N[i]); 
    }

    return 0;
}