//TooEstacionando

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Var Global
    struct cliente {char cpfCliente[11]; char placaCarro[8]; int idPlanoCliente; int status;}; typedef struct cliente cliente;
    struct plano {int idPlano; int descontoPlano;}; typedef struct plano plano;

    int vagasTotais=0, vagasOcupadas=0;
//Fim Var Global

//Funções relacionadas a planos
void regPlano();
//Fim das funções relacionadas a planos

//Funções relacionadas a vagas
void testeVagas();
void atualizarVagas();
//Fim das funções relacionadas a vagas

//Funções relacionadas a clientes
void regCliente();
//Fim das funções relacionadas a clientes

//Funções relacionadas a entrada
void entradaSemCad();
void entradaCad();
//Fim das funções relacionadas a entrada

int menuFunc()
{
    int menuOps;

    printf("\n||----------------||\n||      MENU      ||\n||                ||\n||ENTRADA       1 ||\n||SAÍDA         2 ||\n||GERENCIAR     3 ||\n||                ||\n||FECHAR        0 ||\n||----------------||\n\n");
    scanf("%i",&menuOps);

    return menuOps;
}

void entrada()
{

    int opc=3;

    while(opc==3)
    {
        printf("\nCLIENTE NÃO CADASTRADO _1_\nCLIENTE CADASTRADO _2_\nVOLTAR _0_\n");
        scanf("%i", &opc);
        if(opc!=0 && opc!=1 && opc!=2){printf("\nERRO!!\n"); opc=3;}
    }

    if(opc==1)
    {
        entradaSemCad();
    }
    else if(opc==2)
    {
        entradaCad();
    }

    return;
}

void saida()
{

    int opc=3;

    while(opc==3)
    {
        printf("\nCLIENTE NÃO CADASTRADO _1_\nCLIENTE CADASTRADO _2_\nVOLTAR _0_\n");
        scanf("%i", &opc);
        if(opc!=0 && opc!=1 && opc!=2){printf("\nERRO!!\n"); opc=3;}
    }

    return;
}

void gerenciamento()
{

    int check=1;

    while (check==1)
    {
        int opc=5;

        while(opc==5)
        {
            printf("\nCLIENTES _1_\nVAGAS _2_\nPLANOS _3_\nRELATÓRIOS _4_\nVOLTAR _0_\n");
            scanf("%i", &opc);
            if(opc!=0 && opc!=1 && opc!=2 && opc!=3 && opc!=4){printf("\nERRO!!\n"); opc=5;}
        }

        if(opc==1)
        {
            menuClientes();
        }
        else if(opc==2)
        {
            menuVagas();
        }
        else if(opc==3)
        {
            menuPlanos();
        }
        else if(opc==4)
        {
            menuRelatorios();
        }
        else if (opc==0)
        {
            check=0;
        }
    }
    return;
}

void menuClientes()
{

    int opc=5;

    while(opc==5)
    {
        printf("\nCADASTRAR CLIENTE _1_\nEDITAR PLANO _2_\nREMOVER CADASTRO _3_\nVISUALIZAR CLIENTES _4_\nVOLTAR _0_\n");
        scanf("%i", &opc);
        if(opc!=0 && opc!=1 && opc!=2 && opc!=3 && opc!=4){printf("\nERRO!!\n"); opc=5;}
    }

    if(opc==1)
    {
        regCliente();
    }
    else if(opc==2)
    {
        //editar plano de cliente
    }
    else if(opc==3)
    {
        //remover cadastro
    }
    else if(opc==4)
    {
        //vizualizar clientes
    }

    return;
}

void menuVagas()
{

    int opc=3;

    while(opc==3)
    {
        printf("\nATUALIZAR VAGAS _1_\nVIZUALIZAR VAGAS _2_\nVOLTAR _0_\n");
        scanf("%i", &opc);
        if(opc!=0 && opc!=1 && opc!=2){printf("\nERRO!!\n"); opc=3;}
    }

    if(opc==1)
    {
        atualizarVagas();
    }
    else if(opc==2)
    {
        //visualizar vagas
    }

    return;
}

