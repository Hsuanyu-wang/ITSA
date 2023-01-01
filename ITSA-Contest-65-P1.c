#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char arr[100], right[100];
    while(scanf("%s", arr) != EOF){
//        printf("arr %s\n", arr);
        int l = strlen(arr), flag = 0;
        int half = l/2;
        if(l % 2 == 0){
            flag = 0;
        }
        else
            flag = 1;

        for(int i = 0; i < half; i ++){
            right[i] = arr[l-i-1];
        }
        right[half] = '\0';
//        printf("right %s\n", right);
        arr[half] = '\0';
//        printf("arr %s\n", arr);
        if(strcmp(arr, right) == 0){
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
	return 0;
}
