#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int test_num;
    scanf("%d", &test_num);
    char word1[9], word2[9];
    for(int i = 0; i < test_num; i++){
        scanf("%s", word1);
        scanf("%s", word2);
        if(!strcmp(word1, "rock")){
            if(!strcmp(word2, "rock")){
                printf("0\n");
            }
            else if(!strcmp(word2, "paper")){
                printf("2\n");
            }
            else if(!strcmp(word2, "scissors")){
                printf("1\n");
            }
            else if(!strcmp(word2, "lizard")){
                printf("1\n");
            }
            else if(!strcmp(word2, "Spock")){
                printf("2\n");
            }
        }
        else if(!strcmp(word1, "paper")){
            if(!strcmp(word2, "rock")){
                printf("1\n");
            }
            else if(!strcmp(word2, "paper")){
                printf("0\n");
            }
            else if(!strcmp(word2, "scissors")){
                printf("2\n");
            }
            else if(!strcmp(word2, "lizard")){
                printf("2\n");
            }
            else if(!strcmp(word2, "Spock")){
                printf("1\n");
            }
        }
        else if(!strcmp(word1, "scissors")){
            if(!strcmp(word2, "rock")){
                printf("2\n");
            }
            else if(!strcmp(word2, "paper")){
                printf("1\n");
            }
            else if(!strcmp(word2, "scissors")){
                printf("0\n");
            }
            else if(!strcmp(word2, "lizard")){
                printf("1\n");
            }
            else if(!strcmp(word2, "Spock")){
                printf("2\n");
            }
        }
        else if(!strcmp(word1, "lizard")){
            if(!strcmp(word2, "rock")){
                printf("2\n");
            }
            else if(!strcmp(word2, "paper")){
                printf("1\n");
            }
            else if(!strcmp(word2, "scissors")){
                printf("2\n");
            }
            else if(!strcmp(word2, "lizard")){
                printf("0\n");
            }
            else if(!strcmp(word2, "Spock")){
                printf("1\n");
            }
        }
        else if(!strcmp(word1, "Spock")){
            if(!strcmp(word2, "rock")){
                printf("1\n");
            }
            else if(!strcmp(word2, "paper")){
                printf("2\n");
            }
            else if(!strcmp(word2, "scissors")){
                printf("1\n");
            }
            else if(!strcmp(word2, "lizard")){
                printf("2\n");
            }
            else if(!strcmp(word2, "Spock")){
                printf("0\n");
            }
        }
    }
	return 0;
}
