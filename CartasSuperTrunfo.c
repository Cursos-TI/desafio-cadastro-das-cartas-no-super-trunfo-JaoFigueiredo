/*
Realizando a atividade do curso estácio
As intruções incluidas neste arquivo pede que eu cadastre apenas 4 parâmetros (Pop,área,pib e nº de pts turisticos).
Entretanto no app estácio e nos vídeos é solicitado mais informações então Cadastrarei todos os parâmetros mostrados
no conteúdo da aula.
*/
#include <stdio.h>

int main(){                                  //todas inicializadas para evitar o "lixo" que pode estar na memoria
    char estado1='A',estado2='A';           // Declaração das variáveis para o campo Estado
    int codigo1=0,codigo2=0;                  //Declaração das variáveis para o campo código da carta
    char cidade1[20]="",cidade2[20]="";      //Declaração das variáveis para o campo Nome da cidade
    unsigned long int populacao1=0,populacao2=0;           //Declaração das variáveis para o campo  população
    int pontos1=0,pontos2=0;                 //Declaração das variáveis para o campo pontos turisticos
    float area1=0.0,area2=0.0;               //Declaração das variáveis para o campo area
    float pib1=0.0,pib2=0.0;                 //Declaração das variáveis para o campo pib 
    float pibpercapt1=0.0,pibpercapt2=0.0;    //Declaração das variáveis para o campo pib per capta
    float densidade1=0.0, densidade2=0.0;    //Declaração das variáveis para o campo densidade populacional
    float superpoder1=0.0,superpoder2=0.0;
    float inverso1=0.0,inverso2=0.0;
    int comp1=0, comp2=0, comp3=0, comp4=0, comp5=0, comp6=0, comp7=0;

    printf("Bem vindo ao cadastro de cartas do Desafio Super Trunfo!\n\n Por favor digite uma letra entre A e H \n");//Mensagem p/o usuário
    scanf("%c",&estado1);  //comando para entrada de dados                                                                                            

    printf("Agora digite um número, 01, 02, 03 ou 04 (Com o Zero)\n");                                              //Mensagem p/o usuário
    scanf("%d",&codigo1); //comando para entrada de dados

    printf("Agora digite o nome da cidade\n");                                                                      //Mensagem p/o usuário
    scanf(" %[^\n]",cidade1); //comando para entrada de dados sem o &

    printf("Agora digite a população desta cidade\n");                                                              //Mensagem p/o usuário
    scanf("%lu",&populacao1);//comando para entrada de dados

    printf("Agora digite o PIB desta cidade\n");                                                                    //Mensagem p/o usuário
    scanf("%f",&pib1);//comando para entrada de dados

    printf("Agora digite a área desta cidade\n");                                                                    //Mensagem p/o usuário
    scanf("%f",&area1);//comando para entrada de dados

    printf("Por fim, digite o número de pontos túristicos desta cidade\n");                                         //Mensagem p/o usuário
    scanf("%i",&pontos1);//comando para entrada de dados

    getchar(); //Comando para "consumir o enter" Pois o próximo scanf sera com valor %c

    printf("Agora cadastraremos a segunda carta!\n\n Por favor digite uma letra entre A e H \n");                   //Mensagem p/o usuário
    scanf("%c",&estado2);//comando para entrada de dados

    printf("Agora digite um número, 01, 02, 03 ou 04 (Com o Zero)\n");                                              //Mensagem p/o usuário            
    scanf("%d",&codigo2);//comando para entrada de dados

    printf("Agora digite o nome da cidade\n");                                                                       //Mensagem p/o usuário
    scanf(" %[^\n]",cidade2);//comando para entrada de dados

    printf("Agora digite a população desta cidade\n");                                                              //Mensagem p/o usuário
    scanf("%lu",&populacao2);//comando para entrada de dados

    printf("Agora digite o PIB desta cidade\n");                                                                    //Mensagem p/o usuário
    scanf("%f",&pib2);//comando para entrada de dados

    printf("Agora digite a área desta cidade\n");                                                                    //Mensagem p/o usuário
    scanf("%f",&area2);//comando para entrada de dados

    printf("Por fim, digite o número de pontos túristicos desta cidade\n");                                         //Mensagem p/o usuário
    scanf("%i",&pontos2);//comando para entrada de dados

    pibpercapt1 = (float) pib1 / populacao1;
    pibpercapt2 = (float) pib2 / populacao2;

    densidade1= (float) populacao1 / area1;
    densidade2= (float) populacao2 / area2;

    inverso1 = 1.0/densidade1;
    inverso2 = 1.0/densidade2;

    superpoder1= (unsigned long) populacao1 + pontos1 + area1 + pib1 + pibpercapt1 + inverso1;
    superpoder2= (unsigned long) populacao2 + pontos2 + area2 + pib2 + pibpercapt2 + inverso2;
    
    printf("Carta 1 \n");       //Sequencia de prints para imprimir o resultado final da carta 1
    printf("%s",cidade1);
    printf("  ");
    printf("%c",estado1);
    printf("%i\n",codigo1);
    printf("População: %lu habitantes\n",populacao1);
    printf("PIB: %.2f Reais\n",pib1);
    printf("Área: %.2f Km²\n",area1);
    printf("Pontos turísticos: %i \n",pontos1);
    printf("Densidade Populacional: %.2f Hab/Km²\n",densidade1);
    printf("PIB per capta: %.2f Reais\n\n",pibpercapt1);

    printf("Carta 2 \n");       //Sequencia de prints para imprimir o resultado final da carta 2
    printf("%s",cidade2);
    printf("  ");
    printf("%c",estado2);
    printf("%i\n",codigo2);
    printf("População: %lu habitantes\n",populacao2);
    printf("PIB: %.2f Reais\n",pib2);
    printf("Área: %.2f Km²\n",area2);
    printf("Pontos turísticos: %i \n",pontos2);
    printf("Densidade Populacional: %.2f Hab/Km²\n",densidade2);
    printf("PIB per capta: %.2f Reais\n\n",pibpercapt2);

    comp1 = populacao1 > populacao2;
    comp2 = pontos1 > pontos2;
    comp3 = area1 > area2;
    comp4 = pib1 > pib2;
    comp5 = pibpercapt1 > pibpercapt2;
    comp6 = densidade1 < densidade2;
    comp7 = superpoder1 > superpoder2;
    
    printf("Vencedor é: %i\n",comp1);
    printf("Vencedor é: %i\n",comp2);
    printf("Vencedor é: %i\n",comp3);                                                 
    printf("Vencedor é: %i\n",comp4);
    printf("Vencedor é: %i\n",comp5);
    printf("Vencedor é: %i\n",comp6);
    printf("Vencedor é: %i\n\n",comp7);


return 0;
}
