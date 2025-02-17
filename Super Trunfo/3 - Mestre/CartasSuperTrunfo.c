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

    // //Inicio
    // printf("+-----------------------------+\n");
    // printf("|Desafio Super Trunfo - Países|\n");
    // printf("+-----------------------------+\n\n");

    // printf("| Cadastro das Cartas         |\n");

    // // Cadastro das Cartas:
    // // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // printf("+------------------------------------------------------------------------------------------------------------------------------------------+\n");
    // printf("|A seguir preencha os dados de cada cidade:  | Atenção: Carta será idendificada por 1 letra[A a H] e 1 número de 1 a 4. Ex:. A01, A02 ...  |\n");

    // //Dados da primeira carta
    // printf("+-----------------------------------------------------------Primeira Carta-----------------------------------------------------------------+\n");
    // printf("+------------------------------------------------------------------------------------------------------------------------------------------+\n");
    // printf("|Informe uma letra para identificar o estado:    ");
    // scanf("\n %c", &estadoX);
    // printf("+--------------------------------------------------------+\n");

    // printf("|Informe um número para código da cidade    :    ");
    // scanf("\n %s", &codigoX);
    // printf("+--------------------------------------------------------+\n");

    // printf("|Informe nome da cidade                     :    ");
    // scanf("\n %s", &nomeCidadeX);
    // printf("+--------------------------------------------------------+\n");

    // printf("Informe a população da cidade               :    ");
    // scanf("\n %ld", &populacaoX);
    // printf("+--------------------------------------------------------+\n");

    // printf("|Informe Área(km²) da cidade                :    ");
    // scanf("\n %lf", &areaX);
    // printf("+--------------------------------------------------------+\n");

    // printf("|Informe o PIB(mi) da cidade                :   ");
    // scanf("\n %lf", &pibX);
    // printf("+--------------------------------------------------------+\n");
    
    // printf("|Informe o número de pontos turísticos      :   ");
    // scanf("\n %d", &pontosTuristicosX);
    // printf("+--------------------------------------------------------+\n");

    // //Dados segunda carta
    // printf("+-----------------------------------------------------------Segunda Carta------------------------------------------------------------------+\n");
    // printf("+------------------------------------------------------------------------------------------------------------------------------------------+\n");
    // printf("|Informe uma letra para identificar o estado:    ");
    // scanf("\n %c", &estadoY);
    // printf("+--------------------------------------------------------+\n");

    // printf("|Informe um número para código da cidade    :    ");
    // scanf("\n %s", &codigoY);
    // printf("+--------------------------------------------------------+\n");

    // printf("|Informe nome da cidade                     :    ");
    // scanf("\n %s", &nomeCidadeY);
    // printf("+--------------------------------------------------------+\n");

    // printf("Informe a população da cidade               :    ");
    // scanf("\n %ld", &populacaoY);
    // printf("+--------------------------------------------------------+\n");

    // printf("|Informe Área(km²) da cidade                :    ");
    // scanf("\n %lf", &areaY);
    // printf("+--------------------------------------------------------+\n");

    // printf("|Informe o PIB da cidade                    :   ");
    // scanf("\n %lf", &pibY);
    // printf("+--------------------------------------------------------+\n");
    
    // printf("|Informe o número de pontos turísticos      :   ");
    // scanf("\n %d", &pontosTuristicosY);
    // printf("+--------------------------------------------------------+\n\n");

    // printf("+--------------------------------------------------------+\n\n");

    // //Operações
    //     //Primeira carta
    //     densidadePopulacionalX = (double) populacaoX / areaX;
    //     pibPerCapitaX = (double) pibX / populacaoX;
    //     superPoderX = (double) populacaoX + areaX + pibX + pontosTuristicosX + densidadePopulacionalX + pibPerCapitaX;
        
    //     //Segunda carta
    //     densidadePopulacionalY = (double) populacaoY / areaY;
    //     pibPerCapitaY = (double) pibY / populacaoY;
    //     superPoderY = (double) populacaoY + areaY + pibY + pontosTuristicosY + densidadePopulacionalY + pibPerCapitaY;

    // printf("Cadastro realizado com sucesso!\n");

    // // Exibição dos Dados da primeira Carta:
    // printf("\n");
    // printf("+---------------------------------------------------------------------+\n"               );
    // printf("|--------------------Informações da primeira carta--------------------|\n"               );
    // printf("+--------------------------------+------------------------------------+\n"               );
    // printf("|Estado                         :| %c                      \n", estadoX                  );
    // printf("|Código da cidade               :| %c%s                    \n", estadoX, codigoX         );
    // printf("|Nome da cidade                 :| %s                      \n", nomeCidadeX              );
    // printf("|População                      :| %ld                     \n", populacaoX               );
    // printf("|Área                           :| %.2lf km²               \n", areaX                    );
    // printf("|Densidade Populacional         :| %.2lf pessoas/km²       \n", densidadePopulacionalX   );
    // printf("|PIB                            :| %.2lf reais             \n", pibX                     );
    // printf("|PIB per Capita                 :| %.2lf reais             \n", pibPerCapitaX            );
    // printf("|Números de Pontos Turísticos   :| %d                      \n", pontosTuristicosX        );
    // printf("+--------------------------------+------------------------------------+\n"               );
    // printf("|*Super Poder                   :| %2lf                    \n", superPoderX              );
    // printf("+--------------------------------+------------------------------------+\n"               );

    //  // Exibição dos Dados da segunda Carta:
    //  printf("\n");
    //  printf("+---------------------------------------------------------------------+\n"               );
    //  printf("|--------------------Informações da segunda carta---------------------|\n"               );
    //  printf("+--------------------------------+------------------------------------+\n"               );
    //  printf("|Estado                         :| %c                      \n", estadoY                  );
    //  printf("|Código da cidade               :| %c%s                    \n", estadoY, codigoY         );
    //  printf("|Nome da cidade                 :| %s                      \n", nomeCidadeY              );
    //  printf("|População                      :| %ld                     \n", populacaoY               );
    //  printf("|Área                           :| %.2lf km²               \n", areaY                    );
    //  printf("|Densidade Populacional         :| %.2lf pessoas/km²       \n", densidadePopulacionalY   );
    //  printf("|PIB                            :| %.2lf reais             \n", pibY                     );
    //  printf("|PIB per Capita                 :| %.2lf reais             \n", pibPerCapitaY            );
    //  printf("|Números de Pontos Turísticos   :| %d                      \n", pontosTuristicosY        );
    //  printf("+--------------------------------+------------------------------------+\n"               );
    //  printf("|*Super Poder                   :| %2lf                    \n", superPoderY              );
    //  printf("+--------------------------------+------------------------------------+\n"               );

     // Exibição dos Dados para comparação:
     printf("\n");
     printf("+---------------------------------------------------------------------+\n"                 );                                                 
     printf("+--------------------------------|---------------Comparação-----------|\n");                                                   
     printf("+---------------------------------------------------------------------+\n"                 );                                                
     printf("+--------------------------------|Primeira é maior que Segunda Carta   \n"                                                                                     );
     printf("|População                      :|                  %d \n", populacaoX, populacaoY, populacaoX > populacaoY                                                    );
     printf("|Área                           :|                  %d \n", areaX, areaY, areaX > areaY                                                                        );
     printf("|Densidade Populacional         :|                  %d \n", densidadePopulacionalX, densidadePopulacionalY, densidadePopulacionalX > densidadePopulacionalY    );
     printf("|PIB                            :|                  %d \n", pibX, pibY, pibX > pibY                                                                            );
     printf("|PIB per Capita                 :|                  %d \n", pibPerCapitaX, pibPerCapitaY, pibPerCapitaX > pibPerCapitaY                                        );
     printf("|Números de Pontos Turísticos   :|                  %d \n", pontosTuristicosX, pontosTuristicosY, pontosTuristicosX > pontosTuristicosY                        );
     printf("+----------------------------------------------------------------------+\n"                ); 
     printf("|*Super Poder                   :|                  %d \n", superPoderX, superPoderY, superPoderX > superPoderY                                                );
     printf("+----------------------------------------------------------------------+\n\n"                ); 
     printf("+------------------------------------------------------------------------------------------------------------------------------------------|\n");
     printf("+----------------------------------------------------------------ATENÇÃO-------------------------------------------------------------------|\n");
     printf("+ *Resultado da comparação for 1, a PRIMEIRA ganhou; se o resultado for 0, a SEGUNDA carta ganhou------------------------------------------|\n");
     printf("+------------------------------------------------------------------------------------------------------------------------------------------|\n");

    printf("\n\n\n");

    return 0;
}
