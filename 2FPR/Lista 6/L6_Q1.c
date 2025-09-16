/******************************************************************************

Suponha que não existissem as funções

strlen,
strcpy,
strcat e
strcmp. 

Pede-se, então, a
implementação de funções que tenham o
mesmo objetivo daquelas.

*******************************************************************************/


#include <stdio.h>

/// Funçoes
void mostrarPalavra(char str[]);
int fstrlen(char str[]);
void fstrcpy(char str[], char str2[]);
void fstrcat(char str[], char str2[]);





int main()
{
    int tamanho;
    char palavra[16] = "Victor ";
    char palavra2[] = "Pizzarro";
    
    
    tamanho = fstrlen(palavra);
    
  //fstrcpy(palavra, palavra2);
  fstrcat(palavra, palavra2);
    
    mostrarPalavra(palavra);
    
    
    return 0;
}





//Len
int fstrlen(char str[]){
    
    int i = 0;
    
    while (str[i] != '\0'){
        i++;
    }
    
    return i;
}


//Cpy
void fstrcpy(char str[], char str2[]){
    
    int i = 0;
    int tam = 0;
    
     while (str[tam] != '\0'){
        tam++;
    }
    
    
    while( i < tam){
        
        str2[i] = str[i];
        i++;
    }
    
    str2[i] = '\0';
}

//Cat
void fstrcat(char str[], char str2[]){
    
    int i;
    int tam = 0;
    
     while (str[tam] != '\0'){
        tam++;
    }
    
     while (str2[i] != '\0') {
        str[tam + i] = str2[i];
        i++;
    }
    
    str[tam + i]= '\0';
}


//Cmp
int fstrcmp(char str[], char str2[]){
    
    int i = 0; 
    
    while (str[i] != '\0' && str2[i] != '\0') {
        if (str[i] != str2[i]) { 
            return str[i] - str2[i];  
        }
        i++;  
    }
    
   
    return str[i] - str2[i]; 
}
    


//Mostrar Paçavra
void mostrarPalavra(char str[]){
    
    int tam = 0;
    
     while (str[tam] != '\0'){
        tam++;
    }
    
    
    for (int i=0; i < tam; i++){
        
        printf("%c", str[i]);
    }
    
    
}