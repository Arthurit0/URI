#include <stdio.h>

int main (){
    float N, media;
    int i, cont;

    for (i=0; i<6; i++){
        scanf("%f", &N);

        if (N>0){
            media += N;
            cont++;
        }
    }

    printf("%d valores positivos\n", cont); 
    printf("%.1f",(media/cont));

}