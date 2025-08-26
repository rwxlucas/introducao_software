# 🌟 Super Trunfo

Bem-vindo ao **Super Trunfo**, um jogo interativo em C que permite cadastrar cartas representando países e comparar seus atributos (população, área, PIB ou pontos turísticos) para determinar a carta vencedora! Desenvolvido e testado em ambiente Linux, este programa é simples, divertido e fácil de usar.

---

## 📋 Visão Geral

O **Super Trunfo** solicita informações de duas cartas, cada uma contendo:

- Código da carta (3 caracteres)
- Nome do país
- População (número inteiro)
- Área (em km², número decimal)
- PIB (número decimal)
- Número de pontos turísticos (número inteiro)

Após o cadastro, você escolhe um atributo para comparar, e o programa indica a carta vencedora ou declara um empate.

---

## 🛠 Requisitos

Para compilar e executar o programa, você precisa de:

- **Sistema Operacional**: Linux (desenvolvido e testado em ambiente Linux)
- **Compilador**: GCC (GNU Compiler Collection)
- **Bibliotecas**: Apenas a biblioteca padrão de C (nenhuma dependência adicional)

Verifique se o GCC está instalado com:

```bash
gcc --version
```

---

## 🚀 Como Compilar

O código fonte está no arquivo `super_trunfo.c`. Siga os passos abaixo para compilá-lo:

1. Abra o terminal no diretório onde está o arquivo `super_trunfo.c`.
2. Execute o comando de compilação:

   ```bash
   gcc super_trunfo.c -o super_trunfo
   ```

   - `gcc`: Chama o compilador GCC.
   - `super_trunfo.c`: Arquivo fonte do programa.
   - `-o super_trunfo`: Define o nome do executável gerado.

Isso criará o arquivo executável `super_trunfo` no mesmo diretório.

---

## ▶️ Como Executar

Após compilar, execute o programa com:

```bash
./super_trunfo
```

### Fluxo de Execução

1. **Cadastro da Primeira Carta**:
   - Insira o código da carta (3 caracteres).
   - Digite o nome do país (pode incluir espaços).
   - Informe a população, área, PIB e número de pontos turísticos.
2. **Cadastro da Segunda Carta**:
   - Repita o processo para a segunda carta.
3. **Comparação**:
   - Escolha um atributo (1: População, 2: Área, 3: PIB, 4: Pontos turísticos).
   - O programa exibe os países, o atributo comparado, os valores e a carta vencedora (ou empate).

---

## 📝 Exemplo de Uso

Aqui está um exemplo de como o programa funciona:

```bash
$ gcc super_trunfo.c -o super_trunfo
$ ./super_trunfo
Cadastro da primeira carta:
Código da carta (3 caracteres): BR1
País: Brasil
População: 213000000
Área (em km²): 8515767
PIB: 1800000000000
Número de pontos turísticos: 50

Cadastro da segunda carta:
Código da carta (3 caracteres): US1
País: Estados Unidos
População: 331000000
Área (em km²): 9833517
PIB: 21000000000000
Número de pontos turísticos: 80

Comparação de Cartas:
Escolha uma opção:
1. População
2. Área
3. PIB
4. Número de pontos turísticos
3
Comparação entre os países: Brasil e Estados Unidos
Atributo usado na comparação: PIB
Valores comparados: 1800000000000.00 e 21000000000000.00
Carta vencedora: US1 (Estados Unidos)
```
