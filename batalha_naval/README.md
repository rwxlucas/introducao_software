# 🌟 Batalha Naval com Habilidades Especiais

Bem-vindo ao **Batalha Naval com Habilidades Especiais**, um programa em C que implementa um tabuleiro de batalha naval de 10x10 com a adição de habilidades especiais (Cone, Cruz e Octaedro) visualizadas como áreas de efeito. Desenvolvido e testado em ambiente Linux, este programa é ideal para praticar manipulação de matrizes, loops aninhados e condicionais de forma divertida e educativa!

---

## 📋 Visão Geral

O programa cria um tabuleiro de batalha naval de 10x10, onde:
- **0** representa água.
- **3** representa navios.
- **5** marca áreas afetadas por habilidades especiais.

Três habilidades especiais são implementadas:
- **Cone**: Área em forma de cone, com origem no topo, expandindo para baixo.
- **Cruz**: Área em forma de cruz, com origem no centro.
- **Octaedro**: Área em forma de losango (vista frontal de um octaedro), com origem no centro.

Cada habilidade é representada por uma matriz (ex.: 5x5) com valores 0 (não afetado) e 1 (afetado). Essas matrizes são sobrepostas ao tabuleiro a partir de pontos de origem fixos, e o resultado é exibido no console com caracteres distintos: `~` (água), `#` (navios) e `*` (áreas afetadas).

---

## 🛠 Requisitos

Para compilar e executar o programa, você precisa de:

- **Sistema Operacional**: Linux (desenvolvido e testado em ambiente Linux).
- **Compilador**: GCC (GNU Compiler Collection).
- **Bibliotecas**: Apenas a biblioteca padrão de C (nenhuma dependência adicional).

Verifique se o GCC está instalado com:

```bash
gcc --version
```

---

## 🚀 Como Compilar

O código-fonte está no arquivo `batalha_naval.c`. Siga os passos abaixo para compilá-lo:

1. Abra o terminal no diretório onde está o arquivo `batalha_naval.c`.
2. Execute o comando de compilação:

   ```bash
   gcc batalha_naval.c -o batalha_naval
   ```

   - `gcc`: Chama o compilador GCC.
   - `batalha_naval.c`: Arquivo fonte do programa.
   - `-o batalha_naval`: Define o nome do executável gerado.

Isso criará o arquivo executável `batalha_naval` no mesmo diretório.

---

## ▶️ Como Executar

Após compilar, execute o programa com:

```bash
./batalha_naval
```

### Fluxo de Execução

1. **Inicialização do Tabuleiro**:
   - Um tabuleiro 10x10 é criado com água (`0`) e alguns navios (`3`) em posições fixas.
2. **Construção das Habilidades**:
   - Matrizes 5x5 para Cone, Cruz e Octaedro são geradas dinamicamente com valores 0 e 1.
3. **Sobreposição das Habilidades**:
   - Cada habilidade é aplicada ao tabuleiro em um ponto de origem fixo (ex.: linha 2, coluna 2).
   - Posições afetadas são marcadas com `5`.
