#include <stdio.h>
int main(){
    int test_num, n;
    double To, Ti;
    scanf("%d", &test_num);
    for(int i = 0; i < test_num; i++){
        scanf("%lf,%d", &To, &n);
        Ti = To;
        for(int j = 1; j <= n; j++)
            Ti += j*2.71828;
        int a = (int)(Ti*10000);
        printf("%.4lf", ((float)(a))/10000);
        printf("\n");
    }
	return 0;
}
