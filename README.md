# Lista Sequencial 

## 📄 Descrição
Implementação do tipo abstrado de dado lista sequencial em c++. A implementação já acompanha um caso de teste no arquivo main, que demonstra o uso da lista sequencial.

---

## 🗂️ Estrutura dos arquivos
- **src**: Contém os arquivos de implementação.
- **include**: Contém o arquivo de cabeçalho da lista.
- **Makefile**: Arquivo de configuração para a compilação do programa.

---

## ⚙️ Como Compilar e Executar

### Compilando o Código

```bash
make
```

### Executando o Programa

```bash
./build/programa
```

---

## 🔧 Funcionalidades
O programa permite realizar as seguintes operações na lista sequencial:
- Criar uma lista.
- Verificar se a lista está vazia.
- Verificar se a lista está cheia.
- Obter o tamanho atual da lista.
- Receber o valor de uma posição específica.
- Alterar o valor de uma posição específica.
- Inserir um valor em uma posição específica.
- Remover um valor de uma posição específica.
- Exibir todos os elementos da lista.

---

## 🖥️ Saída do Programa
Exemplo de funcionamento da lista:

```
Lista criada.
Lista vazia? Sim.
Lista cheia? Nao.
Valor 1 adicionado na posicao 1.
Lista:
1
Valor 2 adicionado na posicao 1.
Lista:
2 1
Valor 3 adicionado na posicao 1.
Lista:
3 2 1
Tamanho da lista: 3
Lista vazia? Nao.
Lista cheia? Sim.
Lista apos a remocao do primeiro elemento:
2 1
Tamanho da lista: 2
Retornando o segundo elemento da lista: 1
Lista apos alterar o segundo elemento:
2 10
```
