/******************************************************************************
Dada uma string s, desenvolver uma função que
determine se s é ou não um palíndromo.
Observação: uma string s será um palíndromo
quando seus caracteres formarem a mesma
sequência, independente se s é percorrida da
esquerda para direita ou vice-versa.
*******************************************************************************/


/// Main
#include <stdio.h>


/// Funçoes
void mostrarPalavra(char str[]);
int fstrlen(char str[]);

//Q2
int strpalindromo(char str[], int inicio, int final);


int main()
{
    int tamanho;
    char palavra[16] = "victor";
    char palavra2[] = "anna";
    int teste;
    
    tamanho = fstrlen(palavra);
    
    teste = strpalindromo(palavra, 0, tamanho-1);
    
    mostrarPalavra(palavra);
    
    
    if (teste == 1) {
        printf("\nÉ palíndromo\n");
    } else {
        printf("\nNão é palíndromo\n");
    }
    
    
    return 0;
}



//Palindromo
int strpalindromo(char str[], int inicio, int final) {
    
    if (inicio >= final) {
        return 1; 
    }

    if (str[inicio] != str[final]) {
        return 0; 
    }

  
    return strpalindromo(str, inicio + 1, final - 1);
}



//Len
int fstrlen(char str[]){
    
    int i = 0;
    
    while (str[i] != '\0'){
        i++;
    }
    
    return i;
}



void mostrarPalavra(char str[]){
    
    int tam = 0;
    
     while (str[tam] != '\0'){
        tam++;
    }
    
    
    for (int i=0; i < tam; i++){
        
        printf("%c", str[i]);
    }
    
    
}




