void menuPlanos()
{

    int opc=5;

    while(opc==5)
    {
        printf("\nVISUALIZAR PLANOS _1_\nEDITAR PLANOS _2_\nCADASTRAR PLANOS _3_\nREMOVER PLANOS _4_\nVOLTAR _0_\n");
        scanf("%i", &opc);
        if(opc!=0 && opc!=1 && opc!=2 && opc!=3 && opc!=4){printf("\nERRO!!\n"); opc=5;}
    }

    if(opc==1)
    {
        //visualizar planos
    }
    else if(opc==2)
    {
        //editar planos
    }
    else if(opc==3)
    {
        regPlano();
    }
    else if(opc==4)
    {
        //remover planos
    }

    return;
}

void menuRelatorios()
{
    
    int opc=5;

    while(opc==5)
    {
        printf("\nRELATÓRIO DE CLIENTES CADASTRADOS _1_\nRELATÓRIO DE CLIENTES NÃO CADASTRADOS _2_\nRELATÓRIO DE VAGAS _3_\nRELATÓRIO DIÁRIO _4_\nVOLTAR _0_\n");
        scanf("%i", &opc);
        if(opc!=0 && opc!=1 && opc!=2 && opc!=3 && opc!=4){printf("\nERRO!!\n"); opc=5;}
    }

    return;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int menu=0, menuOps;

    testeVagas();

    while(menu==0)
    {
        
        menuOps=menuFunc();

        if(menuOps==1)
        {
            entrada();
        }
        else if(menuOps==2)
        {
            saida();
        }
        else if(menuOps==3)
        {
            gerenciamento();
        }
        else if(menuOps==0)
        {
            menu=1;
        }

    }

    return 0;

}

//Definição de funções relacionadas a planos
void regPlano()
{

    plano regisPlano = {0, 0};

    printf("Escolha um identificador para o plano\nO identificador deve ser entre 1 a 99\n");
    scanf("%d", &regisPlano.idPlano);

    system("cls");

    printf("Qual o desconto seu plano irá ofertar?\n");
    scanf("%d", &regisPlano.descontoPlano);

    system("cls");

    FILE *f;
    f = fopen("..\\..\\server\\server.txt", "a");
    if(f==NULL){printf("ERRO!!");}

    fprintf(f, "%i", regisPlano.idPlano);
    fprintf(f, " ");
    fprintf(f, "%i", regisPlano.descontoPlano);
    fprintf(f, "\n");

    fclose(f);

    return;
}
//Fim das funções relacionadas a planos

//Definição de funções relacionadas a clientes
void regCliente()
{

    cliente regisCliente;
    char arquivoPlaca[13];
    regisCliente.status = 0;

    system("cls");

    printf("\nDigite o CPF para cadastro: ");
    scanf("%s", &regisCliente.cpfCliente);
    
    fflush(stdin);
    system("cls");

    printf("\nDigite a placa do carro para cadastro: ");
    scanf("%s", &regisCliente.placaCarro);

    fflush(stdin);
    system("cls");

    printf("\nDigite o identificador do plano do cliente para cadastro (Digite 0 para padrão): ");
    scanf("%i", &regisCliente.idPlanoCliente);

    system("cls");

    snprintf(arquivoPlaca, sizeof(arquivoPlaca), "%s.txt", regisCliente.placaCarro);

    FILE *f;
    f = fopen(arquivoPlaca, "w");
    if(f==NULL){printf("ERRO!!");}

    fprintf(f, "%s", regisCliente.cpfCliente);
    fprintf(f, " ");
    fprintf(f, "%i", regisCliente.idPlanoCliente);
    fprintf(f, " ");
    fprintf(f, "%i", regisCliente.status);

    fclose(f);

    return;
}
//Fim das funções relacionadas a clientes

