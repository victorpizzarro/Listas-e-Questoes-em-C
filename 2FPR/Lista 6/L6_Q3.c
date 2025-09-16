/*

Desenvolver uma função que, dada uma string s,
crie uma substring que inicie na posição p de s e
contenha n caracteres.
Observações: se p e/ou n forem inválidos, a
substring será vazia; ii) se s não possuir n
caracteres além de p, a substring a ser criada
começará em p e terminará no final de s.

*/


#include <stdio.h>
#include <string.h>


void mostrarPalavra(char str[]);
void criarSubstring(char str[], int pontoInicial, int lenDesejado, char novaPalavra[]);



int main() {
    char palavra[] = "Amora";
    char novaPalavra[18]; 
  

    // Criando a substring
    criarSubstring(palavra, 0, 4, novaPalavra);

    // Mostrando o resultado
    mostrarPalavra(novaPalavra);

    return 0;
}


void criarSubstring(char str[], int pontoInicial, int lenDesejado, char novaPalavra[]) {
    int i;
    int disponiveis;

    if (pontoInicial < 0 || pontoInicial >= strlen(str) || lenDesejado <= 0) {
        
        novaPalavra[0] = '\0'; 
        return;
        
    }

    disponiveis = strlen(str) - pontoInicial;

    if (lenDesejado > disponiveis) {
        lenDesejado = disponiveis;
    }

    for (i = 0; i < lenDesejado; i++) {
        novaPalavra[i] = str[pontoInicial + i];
    }

    novaPalavra[i] = '\0';
}


//Mostrar
void mostrarPalavra(char str[]){
    
    int tam = 0;
    
     while (str[tam] != '\0'){
        tam++;
    }
    
    
    for (int i=0; i < tam; i++){
        
        printf("%c", str[i]);
    }
    
    
}



