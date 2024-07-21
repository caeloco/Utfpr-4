#include <stdio.h>
#include <string.h>

void limpeza()
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int main()
{
    int continua = 1, qtd;
    float total, compra;
    char tipoprodutos, produtos, pagamento;

    while (continua == 1)
    {
    printf("Escolha oq vai comprar: \n1- Eletrodomésticos e móveis \n2- Cama e Banho \n");
    printf("3- Copa e Cozinha \n4- Eletrônicos\n");
    scanf("%s", &tipoprodutos);

    
        switch (tipoprodutos)
        {
        case '1':
            printf("Escolha o produto: \n1- Geladeira 750,00R$ \n2- Mesa 230,00R$ \n0- voltar\n");
            scanf("%f", &compra);
            printf("Escolha a quantidade: ");
            scanf("%d", &qtd);

            if (compra == 1)
            {
                compra = 750;
                total += compra * qtd;
                continua = 0;
            }
            else if (compra == 2)
            {
                compra = 230;
                total += compra * qtd;
                continua = 0;
            }
            else
                continua = 1;
            break;

        case '2':
            printf("Escolha o produto: \n1- Toalha 25,00R$ \n2- Edredom 100,00R$ \n0- voltar\n");
            scanf("%f", &compra);
            printf("Escolha a quantidade: ");
            scanf("%d", &qtd);

            if (compra == 1)
            {
                compra = 25;
                total += compra * qtd;
                continua = 0;
            }
            else if (compra == 2)
            {
                compra = 100;
                total += compra * qtd;
                continua = 0;
            }
            else
                continua = 1;
            break;

        case '3':
            printf("Escolha o produto: \n1- Jogo de talheres 75,00R$ \n2- Panela 60,00R$ \n0- voltar\n");
            scanf("%f", &compra);
            printf("Escolha a quantidade: ");
            scanf("%d", &qtd);

            if (compra == 1)
            {
                compra = 75;
                total += compra * qtd;
                continua = 0;
            }
            else if (compra == 2)
            {
                compra = 60;
                total += compra * qtd;
                continua = 0;
            }
            else
                continua = 1;
            break;

        case '4':
            printf("Escolha o produto: \n1- Computador Gamer 5000,00R$ \n2- Monitor 144hz 850,00R$ \n0- voltar\n");
            scanf("%f", &compra);
            printf("Escolha a quantidade: ");
            scanf("%d", &qtd);

            if (compra == 1)
            {
                compra = 5000;
                total += compra * qtd;
                continua = 0;
            }
            else if (compra == 2)
            {
                compra = 850;
                total += compra * qtd;
                continua = 0;
            }
            else
                continua = 1;
            break;
        }
    }

    printf("Escolha a forma de pagamento \n1- A vista \n2- Parcelado");



    return 0;
}