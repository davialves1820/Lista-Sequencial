#include "lista_sequencial.h"

int main(void) {
    lista_sequencial list;

    cout << "Lista vazia? " << (list.vazio() ? "Sim" : "Nao") << endl; 
    cout << "Lista cheia? " << (list.cheio() ? "Sim" : "Nao") << endl;
    list.remover(1);
    
    list.adicionar(1, 1);
    list.adicionar(2, 1);
    list.adicionar(3, 1); 
    
    cout << "Lista:" << endl;
    list.exibir();
    cout << "Tamanho da lista: " << list.tamanho() << endl;

    cout << "Lista vazia? " << (list.vazio() ? "Sim" : "Nao") << endl; 
    cout << "Lista cheia? " << (list.cheio() ? "Sim" : "Nao") << endl;    
    
    list.remover(1);
    cout << "Lista apos a remocao do primeiro elemento:" << endl;
    list.exibir();
    cout << "Tamanho da lista: " << list.tamanho() << endl;
    
    cout << "Retornando o segundo elemento da lista: " << list.retornar(2) << endl;
    
    list.alterar(10,2);
    cout << "Lista apos alterar o segundo elemento:" << endl;
    list.exibir();

    return 0;
}