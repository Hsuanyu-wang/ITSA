#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        char str[100];
        scanf("%s", str);
        for(int j = 0; j < strlen(str); j++){
            if(str[j] >= 'a' && str[j] <= 'k'){
                if(str[j] == 'a')
                    printf("j");
                else if(str[j] == 'b')
                    printf("k");
                else
                    printf("%c", str[j]-2);
            }
            else if(str[j] >= 'l' && str[j] <= 'v'){
                if(str[j] == 'u')
                    printf("l");
                else if(str[j] == 'v')
                    printf("m");
                else
                    printf("%c", str[j]+2);
            }
            else if(str[j] >= 'w' && str[j] <= 'z'){
                if(str[j] == 'x')
                    printf("w");
                else if(str[j] == 'w')
                    printf("x");
                else if(str[j] == 'y')
                    printf("z");
                else
                    printf("y");
            }
        }
        printf("\n");
    }
    return 0;
}

//2
//decodemasterxxx
//starburststream
