#include <stdio.h>   
#include <time.h>   
#include <stdlib.h>  


int main(void) {
    char dateStr[9];
    char timeStr[9];
    char anoAtualString[3];
    int anoAtual;
    int idade;
    int nasc;

    _strdate(dateStr);  
    _strtime(timeStr); 
    
    printf("Digite sua data de nascimento: ", &nasc);
    scanf("%d", &nasc);

   
    anoAtualString[0] = dateStr[6];
    anoAtualString[1] = dateStr[7];
    anoAtualString[2] = '\0';

   
    anoAtual = atoi(anoAtualString);
    idade = anoAtual + 2000 - nasc;



    printf("Sua idade é de %d anos\n", idade);
    
    return(0);
}
