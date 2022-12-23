#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int test_num;
    scanf("%d", &test_num);
    for(int i = 0; i< test_num; i++){
        double x, y, dist;
        scanf("%lf %lf", &x, &y);
        dist = sqrt( (10-x)*(10-x) + (10-y)*(10-y) );
        if(dist <= 1)
            printf("10\n");
        else if(dist <= 2 && dist > 1)
            printf("9\n");
        else if(dist <= 3 && dist > 2)
            printf("8\n");
        else if(dist <= 4 && dist > 3)
            printf("7\n");
        else if(dist <= 5 && dist > 4)
            printf("6\n");
        else if(dist <= 6 && dist > 5)
            printf("5\n");
        else if(dist <= 7 && dist > 6)
            printf("4\n");
        else if(dist <= 8 && dist > 7)
            printf("3\n");
        else if(dist <= 9 && dist > 8)
            printf("2\n");
        else if(dist <= 10 && dist > 9)
            printf("1\n");
        else
            printf("0\n");
    }
	return 0;
}
