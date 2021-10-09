#include <stdio.h>

int main(){
    int i, N, X, contIn=0, contOut=0;

    scanf("%d", &N);

    for (i=0; i<N; i++){
        scanf("%d", &X);
        
        if ((X<10)||(X>20)){
            contOut++;
        }else{
            contIn++;
        }
    }

    printf("%d in\n", contIn);
    printf("%d out\n", contOut);
    return 0;
}