#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int test;
    scanf("%d", &test);
    for(int i = 0; i < test; i++){
        int hin1, hin2, hout1, hout2;
        scanf("%d %d", &hin1, &hin2);
        scanf("%d %d", &hout1, &hout2);
        int in, out, XG, sum = 0;
        in = 60*hin1 + hin2;
        out = 60*hout1 + hout2;
        XG = out - in;
        if(XG <= 120){
            sum = XG/30*30;
        }
        else if(XG > 120 && XG <=240){
            sum = 120 + (XG-120)/30*40;
        }
        else if(XG > 240){
            sum = 120 + 160 + (XG-240)/30*60;
        }
        printf("%d\n", sum);
    }
	return 0;
}
//How are you? 123
//2
