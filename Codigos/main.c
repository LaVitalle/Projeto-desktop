//TooEstacionando

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Var Global
    struct cliente {char cpfCliente[12]; char placaCarro[9]; int idPlanoCliente; int status;}; typedef struct cliente cliente;
    struct plano {int idPlano; int descontoPlano;}; typedef struct plano plano;

    cliente clienteSaindo;
    plano planoSaindo;

    int horaEntrada, minEntrada, segEntrada, horaSaida, minSaida, segSaida;

    int vagasTotais=0, vagasOcupadas=0;
    double custoHora=10.0;
//Fim Var Global

//Funï¿½ï¿½es de menu
void menuClientes();
void menuVagas();
void menuPlanos();
void menuRelatorios();
<<<<<<< HEAD
//Fim funï¿½ï¿½es de menu
=======
void gerenciamento();
void entrada();
int menuFunc();
//Fim funções de menu
>>>>>>> 7878c33b57b87ec164f187cf99d1a8f2639a4ef0

//Funï¿½ï¿½es relacionadas a planos
void regPlano();
//Fim das funï¿½ï¿½es relacionadas a planos

//Funï¿½ï¿½es relacionadas a vagas
void testeVagas();
void atualizarVagas();
//Fim das funï¿½ï¿½es relacionadas a vagas

//Funï¿½ï¿½es relacionadas a clientes
void regCliente();
//Fim das funï¿½ï¿½es relacionadas a clientes

//Funï¿½ï¿½es relacionadas a entrada/saï¿½da
void entradaSemCad();
void entradaCad();
void horarioDeSaida();
void calcHora();
void saida();
//Fim das funï¿½ï¿½es relacionadas a entrada/saï¿½da

//Definição das funções dos menus
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int menu=0, menuOps;

    system("cls");

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

int menuFunc()
{
    int menuOps;

    printf("\n||----------------||\n||      MENU      ||\n||                ||\n||ENTRADA       1 ||\n||SAï¿½DA         2 ||\n||GERENCIAR     3 ||\n||                ||\n||FECHAR        0 ||\n||----------------||\n\n");
    scanf("%i",&menuOps);

    return menuOps;
}

void entrada()
{

    system("cls");

    int opc=3;

    while(opc==3)
    {
        printf("\n||---------------------------||\n||          ENTRADA          ||\n||                           ||\n||CLIENTE CADASTRADO       1 ||\n||CLIENTE Nï¿½O CADASTRADO   2 ||\n||                           ||\n||VOLTAR                   0 ||\n||---------------------------||\n\n");
        scanf("%i", &opc);
        if(opc!=0 && opc!=1 && opc!=2){printf("\nERRO!!\n"); opc=3;}
    }

    if(opc==1)
    {
        entradaCad();
    }
    else if(opc==2)
    {
        entradaSemCad();
    }

    system("cls");

    return;
}

