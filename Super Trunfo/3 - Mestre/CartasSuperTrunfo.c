#include <stdio.h>

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    //Obs:. A letra no final da variável, como X e Y, corresponde os dados: X = primeira carta inserida e Y = segunda carta.
    char estadoX, estadoY;
    char codigoX[3], codigoY[3];
    char nomeCidadeX[30], nomeCidadeY[30];
    long int populacaoX, populacaoY;
    double areaX, areaY, densidadePopulacionalX, densidadePopulacionalY, pibX, pibY, pibPerCapitaX, pibPerCapitaY;
    int pontosTuristicosX, pontosTuristicosY;
    double superPoderX, superPoderY;

    //Inicio
    printf("+-----------------------------+\n");
    printf("|Desafio Super Trunfo - Países|\n");
    printf("+-----------------------------+\n\n");

    printf("| Cadastro das Cartas         |\n");

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    printf("+------------------------------------------------------------------------------------------------------------------------------------------+\n");
    printf("|A seguir preencha os dados de cada cidade:  | Atenção: Carta será idendificada por 1 letra[A a H] e 1 número de 1 a 4. Ex:. A01, A02 ...  |\n");

    //Dados da primeira carta
    printf("+-----------------------------------------------------------Primeira Carta-----------------------------------------------------------------+\n");
    printf("+------------------------------------------------------------------------------------------------------------------------------------------+\n");
    printf("|Informe uma letra para identificar o estado:    ");
    scanf("\n %c", &estadoX);
    printf("+--------------------------------------------------------+\n");

    printf("|Informe um número para código da cidade    :    ");
    scanf("\n %s", &codigoX);
    printf("+--------------------------------------------------------+\n");

    printf("|Informe nome da cidade                     :    ");
    scanf("\n %s", &nomeCidadeX);
    printf("+--------------------------------------------------------+\n");

    printf("Informe a população da cidade               :    ");
    scanf("\n %ld", &populacaoX);
    printf("+--------------------------------------------------------+\n");

    printf("|Informe Área(km²) da cidade                :    ");
    scanf("\n %lf", &areaX);
    printf("+--------------------------------------------------------+\n");

    printf("|Informe o PIB(mi) da cidade                :   ");
    scanf("\n %lf", &pibX);
    printf("+--------------------------------------------------------+\n");
    
    printf("|Informe o número de pontos turísticos      :   ");
    scanf("\n %d", &pontosTuristicosX);
    printf("+--------------------------------------------------------+\n");

    //Dados segunda carta
    printf("+-----------------------------------------------------------Segunda Carta------------------------------------------------------------------+\n");
    printf("+------------------------------------------------------------------------------------------------------------------------------------------+\n");
    printf("|Informe uma letra para identificar o estado:    ");
    scanf("\n %c", &estadoY);
    printf("+--------------------------------------------------------+\n");

    printf("|Informe um número para código da cidade    :    ");
    scanf("\n %s", &codigoY);
    printf("+--------------------------------------------------------+\n");

    printf("|Informe nome da cidade                     :    ");
    scanf("\n %s", &nomeCidadeY);
    printf("+--------------------------------------------------------+\n");

    printf("Informe a população da cidade               :    ");
    scanf("\n %ld", &populacaoY);
    printf("+--------------------------------------------------------+\n");

    printf("|Informe Área(km²) da cidade                :    ");
    scanf("\n %lf", &areaY);
    printf("+--------------------------------------------------------+\n");

    printf("|Informe o PIB(mi) da cidade                :   ");
    scanf("\n %lf", &pibY);
    printf("+--------------------------------------------------------+\n");
    
    printf("|Informe o número de pontos turísticos      :   ");
    scanf("\n %d", &pontosTuristicosY);
    printf("+--------------------------------------------------------+\n\n");

    printf("+--------------------------------------------------------+\n\n");

    //Operações
    //Primeira carta
    densidadePopulacionalX = (double) populacaoX / areaX;
    pibPerCapitaX = (double) pibX / populacaoX;
    superPoderX = (double) populacaoX + areaX + pibX + pontosTuristicosX + densidadePopulacionalX + pibPerCapitaX;
    //Segunda carta
    densidadePopulacionalY = (double) populacaoY / areaY;
    pibPerCapitaY = (double) pibY / populacaoY;
    superPoderY = (double) populacaoY + areaY + pibY + pontosTuristicosY + densidadePopulacionalY + pibPerCapitaY;

    printf("Cadastro realizado com sucesso!\n");

    // Exibição dos Dados das Cartas:
    printf("\n");
    printf("+---------------------------------------------------------------------+\n"               );
    printf("|------------------Informações da carta-------------------------------|\n"               );
    printf("+--------------------------------+------------------------------------+\n"               );
    printf("|Estado                         :| %c                      \n", estadoX                  );
    printf("|Código da cidade               :| %c%s                    \n", estadoX, codigoX         );
    printf("|Nome da cidade                 :| %s                      \n", nomeCidadeX              );
    printf("|População                      :| %ld                     \n", populacaoX               );
    printf("|Área                           :| %.2lf km²               \n", areaX                    );
    printf("|Densidade Populacional         :| %.2lf pessoas/km²       \n", densidadePopulacionalX   );
    printf("|PIB                            :| %.2lf mi reais          \n", pibX                     );
    printf("|PIB per Capita                 :| %.2lf reais             \n", pibPerCapitaX            );
    printf("|Números de Pontos Turísticos   :| %d                      \n", pontosTuristicosX        );
    printf("+--------------------------------+------------------------------------+\n"               );
    printf("|*Super Poder                   :| %2lf                    \n", superPoderX              );
    printf("+--------------------------------+------------------------------------+"                 );

    printf("\n\n\n");

    return 0;
}
