//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    system ("color 4f"); //mudando a cor da tela e letra
    setlocale(LC_ALL, "portuguese");

    //Variaveis
    int menu=0, vis=0, sair=0, mud=0, validade=0, cod=0;
    int id=0,dia=0,mes=0,ano=0,ddd=0,cel=0,at=0, recad=0, cpf=0;

    char nome_produto[100],nome_cliente[100], sob[100], sexo[100], cid[100], est[100], al[100], end[100],email[100],cadastro[100];

    float preco_venda=0, preco_compra=0,quantidade=0,lucro=0;

    //enquanto menu for diferente de 6 ele executa
    while (menu !=6){

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
    printf("\t\n 5 - Recadastrar Empresa\n");
    printf("\t\n 6 - Sair\n");

    printf("\t\n Opçao desejada:");
    scanf("%d", &menu);
    printf("\t.........");
    system("cls");

    switch(menu){
        case 1:
        system("cls");

        system ("cls");
        printf("\t......Cadastro Produto.....\n\n");
        //cadastrando o novo produto

        printf("Nome do produto: ");
        scanf("%s", &nome_produto);
        printf("Validade: ");
        printf("\nDia: ");
        scanf("%d", &dia);
        printf("Mês: ");
        scanf("%d", &mes);
        printf("Ano: ");
        scanf("%d", &ano);
        printf("Codigo do produto: ");
        scanf("%d", &cod);
        printf("Quantidade: ");
        scanf("%f", &quantidade);
        printf("Custo para a empresa (Ex: 1,00): ");
        scanf("%f", &preco_compra);
        printf("Valor final para o cliente(Ex: 1,00): ");
        scanf("%f", &preco_venda);
        lucro = preco_venda - preco_compra;
        printf("Seu lucro será: %.2f", lucro);




        printf("\t\t\n......Cadastro do Dono(a) do produto.....\n\n");

        //cadastrando a empresa
        printf("\nPrimeiro nome:");
        scanf("%s", &nome_cliente);
        printf("\nSobrenome:");
        scanf("%s", &sob);
        printf("sexo(F ou M):");
        scanf("%s", &sexo);

        printf("\t\t...CONTATO E INFORMACOES ADICIONAIS.......\n\n");

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
            printf("Primeiro nome: %s\n", nome_cliente);
            printf("Sobrenome: %s\n", sob);
            printf("Sexo(F ou M): %s\n", sexo);
            printf("Telefone: %d\n", cel);
            printf("Estado: %s\n", est);
            printf("Cidade: %s\n", cid);


            printf("Nome do Produto: %s\n", nome_produto);
            printf("Data de vencimento produto\n");
            printf("Dia: %d\n", dia);
            printf("Mês: %d\n", mes);
            printf("Ano: %d\n", ano);
            printf("Codigo do Produto: %d\n", cod);
            printf("Quantidade: %.2f\n", quantidade);
            printf("Custo para a empresa: %.2f\n", preco_compra);
            printf("Custo para o cliente: %.2f\n", preco_venda);



            printf("\n\t..........\n\n");


            printf("\n\tPARA ALTERAR O CADASTRO DIGITE 8\t");
            printf("\n\tCASO NÃO QUERIA DIGITE UM NUMERO DIFERENTE DE 8\t");
            scanf("%d", &mud);

            switch(mud)
            {
                case 8:
                    system("cls");

        system ("cls");
        printf("\t......Cadastro Produto.....\n\n");
        printf("\t......Cadastro Produto.....\n\n");
        //cadastrando o novo produto

        printf("Nome do produto: ");
        scanf("%s", &nome_produto);
        printf("Validade: ");
        printf("\nDia: ");
        scanf("%d", &dia);
        printf("Mês: ");
        scanf("%d", &mes);
        printf("Ano: ");
        scanf("%d", &ano);
        printf("Codigo do produto: ");
        scanf("%d", &cod);
        printf("Quantidade: ");
        scanf("%f", &quantidade);
        printf("Custo para a empresa (Ex: 1,00): ");
        scanf("%f", &preco_compra);
        printf("Valor final para o cliente (Ex: 1,00): ");
        scanf("%f", &preco_venda);

        printf("\t......Cadastro do fornecedor do produto.....\n\n");

        //cadastrando a empresa
        printf("Primeiro nome:");
        scanf("%s", &nome_cliente);
        printf("Sobrenome:");
        scanf("%s", &sob);
        printf("sexo(F ou M):");
        scanf("%s", &sexo);

        printf("\t...contato e informacoes...\n\t\tAdcionais\n\n");

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
            printf("\t e sobre seu fornecedor\n");

            printf("\t...............\n\n");
            printf("\t Desenvolvido por: \n\n");
            printf("\t Igor, Giovanna, Gabriel Reis e Yuri \n\n");
            printf("\t...............\n\n");

            system("pause");
            system("cls");
            break;

        //maldade de deletar
        case 4:
            system("cls");

            nome_cliente[0] = '\0';
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

            //alterando elementos 1 por 1 para recadastrar
        case 5:
            system("cls");

            printf("1. Primeiro nome: %s\n", nome_cliente);
            printf("2. Sobrenome: %s\n", sob);
            printf("3. Sexo(F ou M): %s\n", sexo);
            printf("4. Telefone: %d\n", cel);
            printf("5. Estado: %s\n", est);
            printf("6. Cidade: %s\n", cid);



            printf("\n\t..........\n\n");

            printf("\t\t Para alterar alguma informação tecle o digito dela...");
            scanf("%d", &recad);

            if(recad==1){
                system("cls");
                printf("Primeiro nome:");
                scanf("%s", &nome_cliente);
                system("cls");
                printf("\n\t...Alteração Concluida...\n\n");
                system("pause");
                system("cls");
                break;

            }
            if(recad==2){
                system("cls");
                printf("Sobrenome:");
                scanf("%s", &sob);
                system("cls");
                printf("\n\t...Alteração Concluida...\n\n");
                system("pause");
                system("cls");
                break;

            }

            if(recad==3){
                system("cls");
                printf("sexo(F ou M):");
                scanf("%s", &sexo);
                system("cls");
                printf("\n\t...Alteração Concluida...\n\n");
                system("pause");
                system("cls");
                break;
            }
            if(recad==4){
                system("cls");
                printf("Telefone: ");
                scanf("%d", &cel);
                system("cls");
                printf("\n\t...Alteração Concluida...\n\n");
                system("pause");
                system("cls");
                break;
            }
            if(recad==5){
                system("cls");
                printf("Estado (Ex: SP): ");
                scanf("%s", &est);
                system("cls");
                printf("\n\t...Alteração Concluida...\n\n");
                system("pause");
                system("cls");
                break;
            }
            if(recad==6){
                system("cls");
                printf("Cidade(Ex: Rio_de_Janeiro): ");
                scanf("%s", &cid);
                system("cls");
                printf("\n\t...Alteração Concluida...\n\n");
                system("pause");
                system("cls");
                break;
            }
            system("cls");

            break;
        //sair
        case 6:
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
