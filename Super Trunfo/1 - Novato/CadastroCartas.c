#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado;
    char codigo[3];
    char nomeCidade[30];
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
    printf("|A seguir preencha os dados de cada cidade:  | Atenção: Carta será idendificada por 1 letra[A a H] e 1 número de 1 a 4. Ex:. A01, A02 ...  |\n");
    printf("+------------------------------------------------------------------------------------------------------------------------------------------+\n");
    printf("|Informe uma letra para identificar o estado:    ");
    scanf("\n %c", &estado);
    printf("+--------------------------------------------------------+\n");

    printf("|Informe um número para código da cidade    :    ");
    scanf("\n %s", &codigo);
    printf("+--------------------------------------------------------+\n");

    printf("|Informe nome da cidade                     :    ");
    scanf("\n %s", &nomeCidade);
    printf("+--------------------------------------------------------+\n");

    printf("Informe a população da cidade               :    ");
    scanf("\n %d", &populacao);
    printf("+--------------------------------------------------------+\n");

    printf("|Informe Área(km²) da cidade                :    ");
    scanf("\n %f", &area);
    printf("+--------------------------------------------------------+\n");

    printf("|Informe o PIB(mi) da cidade                :   ");
    scanf("\n %f", &pib);
    printf("+--------------------------------------------------------+\n");
    
    printf("|Informe o número de pontos turísticos      :   ");
    scanf("\n %d", &pontosTuristicos);
    printf("+--------------------------------------------------------+\n\n");

    printf("Cadastro realizado com sucesso!\n");

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n");
    printf("+--------------------------------------------------------+\n");
    printf("|------------------Informações da carta------------------|\n"                   );
    printf("+--------------------------------+-----------------------+\n"                   );
    printf("|Estado                         :|%c                     |\n", estado           );
    printf("|Código da cidade               :|%c%s                   |\n", estado, codigo   );
    printf("|Nome da cidade                 :|%s                     |\n", nomeCidade       );
    printf("|População                      :|%d mi                  |\n", populacao        );
    printf("|Área                           :|%.2f km²               |\n", area             );
    printf("|PIB                            :|%.2f mi                |\n", pib              );
    printf("|Números de Pontos Turísticos   :|%d                     |\n", pontosTuristicos );
    printf("+--------------------------------+-----------------------+"                     );

    printf("\n\n\n");

    return 0;
}
