# push_swap

Projeto da 42 School em C para ordenar inteiros usando duas stacks e um conjunto limitado de operações.

## Estado atual

**Implementação inicial publicada — ainda não validada integralmente.**

Esta primeira versão contém:
- Estrutura de stack ligada.
- Validação de argumentos numéricos passados individualmente.
- Rejeição de valores fora do intervalo de `int` e de números duplicados.
- Atribuição de índices (*coordinate compression*).
- Operações `sa`, `sb`, `pa`, `pb`, `ra`, `rb`, `rra` e `rrb`.
- Ordenação por radix sort binário.

## Estrutura

```text
push_swap/
├── includes/
│   └── push_swap.h
├── src/
│   ├── main.c
│   ├── parse.c
│   ├── stack.c
│   ├── operations.c
│   └── sort.c
├── Makefile
└── README.md
```

## Compilar

```bash
make
```

O executável gerado chama-se `push_swap`.

## Executar

Nesta versão inicial, passa cada número como argumento separado:

```bash
./push_swap 3 2 1
./push_swap -5 0 42 9
```

A entrada no formato de uma única string entre aspas (por exemplo, `./push_swap "3 2 1"`) ainda não está implementada.

## Próximas etapas

1. Implementar a divisão de argumentos com espaços e validação completa.
2. Criar estratégias específicas para sequências pequenas (2, 3 e 5 elementos).
3. Integrar e avaliar a estratégia adaptativa anteriormente explorada.
4. Otimizar operações e reduzir a contagem de instruções.
5. Adicionar testes automáticos e testar com o checker.
6. Corrigir todos os avisos da Norminette e executar testes de memória.

## Validação

A compilação, a Norminette, o checker e os testes de memória ainda precisam de ser executados. Não considerar esta versão como pronta para avaliação ou submissão.
