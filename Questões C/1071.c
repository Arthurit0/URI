#include <stdio.h>

int main(){
    int X, Y, i, cont=0, temp;

    scanf("%d", &X);
    scanf("%d", &Y);

    if (Y<X){
        temp = X;
        X = Y;
        Y = temp;
    }

    for(i = X+1; i<Y; i++){
        if(i%2 != 0){
            cont = cont + i;
        }
    }
    printf("%d\n", cont);

    return 0;
}