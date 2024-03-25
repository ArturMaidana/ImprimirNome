//Discente Artur Guilherme 
#include<stdio.h> 

int main(){

    char str[100] = "baaaaaaa";
    int result;
    FILE *arq;
    arq = fopen("nomestring.txt", "w");
    if(arq == NULL){
        printf("Problemas na CRIACAO do arquivo\n");
        system("pause");
        exit(1);
    }
    if( str[2] == 'a' || str[2] == 'A'){
    result = fputs(str,arq);
    }else{
        printf("Escreva uma palavra com A");
    }
    if( result == EOF){
        printf("Erro na gravação\n");
    }
    fclose(arq);

    return 0;

}