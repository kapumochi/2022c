#include <stdio.h>
int main(){

    printf("現在要練習讀入字元,字串 : ");

    char a;
    scanf("%c",&a);
    printf("讀到字元 : %c\n", a );

    char line[1000];
    scanf("%s", line);
    printf("讀到字串 : %s\n", line );

    return 0;
}
