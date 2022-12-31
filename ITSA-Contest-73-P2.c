#include <stdio.h>
#include <stdlib.h>

int main(){
    float m[2], k[2];
    for(int i = 0; i < 2; i++){
        scanf("%f %f", &m[i], &k[i]);
    }
    printf("(%.2f)+(%.2f)i\n", m[0]+m[1], k[0]+k[1]);
    printf("(%.2f)+(%.2f)i\n", m[0]-m[1], k[0]-k[1]);
    printf("(%.2f)+(%.2f)i\n", m[0]*m[1]-k[0]*k[1], k[0]*m[1]+m[0]*k[1]);
	return 0;
}

