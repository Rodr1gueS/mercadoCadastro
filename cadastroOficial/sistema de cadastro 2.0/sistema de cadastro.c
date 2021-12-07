#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    system ("color 4f");
    setlocale(LC_ALL, "portuguese");
    int menu,cadastro[100], vis, sair, mud;
    char nome[100], sob[100], sexo[100], cid[100], est[100], al[100], end[100],email[100];
    int id,dia,mes,ano,ddd,cel,sang,at;

    while (menu !=5){

    system("cls");

    printf("\t\t\t\t\n=======================================\n");
    printf("\t\t\t\t\n=======================================\n");
    printf("\tMercadinho Do CEFET\n");
    printf("\t\t\t\n=======================================\n");
    printf("\t\t\t\n=======================================\n");

    printf("\t\n 1 - cadastro\n");
    printf("\t\n 2 - Visualizar cadastro\n");
    printf("\t\n 3 - Mais\n");
    printf("\t\n 4 - Deletar cadastro\n");
    printf("\t\n 5 - Sair\n");

    printf("\t\n OPCAO DESEJADA:");
    scanf("%d", &menu);
    printf("\t.........");
    system("cls");

    switch(menu){
        case 1:
        system("cls");

        system ("cls");
        printf("\t......Cadastro Produto.....\n\n");
        printf("\t....dados pessoais...\n\n");

        printf("Primeiro nome:");
        scanf("%s", &nome);
        printf("Sobrenome:");
        scanf("%s", &sob);
        printf("sexo(F ou M):");
        scanf("%s", &sexo);
        printf("Data de nascimento:");
        printf("\nDia: ");
        scanf("%d", &dia);
        printf("Mês: ");
        scanf("%d", &mes);
        printf("Ano: ");
        scanf("%d", &ano);

        id=2021-ano;
        printf("Idade: %d\n\n", id);
        printf("\t...contato e informações...\n\t\tAdcionais\n\n");
        printf("Telefone: ");
        scanf("%d", &cel);
        printf("Estado (Ex: SP): ");
        scanf("%s", &est);
        printf("Cidade(Ex: Rio_de_Janeiro): ");
        scanf("%s", &cid);


        system("cls");
        printf("\n\t...Cadastro Concluido...\n\n");
        system("pause");
        system("cls");
        break;

        //visualizar
        case 2:

            system("cls");
            printf("\n\t...Visualização...\n\n");
            printf("Primeiro nome: %s\n", nome);
            printf("Sobrenome: %s\n", sob);
            printf("Sexo(F ou M): %s\n", sexo);
            printf("Data de nascimento\n");
            printf("Dia: %d\n", dia);
            printf("Mês: %d\n", mes);
            printf("Ano: %d\n", ano);
            printf("Idade: %d\n", id);
            printf("\n\t..........\n\n");
            printf("Telefone: %d\n", cel);

            printf("\n\tPARA ALTERAR O CADASTRO DIGITE 8\t");
            scanf("%d", &mud);

            switch(mud)
            {
                case 8:
                    system("cls");

        system ("cls");
        printf("\t......Cadastro Produto.....\n\n");
        printf("\t....dados pessoais...\n\n");

        printf("Primeiro nome:");
        scanf("%s", &nome);
        printf("Sobrenome:");
        scanf("%s", &sob);
        printf("sexo(F ou M):");
        scanf("%s", &sexo);
        printf("Data de nascimento:");
        printf("\nDia: ");
        scanf("%d", &dia);
        printf("Mês: ");
        scanf("%d", &mes);
        printf("Ano: ");
        scanf("%d", &ano);

        id=2021-ano;
        printf("Idade: %d\n\n", id);
        printf("\t...contato e informações...\n\t\tAdcionais\n\n");
        printf("Telefone: ");
        scanf("%d", &cel);
        printf("Estado (Ex: SP): ");
        scanf("%s", &est);
        printf("Cidade(Ex: Rio_de_Janeiro): ");
        scanf("%s", &cid);


        system("cls");
        printf("\n\t...Cadastro Concluido...\n\n");
        system("pause");
        system("cls");
        break;
                case 1:
                    system("pause");
                    system("cls");

                    break;

            }



        break;

        //sobre a vendinha
        case 3:
            system("cls");

            printf("\n\t.....Mais sobre o mercadinho....\n\n");
            printf("\t Olá consumidor, criamos esse espaço para que\n");
            printf("\t consiga ver sobre seu produto\n");

            printf("\t...............\n\n");
            printf("\t Desenvolvido por: Grupo\n\n");
            printf("\t...............\n\n");

            system("pause");
            system("cls");
            break;

        //maldade de deletar
        case 4:
            system("cls");

            nome[0] = '\0';
            sob[0] = '\0';
            sexo[0] = '\0';
            cid[0] = '\0';
            est[0] = '\0';
            al[0] = '\0';

            dia=0;
            mes=0;
            ano=0;
            cel=0;
            id=0;

            printf("\t.....cadastro concluido....\n\n");
            system("pause");
            system("cls");
            break;

        //sair
        case 5:
            system ("cls");

            printf("\t deseja realmente sair do sistema?\n\n");
            printf("\t 5-Sim  6-Não\n\n");
            printf("sua escolha: ");

            if(menu==5){
                system("cls");
                printf("Você saiu do sistema!");
                system("cls");
                break;
            }





    }

}

}
