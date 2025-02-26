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

    int contagemPontosCartaX = 0, contagemPontosCartaY = 0;

    //Inicio
    printf("+-----------------------------+\n");
    printf("|Desafio Super Trunfo - Países|\n");
    printf("+-----------------------------+\n\n");

    printf("|     Cadastro das Cartas     |\n");

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    printf("+------------------------------------------------------------------------------------------------------------------------------------------+\n");
    printf("|A seguir preencha os dados de cada cidade:  | Atenção: Carta será idendificada por 1 letra[A a H] e 1 número de 1 a 4. Ex:. A01, A02 ...  |\n\n");

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

    printf("Cadastro realizado com sucesso!\n\n");

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

    printf("|Informe o PIB da cidade                    :   ");
    scanf("\n %lf", &pibY);
    printf("+--------------------------------------------------------+\n");
    
    printf("|Informe o número de pontos turísticos      :   ");
    scanf("\n %d", &pontosTuristicosY);
    printf("+--------------------------------------------------------+\n\n");

    printf("Cadastro realizado com sucesso!\n\n\n");

    //Operações
        //Primeira carta
        densidadePopulacionalX = (double) populacaoX / areaX;
        pibPerCapitaX = (double) pibX / populacaoX;
        superPoderX = (double) populacaoX + areaX + pibX + pontosTuristicosX + densidadePopulacionalX + pibPerCapitaX;
        
        //Segunda carta
        densidadePopulacionalY = (double) populacaoY / areaY;
        pibPerCapitaY = (double) pibY / populacaoY;
        superPoderY = (double) populacaoY + areaY + pibY + pontosTuristicosY + densidadePopulacionalY + pibPerCapitaY;

    // Exibição dos Dados da primeira Carta:
    printf("\n");
    printf("+---------------------------------------------------------------------+\n"               );
    printf("|--------------------Informações da primeira carta--------------------|\n"               );
    printf("+--------------------------------+------------------------------------+\n"               );
    printf("|Estado                         :| %c                      \n", estadoX                  );
    printf("|Código da cidade               :| %c%s                    \n", estadoX, codigoX         );
    printf("|Nome da cidade                 :| %s                      \n", nomeCidadeX              );
    printf("|População                      :| %ld                     \n", populacaoX               );
    printf("|Área                           :| %.2lf km²               \n", areaX                    );
    printf("|Densidade Populacional         :| %.2lf pessoas/km²       \n", densidadePopulacionalX   );
    printf("|PIB                            :| %.2lf reais             \n", pibX                     );
    printf("|PIB per Capita                 :| %.2lf reais             \n", pibPerCapitaX            );
    printf("|Números de Pontos Turísticos   :| %d                      \n", pontosTuristicosX        );
    printf("+--------------------------------+------------------------------------+\n"               );
    printf("|*Super Poder                   :| %.2lf                    \n", superPoderX              );
    printf("+--------------------------------+------------------------------------+\n"               );

     // Exibição dos Dados da segunda Carta:
     printf("\n");
     printf("+---------------------------------------------------------------------+\n"               );
     printf("|--------------------Informações da segunda carta---------------------|\n"               );
     printf("+--------------------------------+------------------------------------+\n"               );
     printf("|Estado                         :| %c                      \n", estadoY                  );
     printf("|Código da cidade               :| %c%s                    \n", estadoY, codigoY         );
     printf("|Nome da cidade                 :| %s                      \n", nomeCidadeY              );
     printf("|População                      :| %ld                     \n", populacaoY               );
     printf("|Área                           :| %.2lf km²               \n", areaY                    );
     printf("|Densidade Populacional         :| %.2lf pessoas/km²       \n", densidadePopulacionalY   );
     printf("|PIB                            :| %.2lf reais             \n", pibY                     );
     printf("|PIB per Capita                 :| %.2lf reais             \n", pibPerCapitaY            );
     printf("|Números de Pontos Turísticos   :| %d                      \n", pontosTuristicosY        );
     printf("+--------------------------------+------------------------------------+\n"               );
     printf("|*Super Poder                   :| %.2lf                    \n", superPoderY              );
     printf("+--------------------------------+------------------------------------+\n"               );

     // Exibição dos Dados para comparação: (Tema01)
    //  printf("\n");
    //  printf("+---------------------------------------------------------------------+\n"                                 );                                                 
    //  printf("+--------------------------------|---------------Comparação-----------|\n");                                                   
    //  printf("+---------------------------------------------------------------------+\n"                                 );                                                
    //  printf("+--------------------------------|Primeira é maior que Segunda Carta   \n"                                 );
    //  printf("|População                      :|                  %d \n", populacaoX > populacaoY                        );
    //  printf("|Área                           :|                  %d \n", areaX > areaY                                  );
    //  printf("|Densidade Populacional         :|                  %d \n", densidadePopulacionalX > densidadePopulacionalY);
    //  printf("|PIB                            :|                  %d \n", pibX > pibY                                    );
    //  printf("|PIB per Capita                 :|                  %d \n", pibPerCapitaX > pibPerCapitaY                  );
    //  printf("|Números de Pontos Turísticos   :|                  %d \n", pontosTuristicosX > pontosTuristicosY          );
    //  printf("+----------------------------------------------------------------------+\n"                                ); 
    //  printf("|*Super Poder                   :|                  %d \n", superPoderX > superPoderY                      );
    //  printf("+----------------------------------------------------------------------+\n\n"                              ); 
    //  printf("+------------------------------------------------------------------------------------------------------------------------------------------|\n");
    //  printf("+----------------------------------------------------------------ATENÇÃO-------------------------------------------------------------------|\n");
    //  printf("+ *Resultado da comparação for 1, a PRIMEIRA carta ganhou; se o resultado for 0, a SEGUNDA ganhou------------------------------------------|\n");
    //  printf("+------------------------------------------------------------------------------------------------------------------------------------------|\n");

    // Exibição dos Dados para comparação Hardcode : (Tema02)
    //Comparação que ganhar soma +1 na contagem das variaveis. Total de pontos dessa variável vai decidir quem com mais contagem de pontos ganha!

    if(populacaoX > populacaoY)                         { contagemPontosCartaX++; } else if(populacaoX == populacaoY)                           {/* EMPATE*/} else {  contagemPontosCartaY++; }
    if(areaX > areaY)                                   { contagemPontosCartaX++; } else if(areaX == areaY)                                     {/* EMPATE*/} else {  contagemPontosCartaY++; }
    if(densidadePopulacionalX < densidadePopulacionalY) { contagemPontosCartaX++; } else if(densidadePopulacionalX == densidadePopulacionalY)   {/* EMPATE*/} else {  contagemPontosCartaY++; }
    if(pibX > pibY)                                     { contagemPontosCartaX++; } else if(pibX == pibY)                                       {/* EMPATE*/} else {  contagemPontosCartaY++; }
    if(pibPerCapitaX > pibPerCapitaY)                   { contagemPontosCartaX++; } else if(pibPerCapitaX == pibPerCapitaY)                     {/* EMPATE*/} else {  contagemPontosCartaY++; }
    if(pontosTuristicosX > pontosTuristicosY)           { contagemPontosCartaX++; } else if(pontosTuristicosX == pontosTuristicosY)             {/* EMPATE*/} else {  contagemPontosCartaY++; }
    if(superPoderX > superPoderY)                       { contagemPontosCartaX++; } else if(superPoderX == superPoderY)                         {/* EMPATE*/} else {  contagemPontosCartaY++; }

    printf("+-----------------------+\n");
    printf("|---Carta Ganhadora é---|\n\n");

    //Condição Contagem
    if(contagemPontosCartaX > contagemPontosCartaY){
        printf("|***  PRIMEIRA CARTA ***|\n");

    }else if(contagemPontosCartaX == contagemPontosCartaY){
        //Caso de empate o fator de desempate é atributo SUPER PODER
        printf("+-------------------------------------------------+\n");
        printf("|                    Empate!                      |\n");
        printf("|Critério de desempate é atributo * Super Poder * |\n");
        printf("+-------------------------------------------------+\n");

        if(superPoderX > superPoderY){
            printf("|***  PRIMEIRA CARTA ***|\n");
        }else if(superPoderX == superPoderY){
            // Se super poder for igual, empate técnico
            printf("\n\n|*** EMPATE! Os valores atributo Super Poder são iguais ***|\n\n");
        }else {
            printf("|***  SEGUNDA CARTA ***|\n");
        }

    }else{
        printf("|***  SEGUNDA CARTA ***|\n");
    }

    printf("+--------------------------------------------------------------------------------------------------------+\n");
    printf("Contagem de pontos Primeira Carta %d e Segunda Carta %d \n", contagemPontosCartaX, contagemPontosCartaY);
    printf("+--------------------------------------------------------------------------------------------------------+\n");
    
    printf("+Atenção: comparação é entre todos os atributos das cartas!+\n");
    printf("+----------------------------------------------------------+\n");


    return 0;
}
