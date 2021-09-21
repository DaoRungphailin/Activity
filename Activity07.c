#include<string.h>
#include<stdio.h>
int main()
{
    int i;
    struct player {
        char name[50];
        int level;
        int score;
    };
    player p[10], * ptr;
    for (i = 0; i < 10; i++) {
        strcpy(p[i].name, "Anonymous");
        p[i].level = i;
        p[i].score = i * 100;
    }
    for (i = 0; i < 10; i++) {
        printf("name : %s\t", p[i].name);
        printf("level : %d\t", p[i].level);
        printf("score : %d\n", p[i].score);
    }
    return 0;
}