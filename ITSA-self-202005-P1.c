#include <stdio.h>

int main(){
    float H, BB, N;
    scanf("%f %f %f", &H, &BB, &N);
    float WHIP = (H + BB)/N;
    printf("%.2f\n", WHIP);
    float H1, BB1, HBP, AB, SF, TB;
    for(int i = 0; i < 9; i++){
        scanf("%f %f %f %f %f %f", &H1, &BB1, &HBP, &AB, &SF, &TB);
        float OBP = (H1 + BB1 + HBP)/(AB + BB1 + SF + HBP);
        float SLG = TB/AB;
        float OPS = OBP + SLG;
        printf("%.3f\n", OPS);
    }
}

//171 33 138
//126 24 5 375 4 209
//115 51 8 363 4 210
//56 23 2 164 2 88
//109 40 2 391 5 173
//156 65 9 411 8 283
//135 53 9 401 9 260
//59 30 6 205 3 107
//108 33 11 371 6 166
//110 31 11 378 3 203
