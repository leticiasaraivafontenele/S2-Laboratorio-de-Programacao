#include <stdio.h>
#include <string.h>
#define TAM 50
int main(){

    char p1[TAM];
    char p2[TAM];
    char con[TAM];

    puts("\ndigite uma palavra: ");
    gets(p1);
    //scanf("%[^\n]", &p1);

    puts("\ndigite outra palavra: ");
    gets(p2);
    //scanf("%[^\n]", &p2);

    //printf("as strings concatenadas ficam: %s", strcat(p1, p2));

    int i = strlen(p1);
    int j = 0;
    while(p2[j] != '\0'){
        p1[i] = p2[j];
        i++;
        j++;
    }
    printf("as strings concatenadas ficam: %s", p1);

    return 0;
}