void gerenciamento()
{

    system("cls");

    int check=1;

    while (check==1)
    {
        int opc=5;

        while(opc==5)
        {
            printf("\n||---------------------------||\n||        GERECIAMENTO       ||\n||                           ||\n||CLIENTES                 1 ||\n||VAGAS                    2 ||\n||PLANOS                   3 ||\n||RELATï¿½RIOS               4 ||\n||                           ||\n||VOLTAR                   0 ||\n||---------------------------||\n\n");
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

    system("cls");

    return;
}

void menuClientes()
{

    system("cls");

    int opc=5;

    while(opc==5)
    {
        printf("\n||---------------------------||\n||          CLIENTES         ||\n||                           ||\n||CADASTRAR CLIENTE        1 ||\n||EDITAR PLANO             2 ||\n||REMOVER CADASTRO         3 ||\n||VISUALIZAR CLIENTES      4 ||\n||                           ||\n||VOLTAR                   0 ||\n||---------------------------||\n\n");
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
        //remover cadastro Carlos
    }
    else if(opc==4)
    {
        //vizualizar clientes Gabi
        cliente p;
        char arquivoPlaca[13];

        printf("Digite a placa do carro: \n");
        scanf("%s", p.placaCarro);

        snprintf(arquivoPlaca, sizeof(arquivoPlaca), "%s.txt", arquivoPlaca);

         FILE *f;
        f= fopen(arquivoPlaca, "r");
        if(f==NULL){printf("ERRO!!");};
        
    }

    system("cls");

    return;
}

void menuVagas()
{

    system("cls");

    int opc=3;

    while(opc==3)
    {
        printf("\n||---------------------------||\n||           VAGAS           ||\n||                           ||\n||ATUALIZAR VAGAS          1 ||\n||VIZUALIZAR VAGAS         2 ||\n||                           ||\n||VOLTAR                   0 ||\n||---------------------------||\n\n");
        scanf("%i", &opc);
        if(opc!=0 && opc!=1 && opc!=2){printf("\nERRO!!\n"); opc=3;}
    }

    if(opc==1)
    {
        atualizarVagas();
    }
    else if(opc==2)
    {
    

    }

    system("cls");

    return;
}

void menuPlanos()
{

    system("cls");

    int opc=5;

    while(opc==5)
    {
        printf("\n||---------------------------||\n||           PLANOS          ||\n||                           ||\n||VISUALIZAR PLANOS        1 ||\n||EDITAR PLANOS            2 ||\n||CADASTRAR PLANOS         3 ||\n||REMOVER PLANOS           4 ||\n||                           ||\n||VOLTAR                   0 ||\n||---------------------------||\n\n");
        scanf("%i", &opc);
        if(opc!=0 && opc!=1 && opc!=2 && opc!=3 && opc!=4){printf("\nERRO!!\n"); opc=5;}
    }

    if(opc==1)
    {
        //visualizar planos Gabi
        int i;

        do{
                    printf("Vizualizacao dos planos: ");
        printf("Plano 1: \n R$29,99 Mensal. \n");
        printf("Plano 2: \n R$74,97 6 Meses. \n");
        printf("Plano 3: \n R$187,42 Anual. \n");
        printf("Plano 4: \n R$374,84 DuraÃ§Ã£o de 2 Anos. \n\n");
        getchar();

        printf("Digite 1 para sair. \n");
        scanf("%d", &i);
         if(i==1){
            printf("Saindo da vizualizacao de planos.");
        }else   {printf("digite o valor valido!\n");}
        }while(i!=1);

    }
    else if(opc==2)
    {
        //editar planos Carlos
    }
    else if(opc==3)
    {
        regPlano();
    }
    else if(opc==4)
    {
        //remover planos Carlos
    }

    system("cls");

    return;
}

void menuRelatorios()
{

    system("cls");
    
    int opc=5;

    while(opc==5)
    {
        printf("\n||----------------------------------------||\n||               RELATï¿½RIOS               ||\n||                                        ||\n||RELATï¿½RIO DE CLIENTES CADASTRADOS     1 ||\n||RELATï¿½RIO DE CLIENTES Nï¿½O CADASTRADOS 2 ||\n||RELATï¿½RIO DE VAGAS                    3 ||\n||RELATï¿½RIO DIï¿½RIO                      4 ||\n||                                        ||\n||VOLTAR                                0 ||\n||----------------------------------------||\n\n");
        scanf("%i", &opc);
        if(opc!=0 && opc!=1 && opc!=2 && opc!=3 && opc!=4){printf("\nERRO!!\n"); opc=5;}
    }

    system("cls");

    return;
}
//Fim das funções dos menus

//Definiï¿½ï¿½o de funï¿½ï¿½es relacionadas a planos
void regPlano()
{

    plano regisPlano = {0, 0};

    printf("Escolha um identificador para o plano\nO identificador deve ser entre 1 a 99\n");
    scanf("%d", &regisPlano.idPlano);

    system("cls");

    printf("Qual o desconto seu plano irï¿½ ofertar?\n");
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
//Fim das funï¿½ï¿½es relacionadas a planos

//Definiï¿½ï¿½o de funï¿½ï¿½es relacionadas a clientes
void regCliente()
{

    cliente regisCliente;
    char arquivoPlaca[13];
    regisCliente.status = 0;

    system("cls");

    printf("\nDigite a placa do carro para cadastro: ");
    scanf("%8s", regisCliente.placaCarro);
    
    fflush(stdin);
    system("cls");

    printf("\nDigite o CPF para cadastro: ");
    scanf("%11s", regisCliente.cpfCliente);

    fflush(stdin);
    system("cls");

    printf("\nDigite o identificador do plano do cliente para cadastro (Digite 0 para padrï¿½o): ");
    scanf("%i", &regisCliente.idPlanoCliente);

    fflush(stdin);
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
//Fim das funï¿½ï¿½es relacionadas a clientes

//Definiï¿½ï¿½o de funï¿½ï¿½es relacionadas a vagas
void testeVagas()
{

    int checkPrimeiraAbertura=100;

    FILE *f;
    f = fopen("..\\..\\server\\vagas.txt", "r");
    if(f==NULL){printf("ERRO!!");}

    fscanf(f, "%i %i", &vagasTotais, &checkPrimeiraAbertura);

    fclose(f);

    if (checkPrimeiraAbertura==0)
    {

        int op=0;

        while (op==0)
        {

            printf("\nEsta ï¿½ a sua primeira vez abrindo o nosso sistema!!\nPor padrï¿½o definimos 50 vagas de capacidade no estacionamento.\n\nGostaria de alterar esse valor? 1/sim e 2/nï¿½o\n");
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

                system("cls");

                printf("\nQuanto custarï¿½ a hora hoje?\n");
                scanf("%lf", &custoHora);

                system("cls");

            }
            else if(op==2)
            {
                
                FILE *f;
                f = fopen("..\\..\\server\\vagas.txt", "w");
                if(f==NULL){printf("ERRO!!");}

                fprintf(f, "%i %i", 50, 1);

                fclose(f);

                system("cls");

                printf("\nQuanto custarï¿½ a hora hoje?\n");
                scanf("%lf", &custoHora);

                system("cls");

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
        system("cls");

        printf("\nQuanto custarï¿½ a hora hoje?\n");
        scanf("%lf", &custoHora);

        system("cls");

        printf("\nVagas Totais: %i\n", vagasTotais);
    }

    return;
}

void atualizarVagas()
{

    system("cls");

    printf("Atualmente seu estacionamento conta com %i vagas.\nQuantas vagas vocï¿½ deseja utilizar: ", vagasTotais);
    scanf("%i", &vagasTotais);

    FILE *f;
    f = fopen("..\\..\\server\\vagas.txt", "w");
    if(f==NULL){printf("ERRO!!");}

    fprintf(f, "%i %i", vagasTotais, 1);

    fclose(f);

    return;
}
//Fim das funï¿½ï¿½es relacionadas a vagas

//Definiï¿½ï¿½o de funï¿½ï¿½es relacionadas a entrada/saï¿½da
void entradaSemCad()
{
    
    system("cls");

    cliente regisCliente;
    char arquivoPlaca[13];
    regisCliente.status = 1;

    printf("\nDigite a placa do carro para cadastro: ");
    scanf("%8s", regisCliente.placaCarro);
    
    fflush(stdin);
    system("cls");

    printf("\nDigite o CPF para cadastro: ");
    scanf("%11s", regisCliente.cpfCliente);

    fflush(stdin);
    system("cls");

    printf("\nDigite o identificador do plano do cliente para cadastro (Digite 0 para padrï¿½o): ");
    scanf("%i", &regisCliente.idPlanoCliente);

    fflush(stdin);
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

    system("cls");
    printf("\n\n\n\n\nENTRADA REGISTRADA COM SUCESSO.\n\n\n\n\n");
    system("pause");

    return;
}

void entradaCad()
{

    system("cls");

    cliente clientry;
    char arquivoPlaca[13];
    
    printf("\nDigite a placa do cliente: ");
    scanf("%s", clientry.placaCarro);
    fflush(stdin);

    snprintf(arquivoPlaca, sizeof(arquivoPlaca), "%s.txt", clientry.placaCarro);

    FILE *f;
    f = fopen(arquivoPlaca, "r");
    if(f==NULL){printf("ERRO!!");}

    fscanf(f, "%s", clientry.cpfCliente);
    fscanf(f, "%i", &clientry.idPlanoCliente);
    fscanf(f, "%i", &clientry.status);

    fclose(f);

    clientry.status = 1;

    f = fopen(arquivoPlaca, "w");
    if(f==NULL){printf("ERRO!!");}

    fprintf(f, "%s %i %i", clientry.cpfCliente, clientry.idPlanoCliente, clientry.status);
    fputs(" ", f);
    fputc(__TIME__[0],f);
    fputc(__TIME__[1],f);
    fputs(" ", f);
    fputc(__TIME__[3],f);
    fputc(__TIME__[4],f);
    fputs(" ", f);
    fputc(__TIME__[6],f);
    fputc(__TIME__[7],f);

    fclose(f);

    system("cls");
    printf("\n\n\n\n\nENTRADA REGISTRADA COM SUCESSO.\n\n\n\n\n");
    system("pause");

    return;
}

void horarioDeSaida()
{

    FILE *f;

        f = fopen ("..\\..\\server\\exit.txt","w");
        if(f==NULL){printf("ERRO!!");}

        fputc(__TIME__[0],f);
        fputc(__TIME__[1],f);
        fputs(" ", f);
        fputc(__TIME__[3],f);
        fputc(__TIME__[4],f);
        fputs(" ", f);
        fputc(__TIME__[6],f);
        fputc(__TIME__[7],f);

        fclose(f);

        f = fopen ("..\\..\\server\\exit.txt","r");
        if(f==NULL){printf("ERRO!!");}

        fscanf(f,"%i", &horaSaida);
        fscanf(f,"%i", &minSaida);
        fscanf(f,"%i", &segSaida);

        fclose(f);

    return;
}

void clienteExit()
{

    char arquivoPlaca[13];
    plano checkPlano;

    printf("\nDigite a placa do cliente: ");
    scanf("%s", clienteSaindo.placaCarro);
    fflush(stdin);

    snprintf(arquivoPlaca, sizeof(arquivoPlaca), "%s.txt", clienteSaindo.placaCarro);

    FILE *f;
    f = fopen(arquivoPlaca, "r");
    if(f==NULL){printf("ERRO!!");}

    fscanf(f, "%s", clienteSaindo.cpfCliente);
    fscanf(f, "%i", &clienteSaindo.idPlanoCliente);
    fscanf(f, "%i", &clienteSaindo.status);
    fscanf(f, "%i %i %i", &horaEntrada, &minEntrada, &segEntrada);

    fclose(f);

    f = fopen("..\\..\\server\\server.txt", "r");
    if(f==NULL){printf("ERRO!!");}

    while (checkPlano.idPlano!=clienteSaindo.idPlanoCliente)
    {
        fscanf(f, "%i %i", &checkPlano.idPlano, &checkPlano.descontoPlano);
    }

    planoSaindo.idPlano=checkPlano.idPlano;
    planoSaindo.descontoPlano=checkPlano.descontoPlano;

    fclose(f);

    return;
}

void calcHora()
{

    int entradaSegundos=0, saidaSegundos=0, estadia=0;
    double custoSegundo, desconto, descontoDouble, valorPagar;

    descontoDouble = planoSaindo.descontoPlano;
    desconto = 1 - (descontoDouble/100);

    entradaSegundos = ((horaEntrada*60)*60) + (minEntrada*60) + segEntrada;
    saidaSegundos = ((horaSaida*60)*60) + (minSaida*60) + segSaida;

    estadia = saidaSegundos-entradaSegundos;

    custoSegundo = custoHora/60/60;

    valorPagar = (estadia*custoSegundo)*desconto;

    system("cls");

    printf("\n\n\n||------------------------||\n|| CPF: %s       ||\n|| TOTAL A PAGAR: R$%.2lf ||\n||------------------------||", clienteSaindo.cpfCliente, valorPagar);

    printf("\n\n");

    return;
}

void saida()
{

    system("cls");

    char arquivoPlaca[13];

    horarioDeSaida();

    clienteExit();

    calcHora();

    snprintf(arquivoPlaca, sizeof(arquivoPlaca), "%s.txt", clienteSaindo.placaCarro);

    clienteSaindo.status = 0;

    FILE *f;

    f = fopen(arquivoPlaca, "w");
    if(f==NULL){printf("ERRO!!");}

    fprintf(f, "%s %i %i", clienteSaindo.cpfCliente, clienteSaindo.idPlanoCliente, clienteSaindo.status);

    fclose(f);

    system("Pause");

    system("cls");

    return;
}

//Fim das funï¿½ï¿½es relacionadas a entrada/saï¿½da