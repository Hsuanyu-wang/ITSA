#include <stdio.h>
#include <stdlib.h>

int main(){
    int test;
    scanf("%d", &test);
    for(int i = 0; i < test; i++){
        int n;
        scanf("%d", &n);
        if(n >= 3 && n <= 5){
            printf("Spring\n");
        }
        else if(n >= 6 && n <= 8){
            printf("Summer\n");
        }
        else if(n >= 9 && n <= 11){
            printf("Autumn\n");
        }
        else{
            printf("Winter\n");
        }
    }
	return 0;
}

