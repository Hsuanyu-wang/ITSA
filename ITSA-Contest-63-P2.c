#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int test;
    scanf("%d", &test);
    for(int i = 0; i < test; i++){
        char arr[100];
        int count = 0;
        scanf("%s", arr);
        for(int j = 0; j < strlen(arr); j++){
            if(arr[j] == '(')
                count++;
            else if(arr[j] == ')')
                count--;
                if(count < 0)
                    break;
        }
        if(count != 0)
            printf("No\n");
        else
            printf("Yes\n");
    }
	return 0;
}
