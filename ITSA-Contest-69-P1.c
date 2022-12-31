#include <stdio.h>
#include <stdlib.h>

int main(){
    char ID[10];
    while(scanf("%s", ID) != EOF){
        int bias = ID[0]-55;
//        printf("%d\n", (ID[0]-55));
        if(ID[0] == 'I')
            bias = 34;
        else if(ID[0] == 'O')
            bias = 35;
        else if(ID[0] == 'W')
            bias = 32;
        else if(ID[0] == 'Z')
            bias = 33;
        else if(ID[0] > 'W')
            bias -= 3;
        else if(ID[0] > 'O')
            bias -= 2;
        else if(ID[0] > 'I')
            bias -= 1;
        int X1 = bias/10, X2 = bias%10;
//        printf("%d %d\n", X1, X2);
        int P;
        P = X1+(9*X2)+8*(ID[1]-'0')+7*(ID[2]-'0')+6*(ID[3]-'0')+5*(ID[4]-'0')+4*(ID[5]-'0')+3*(ID[6]-'0')+2*(ID[7]-'0')+(ID[8]-'0')+(ID[9]-'0');
//        printf("%d\n", P);
        if(P%10 == 0){
            printf("CORRECT!!!\n");
        }
        else
            printf("WRONG!!!\n");
    }
	return 0;
}
//L163690274
//123456789
//A
//B
//C
//D
//E
//F
//G
//H
//I
//J
//K
//L
//M
//N
//O
//P
//Q
//R
//S
//T
//U
//V
//W
//X
//Y
//Z

