//TooEstacionando

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
        printf("\nCADASTRAR CLIENTE _1_\nEDITAR PLANO _2_\nREMOVER CADASTRO _3_\nVIZUALIZAR CLIENTES _4_\nVOLTAR _0_\n");
        scanf("%i", &opc);
        if(opc!=0 && opc!=1 && opc!=2 && opc!=3 && opc!=4){printf("\nERRO!!\n"); opc=5;}
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

    return;
}

void menuPlanos()
{

    int opc=5;

    while(opc==5)
    {
        printf("\nVIZUALIZAR PLANOS _1_\nEDITAR PLANOS _2_\nCADASTRAR PLANOS _3_\nREMOVER PLANOS _4_\nVOLTAR _0_\n");
        scanf("%i", &opc);
        if(opc!=0 && opc!=1 && opc!=2 && opc!=3 && opc!=4){printf("\nERRO!!\n"); opc=5;}
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