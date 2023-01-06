#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int test;
    scanf("%d", &test);
    for(int i = 0; i < test; i++){
        int n, flag = 0;
        scanf("%d", &n);
        if(n % 4 == 0){
            flag = 1;
            if(n % 100 == 0){
                flag = 0;
            }
            if( n % 400 == 0){
                flag = 1;
            }
        }
        if(flag == 1){
            printf("Bissextile Year\n");
        }
        else if(flag == 0){
            printf("Common Year\n");
        }
    }
	return 0;
}
