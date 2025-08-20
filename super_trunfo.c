/*
Realizando a atividade do curso estácio
As intruções incluidas neste arquivo pede que eu cadastre apenas 4 parâmetros (Pop,área,pib e nº de pts turisticos).
Entretanto no app estácio e nos vídeos é solicitado mais informações então Cadastrarei todos os parâmetros mostrados
no conteúdo da aula.
*/
#include <stdio.h>

int main(){                                  //todas inicializadas para evitar o "lixo" que pode estar na memoria
    char estado1="Z", estado2="Z";            // Declaração das variáveis para o campo Estado
    int codigo1=0,codigo2=0;                  //Declaração das variáveis para o campo código da carta
    char cidade1[20]="",cidade2[20]="";      //Declaração das variáveis para o campo Nome da cidade
    int populacao1=0,populacao2=0;           //Declaração das variáveis para o campo  população
    int pontos1=0,pontos2=0;                 //Declaração das variáveis para o campo pontos turisticos
    float area1=0.0,area2=0.0;               //Declaração das variáveis para o campo area
    float pib1=0.0,pib2=0.0;                 //Declaração das variáveis para o campo pib 
    
    printf("Bem vindo ao cadastro de cartas do Desafio Super Trunfo!\n\n Por favor digite uma letra entre A e H \n");//Mensagem p/o usuário
    scanf("%c",&estado1);  //comando para entrada de dados                                                                                            

    printf("Agora digite um número, 01, 02, 03 ou 04 (Com o Zero)\n");                                              //Mensagem p/o usuário
    scanf("%d",&codigo1); //comando para entrada de dados

    printf("Agora digite o nome da cidade\n");                                                                      //Mensagem p/o usuário
    scanf(" %[^\n]",cidade1); //comando para entrada de dados sem o &

    printf("Agora digite a população desta cidade\n");                                                              //Mensagem p/o usuário
    scanf("%i",&populacao1);//comando para entrada de dados

    printf("Agora digite o PIB desta cidade\n");                                                                    //Mensagem p/o usuário
    scanf("%f",&pib1);//comando para entrada de dados

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
    scanf("%i",&populacao2);//comando para entrada de dados

    printf("Agora digite o PIB desta cidade\n");                                                                    //Mensagem p/o usuário
    scanf("%f",&pib2);//comando para entrada de dados

    printf("Por fim, digite o número de pontos túristicos desta cidade\n");                                         //Mensagem p/o usuário
    scanf("%i",&pontos2);//comando para entrada de dados

    printf("Carta 1 \n");       //Sequencia de prints para imprimir o resultado final da carta 1
    printf("%s",cidade1);
    printf("  ");
    printf("%c",estado1);
    printf("%i\n",codigo1);
    printf("População: %i habitantes\n",populacao1);
    printf("PIB: %.2f Reais\n",pib1);
    printf("Pontos turísticos: %i \n\n",pontos1);

    printf("Carta 2 \n");       //Sequencia de prints para imprimir o resultado final da carta 2
    printf("%s",cidade2);
    printf("  ");
    printf("%c",estado2);
    printf("%i\n",codigo2);
    printf("População: %i habitantes\n",populacao2);
    printf("PIB: %.2f Reais\n",pib2);
    printf("Pontos turísticos: %i \n\n",pontos2);
    


return 0;
}