#ifndef LISTA_SEQUENCIAL
#define LISTA_SEQUENCIAL

#include <iostream>
#define TAM 3 // Tamanho máximo do vetor de elementos

using std::cout;
using std::endl;

class lista_sequencial {

    int elementos[TAM]; // Vetor para armazenar os elementos
    int tamanho_atual;
public:
    lista_sequencial(); // Criação da lista

    bool vazio(); // Verificar se está vazia
    bool cheio(); // Verificar se está cheia
    int tamanho(); // Retorna o tamanho atual
    int retornar(int pos); // Retorna o valor em uma determinada posição(se a posição for válida)
    void alterar(int v, int pos); // Altera o valor em uma determinada posição(se a posição for válida)
    void adicionar(int v, int pos); // Adiciona o valor em uma determinada posição(se a posição for válida)
    void remover(int pos); // Remove uma determinada posição(se a posição for válida)
    void exibir(); // Exibe a lista
};

#endif