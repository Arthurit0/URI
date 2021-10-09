#include <stdio.h>

int main(){
    float S, I;

    scanf ("%f", &S);

    if (S <= 2000){
        printf ("Isento\n");
    }
    
    if ((S > 2000) && (S <= 3000)){
        I = (S - 2000)*0.08;
        printf("R$ %.2f\n", I);
    }

    if ((S > 3000) && (S <= 4500)){
        I = (S - 3000)*0.18 + 80;
        printf("R$ %.2f\n", I);
    }

    if (S > 4500){
        I = (S - 4500)*0.28 + 350;
        printf("R$ %.2f", I);
    }

    return 0;
}