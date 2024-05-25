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
            gerenciamento();    //Deve conter um menu com as opções Cadastrar, Vagas, Planos e Relatórios.
        }
        else if(menuOps==0)
        {
            menu=1;
        }

    }

    return 0;

}