//Definição de funções relacionadas a vagas
void testeVagas()
{

    int checkPrimeiraAbertura=100;

    FILE *f;
    f = fopen("..\\..\\server\\vagas.txt", "r");
    if(f==NULL){printf("ERRO!!");}

    fscanf(f, "%i %i", &vagasTotais, &checkPrimeiraAbertura);

    fclose(f);

    if (vagasTotais==50 && checkPrimeiraAbertura==0)
    {

        int op=0;

        while (op==0)
        {
        
            printf("\nEsta é a sua primeira vez abrindo o nosso sistema!!\nPor padrão definimos 50 vagas de capacidade no estacionamento.\n\nGostaria de alterar esse valor? 1/sim e 2/não\n");
            scanf("%i", &op);
            
            if(op==1)
            {

                FILE *f;
                f = fopen("..\\..\\server\\vagas.txt", "w");
                if(f==NULL){printf("ERRO!!");}

                printf("\nQuantas vagas seu estacionamento possui: ");
                scanf("%i", &vagasTotais);

                fprintf(f, "%i %i", vagasTotais, 1);

                fclose(f);

            }
            else if(op==2)
            {
                
                FILE *f;
                f = fopen("..\\..\\server\\vagas.txt", "w");
                if(f==NULL){printf("ERRO!!");}

                fprintf(f, "%i %i", 50, 1);

                fclose(f);

            }
            else
            { 
                
                system("cls");
                op=0;

            }
        }
    }
    else
    {
        printf("\nVagas Totais: %i\n", vagasTotais);
    }

    return;
}

void atualizarVagas()
{

    system("cls");

    printf("Atualmente seu estacionamento conta com %i vagas.\nQuantas vagas você deseja utilizar: ", vagasTotais);
    scanf("%i", &vagasTotais);

    FILE *f;
    f = fopen("..\\..\\server\\vagas.txt", "w");
    if(f==NULL){printf("ERRO!!");}

    fprintf(f, "%i %i", vagasTotais, 1);

    fclose(f);

    return;
}
//Fim das funções relacionadas a vagas

//Definição de funções relacionadas a entrada/saída
void entradaSemCad()
{
    
    system("cls");

    cliente regisCliente;
    char arquivoPlaca[13];
    regisCliente.status = 1;

    system("cls");

    printf("\nDigite o CPF para cadastro: ");
    scanf("%s", &regisCliente.cpfCliente);
    
    fflush(stdin);
    system("cls");

    printf("\nDigite a placa do carro para cadastro: ");
    scanf("%s", &regisCliente.placaCarro);

    fflush(stdin);
    system("cls");

    printf("\nDigite o identificador do plano do cliente para cadastro (Digite 0 para padrão): ");
    scanf("%i", &regisCliente.idPlanoCliente);

    system("cls");

    snprintf(arquivoPlaca, sizeof(arquivoPlaca), "%s.txt", regisCliente.placaCarro);

    FILE *f;
    f = fopen(arquivoPlaca, "w");
    if(f==NULL){printf("ERRO!!");}

    fprintf(f, "%s", regisCliente.cpfCliente);
    fprintf(f, " ");

    fprintf(f, "%i", regisCliente.idPlanoCliente);
    fprintf(f, " ");

    fprintf(f, "%i", regisCliente.status);
    fprintf(f, " ");

    fputc(__TIME__[0],f);
    fputc(__TIME__[1],f);
    fputs(" ", f);
    fputc(__TIME__[3],f);
    fputc(__TIME__[4],f);
    fputs(" ", f);
    fputc(__TIME__[6],f);
    fputc(__TIME__[7],f);

    fclose(f);

    return;
}

void entradaCad()
{

    system("cls");

    cliente clientry;
    char arquivoPlaca[13];
    
    printf("\nDigite a placa do cliente: ");
    scanf("%s", &clientry.placaCarro);
    fflush(stdin);

    snprintf(arquivoPlaca, sizeof(arquivoPlaca), "%s.txt", clientry.placaCarro);

    FILE *f;
    f = fopen(arquivoPlaca, "r");
    if(f==NULL){printf("ERRO!!");}

    fscanf(f, "%s", clientry.cpfCliente);
    fscanf(f, "%i", &clientry.idPlanoCliente);
    fscanf(f, "%i", &clientry.status);

    printf("%s\n%s\n%i\n%i\n", clientry.placaCarro, clientry.cpfCliente, clientry.idPlanoCliente, clientry.status);

    //in progress

    fclose(f);

    return;
}

void saidaCad()
{

}

//Fim das funções relacionadas a entrada/saída