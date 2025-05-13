// Número inteiro fornecido é positivo ou negativo. Lorena Eduarda
// Versão com seções separadas

#include <stdio.h>
#include <string.h>

int main ()
{
    // Declaração de variáveis
    int x; // Número fornecido
    char resultado[20]; // Identificação se o número é positivo ou negativo
    
    // Entrada de dados
    printf ("Digite um número: ");
    scanf ("%d", &x);
    
    // Processamento
    if (x >= 0) {
        strcpy (resultado, "positivo");
    }
    else {
        strcpy (resultado, "negativo");
    }
    
    // Saída de dados
    printf ("Número: %s\n", resultado);
    
    return 0;
}