#include "lista_sequencial.h"

int main(void) {
    // Cria a lista
    lista_sequencial list;

    // Verifica se a lista está vazia ou cheia
    cout << "Lista vazia? " << (list.vazio() ? "Sim." : "Nao.") << endl; 
    cout << "Lista cheia? " << (list.cheio() ? "Sim." : "Nao.") << endl;
    
    // Adiciona itens a lista
    list.adicionar(1, 1);
    list.adicionar(2, 1);
    list.adicionar(3, 1); 
    
    // Exibe a lista
    cout << "Lista:" << endl;
    list.exibir();

    // Informa o tamanho atual da lista
    cout << "Tamanho da lista: " << list.tamanho() << endl;

    // Verifica se a lista está vazia ou cheia
    cout << "Lista vazia? " << (list.vazio() ? "Sim." : "Nao.") << endl; 
    cout << "Lista cheia? " << (list.cheio() ? "Sim." : "Nao.") << endl;    
    
    // Remove o primero elemento da lista e exibe a lista após remoção e seu tamanho atual
    list.remover(1);
    cout << "Lista apos a remocao do primeiro elemento:" << endl;
    list.exibir();
    cout << "Tamanho da lista: " << list.tamanho() << endl;
    
    // Retorna o elemento da segunda posição da lista
    cout << "Retornando o segundo elemento da lista: " << list.retornar(2) << endl;
    
    // Altera o valor do segundo elemento da lista e exibe a lista
    list.alterar(10,2);
    cout << "Lista apos alterar o segundo elemento:" << endl;
    list.exibir();

    return 0;
}