#include "lista_sequencial.h"

    // Inicializar o vetor
    lista_sequencial::lista_sequencial() : tamanho_atual(0) {}

    // Verificar se está vazio
    bool lista_sequencial::vazio() {
        return tamanho_atual == 0;
    }

    // Verificar se está cheio
    bool lista_sequencial::cheio() {
        return tamanho_atual == TAM;
    }

    // Retorna o tamanho atual da lista
    int lista_sequencial::tamanho() {
        return tamanho_atual;
    }

    // Retorna o valor em uma determinada posição
    int lista_sequencial::retornar(int pos) {
        // Verifica se a posição é válida
        if (vazio()|| pos > tamanho_atual || pos < 1) {
            return -1;
        }
        return elementos[pos - 1];
    }

    // Altera o valor de uma posição da lista
    void lista_sequencial::alterar(int v, int pos) {
        // Verifica se a posição é válida
        if (vazio() || pos > tamanho_atual || pos < 1) {
            return;
        }
        elementos[pos - 1] = v;
    }

    // Adiciona um elemento a lista
    void lista_sequencial::adicionar(int v, int pos) {
        // Verifica se a posição é válida
        if (cheio() || pos > tamanho_atual + 1 || pos < 1) {
            return;
        }

        for (int i = tamanho_atual; i >= pos; i--) {
            elementos[i] = elementos[i - 1];
        }
        elementos[pos - 1] = v;
        tamanho_atual++;
    }

    // Remove um elemento da lista
    void lista_sequencial::remover(int pos) {
        // Verifica se a posição é válida
        if (vazio() || pos > tamanho_atual || pos < 1) {
            return;
        }

        for (int i = pos - 1; i < tamanho_atual - 1; i++) {
            elementos[i] = elementos[i + 1];
        }
        tamanho_atual--;
    }

    // Exibe a lista completa
    void lista_sequencial::exibir() {
        for (int i = 0; i < tamanho_atual; i++) {
            cout << elementos[i] << " ";
        }
        cout << endl;
    }