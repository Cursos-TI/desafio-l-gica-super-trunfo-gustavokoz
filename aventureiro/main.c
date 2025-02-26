#include <stdio.h>

int main() {

    /*
    Criação das variaveis:
    População (Population),
    PIB,
    Area,
    Número de pontos turísticos (PointsAttractions),
    Estado (State),
    Código da Carta (CardCode),
    Nome da Cidade (City)
    */

    char State,State2;
    int PIB,PIB2,Area,Area2,PointsAttractions,PointsAttractions2;
    unsigned long Population2,Population;

     // Criação dos dados para primeira carta

    State = 'B';
    char CardCode[2] = "01";
    char City[50] = "Baturité";
    Population = 99550;
    Area = 235;
    PIB = 94;
    PointsAttractions = 0;

    // Criação dos dados para segunda carta

    State2 = 'A';
    char CardCode2[2] = "02";
    char City2[50] = "Abaiara";
    Population2 = 37550;
    Area2 = 435;
    PIB2 = 194;
    PointsAttractions2 = 2;
    
    /*
    Criação das variaveis para desafio intermediario
    Densidade Populacional: (PopulationDensity)
    PIB per Capita: (PIBPerCapita)
    */
   
    float PopulationDensity = (float)Population/(float)Area;
    float PopulationDensity2 = (float)Population2/(float)Area2;
    float PIBPerCapita = (float)PIB/(float)Population;
    float PIBPerCapita2 = (float)PIB2/(float)Population2;

    /*
    Criação de variaveis para desafio mestre
    Super Poder(SuperPower)
    */
    
    float SuperPower,SuperPower2;

    /*
    Adicionar valores ao Super Poder Da carta 1
    */
     
    SuperPower+=(float)Population;
    SuperPower+=(float)Area;
    SuperPower+=(float)PIB;
    SuperPower+=(float)PointsAttractions;
    SuperPower+=PIBPerCapita;
    SuperPower+=(1 / PopulationDensity);

    /*
    Adicionar valores ao Super Poder Da carta 2
    */
     
    SuperPower2+=(float)Population2;
    SuperPower2+=(float)Area2;
    SuperPower2+=(float)PIB2;
    SuperPower2+=(float)PointsAttractions2;
    SuperPower2+=PIBPerCapita2;
    SuperPower2+=(1 / PopulationDensity2);

    // Template de textos
    

    char StateText[] = "Estado:";
    char CardCodeText[] = "Código:";
    char CityText[] = "Nome da Cidade:";
    char PopulationText[] =  "População:";
    char AreaText[] = "Área:";
    char PIBText[] =  "PIB:";
    char PointsAttractionsText[] = "Número de Pontos Turísticos:";
    char PopulationDensityText[] = "Densidade Populacional:";
    char PIBPerCapitaText[] = "PIB per Capita:";
    char SuperPowerText[] = "Super Poder:";
    
    
    // fim dos templates
    
    // inicio da comparação

    int Winner; // 0 Carta 2 ganhou 

    /* Escreva Nome Da variavel para comparar sem nenhum numero 
    0:Population
    1:Area
    2:PIB
    3:PointsAttractions
    4:PIBPerCapita
    5:PopulationDensity
    6:SuperPower
    */
    printf("Escolha qual dado deseja comparar:\n");
    printf("População (digite 1)\n");
    printf("Área (digite 2)\n");
    printf("PIB (Digite 3)\n");
    printf("Números de pontos turísticos (Digite 4)\n");
    printf("PIB per Capita (Digite 5)\n");
    printf("Densidade Populacional (digite 6)\n");
    printf("Super Poder (Digite 7)\n");
    printf("Digite sua primeira opcao:");
    int Comparator = 0; 
    scanf("%d",&Comparator);
    printf("==========================================\n"); //separador de linha
    switch (Comparator)
    {
    case 1:

        Winner = Population > Population2;
        printf("Carta 1 - %s %ld\n",PopulationText,Population);
        printf("Carta 2 - %s %ld\n",PopulationText,Population2);
        break;

    case 2:

        Winner = Area > Area2;
        printf("Carta 1 - %s %d\n",AreaText,Area);
        printf("Carta 2 - %s %d\n",AreaText,Area2);
        break;

    case 3:

        Winner = PIB > PIB2;
        printf("Carta 1 - %s %d\n",PIBText,PIB);
        printf("Carta 2 - %s %d\n",PIBText,PIB2);
        break;

    case 4:

        Winner = PointsAttractions > PointsAttractions2;
        printf("Carta 1 - %s %d\n",PointsAttractionsText,PointsAttractions);
        printf("Carta 2 - %s %d\n",PointsAttractionsText,PointsAttractions2);
        break;

    case 5:

        Winner =  PIBPerCapita > PIBPerCapita2;
        printf("Carta 1 - %s %.2f\n",PIBPerCapitaText,PIBPerCapita);
        printf("Carta 2 - %s %.2f\n",PIBPerCapitaText,PIBPerCapita2);
        break;

    case 6:

        Winner = PopulationDensity2 > PopulationDensity;
        printf("Carta 1 - %s %.2f\n",PopulationDensityText,PopulationDensity);
        printf("Carta 2 - %s %.2f\n",PopulationDensityText,PopulationDensity2);
        break;

    case 7:

        Winner = SuperPower > SuperPower2;
        printf("Carta 1 - %s %.2f\n",SuperPowerText,SuperPower);
        printf("Carta 2 - %s %.2f\n",SuperPowerText,SuperPower2);
        break;    

    default:

        printf("Resposta Invalida");
        break;

    }
    // Definir ganhador
    if(Winner == 0){

        printf("Carta 2 ganhou\n");

    } else {

        printf("Carta 1 ganhou\n");

    };

    return 0;
}
