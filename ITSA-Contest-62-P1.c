#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int test;
    scanf("%d", &test);
    for(int i = 0; i < test; i++){
        int m[3][3];

        for(int j = 0; j < 3; j++)
            for(int k = 0; k < 3; k++)
                m[j][k] = 0;
        for(int j = 0; j < 3; j++)
            for(int k = 0; k < 3; k++)
                scanf("%d", &m[j][k]);

        int flag = 0;
        for(int j = 0; j < 3; j++){
            if(m[j][0] == m[j][1] && m[j][1] == m[j][2]){
                flag = 1;
                break;
            }
            else if(m[0][j] == m[1][j] && m[1][j] == m[2][j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            if(m[2][0] == m[1][1] && m[1][1] == m[0][2]){
                flag =1;
            }
            else if(m[0][0] == m[1][1] && m[1][1] == m[2][2]){
                flag = 1;
            }
        }
        if(flag == 1)
            printf("True\n");
        else
            printf("False\n");
    }
	return 0;
}

//2
//1 0 1
//0 0 1
//1 0 0
//0 1 0
//1 0 0
//1 0 1
