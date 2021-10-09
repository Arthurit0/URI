#include <stdio.h>

int main(){
    int hI, mI, hF, mF, durH, durM;

    scanf("%d", &hI);
    scanf("%d", &mI);
    scanf("%d", &hF);
    scanf("%d", &mF);

    if (hI == hF){
        if (mF > mI){
            durH = 0;
            durM = mF - mI;
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durH, durM);
        }else if (mI > mF){
            durH = 23;
            durM = 60 - (mI - mF);
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durH, durM);
        }else{
            printf ("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        }
    }

    if (hF > hI){
        durH = hF - hI;
        if (mF >= mI){
            durM = mF - mI;
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durH, durM);
        }
        if (mI > mF){
            durH--;
            durM = 60 - (mI - mF);
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durH, durM);
        }
    }else if (hI > hF){
        durH = 24 - (hI - hF);
        if (mF >= mI){
            durM = mF - mI;
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durH, durM);
        }
        if (mI > mF){
            durH--;
            durM = 60 - (mI - mF);
            printf ("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durH, durM);
        }
    }

    return 0;
}