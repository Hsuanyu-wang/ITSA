#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int test;
    scanf("%d", &test);
    for(int i = 0; i < test; i++){
        int k, c, n, r;
        scanf("%d,%d,%d", &k, &c, &n);
        if(c == 1){
            r = k - 17*n;
        }
        else if(c == 2){
            r = k - 25*n;
        }
        int arr[4];
        arr[3] = r/50, r %= 50;
        arr[2] = r/10, r %= 10;
        arr[1] = r/5, r %= 5;
        arr[0] = r;
        int flag = 0;
        for(int j = 0; j < 4; j++){
            if(arr[j] != 0){
                if(flag == 1)
                    printf(",");
                flag = 1;
                switch(j){
                    case 0:
                        printf("Coin 1:%d", arr[0]);
                        break;
                    case 1:
                        printf("Coin 5:%d", arr[1]);
                        break;
                    case 2:
                        printf("Coin 10:%d", arr[2]);
                        break;
                    case 3:
                        printf("Coin 50:%d", arr[3]);
                        break;
                }
            }
        }
        printf("\n");
    }
	return 0;
}
