#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo[4];
    int populacao;
    float area, pib;
    int pontosTuristicos;

    //Inicio
    printf("+-----------------------------+\n");
    printf("|Desafio Super Trunfo - Países|\n");
    printf("+-----------------------------+\n\n");

    printf("| Cadastro das Cartas         |\n");
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("+------------------------------------------------------------------------------------------------------------------------------------------+\n");
    printf("|A seguir preencha os dados de cada cidade:  | Atenção: Código da cidade composto por 1 letra[A a H] e 1 número de 1 a 4. Ex:. A01, A02 ...|\n");
    printf("+------------------------------------------------------------------------------------------------------------------------------------------+\n");
    printf("|Informe o Código da cidade:                 |");
    scanf("\n %s", &codigo);
    printf("+--------------------------------------------+\n");

    printf("Informe a população(mi) do cidade:           |");
    scanf("\n %d", &populacao);
    printf("+--------------------------------------------+\n");

    printf("|Informe Área(km²) cidade:                   |");
    scanf("\n %f", &area);
    printf("+--------------------------------------------+\n");

    printf("|Informe o PIB(mi) da cidade:                |");
    scanf("\n %f", &pib);
    printf("+--------------------------------------------+\n");
    
    printf("|Informe o números de pontos turísticos:     |");
    scanf("\n %d", &pontosTuristicos);
    printf("+--------------------------------------------+\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n");
    printf("+------------------+-------------------------+\n");
    printf("|Código da cidade: |%s                       |\n", codigo);
    printf("|População:        |%d mi                    |\n", populacao);
    printf("|área:             |%.2f km²                 |\n", area);
    printf("|PIB:              |%.2f mi                  |\n", pib);
    printf("|Pontos Turísticos:|%d                       |\n", pontosTuristicos);
    printf("+------------------+-------------------------+");

    return 0;
}
