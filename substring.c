#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL,NULL);
    char string [20];
    char string1[20];
    char *ponteiro;
    scanf("%s",string);
    scanf("%s",string1);
    ponteiro = strstr(string, string1);
    if(ponteiro){
        printf("É substring");
    }
    else{
        printf("Não é substring");
    }
    return 0;
}
