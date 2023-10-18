#include <stdio.h>
#include <stdbool.h> // Inclui a biblioteca para usar o tipo de dados booleano

int main() {
    int filmeSelecionado;
    int numIngressos;
    float valorIngressos = 0.0;

    // APRESENTAÇÃO DOS FILMES
    printf("Olá, essas são as nossas opções de filmes: \n");
    printf("1: Missão Impossível: Acerto de Contas \n");
    printf("2: Barbie \n");
    printf("3: Besouro Azul \n");
    printf("4: Oppenheimer \n");

    bool entradaValida = false; // Variável booleana para verificar a entrada válida
    while (!entradaValida) {
        printf("\nSelecione o filme desejado (1 a 4): ");
        if (scanf("%d", &filmeSelecionado) != 1 || filmeSelecionado < 1 || filmeSelecionado > 4) {
            printf("Escolha inválida. Digite um número de 1 a 4.\n");
            // Limpa o buffer do teclado
            while (getchar() != '\n');
        } else {
            entradaValida = true;
        }
    }

    printf("Quantos ingressos você deseja? ");
    scanf("%d", &numIngressos);

    // DECLARAR VALORES DOS INGRESSOS
    float ingressos[numIngressos];

    // PERCORRER OS NÚMEROS DE INGRESSOS
    for (int i = 0; i < numIngressos; i++) {
      int idade;
      printf("Por favor, informe a idade do ingresso %d: ", i + 1);
      scanf("%d", &idade);

      // CALCULAR VALOR DO INGRESSO
      ingressos[i] = (idade <= 10 || idade >= 65) ? 15.25 : 30.5;
    }

    // SOMAR O VALOR DOS INGRESSOS
    for (int j = 0; j < numIngressos; j++) {
      valorIngressos += ingressos[j];
    }

    // EXIBIR O VALOR FINAL
    printf("%d Ingressos para o filme %d, no valor de %.2f\n", numIngressos, filmeSelecionado, valorIngressos);

    return 0;
}
