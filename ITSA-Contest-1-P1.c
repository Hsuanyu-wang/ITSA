#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c;
        while( scanf("%d %d %d", &a, &b, &c) != EOF){
        int flag = 1;
        if( (c>=(a+b)) || (b>=(a+c)) || (a>=(b+c)) )
            flag = 0;
        if(flag == 1)
            printf("fit\n");
        else if(flag == 0)
            printf("unfit\n");
        }
	return 0;
}
