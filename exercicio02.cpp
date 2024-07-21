#include <stdio.h>
#include <string.h>

void limpeza() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    float total = 0, valorseparado[4] = {0, 0, 0, 0};
    char lanche[15], acompanhamento[20], bebida[15], frete[30], aux[10];
    printf("Escolha o seu lanche: \n 1- Hamburguer - 20,00R$\n 2- Pastel - 15,00R$\n 3- Cachorro Quente - 12,50R$\n 4- Pizza - 50,00R$\n");
    scanf("%s", lanche);
    limpeza();

    switch(lanche[0]) {
       // case 'Hamburguer':
        case '1': 
            total += 20;
            valorseparado[0] += 20;
            strcpy(lanche, "Hamburguer");
            break;

      //  case 'Pastel':
        case '2': 
            total += 15;
            valorseparado[0] += 15;
            strcpy(lanche, "Pastel");
            break;

       // case 'Cachorro Quente':
        case '3': 
            total += 12.50;
            valorseparado[0] += 12.50;
            strcpy(lanche, "Cachorro Quente");
            break;

       // case 'Pizza':
        case '4': 
            total += 50;
            valorseparado[0] += 50;
            strcpy(lanche, "Pizza");
            break;

        default:
            printf("Opçao de lanche invalida!\n");
            break;
    }

    printf("Escolha o seu acompanhamento: \n 1- Batata Frita - 7,00R$\n 2- Polenta frita - 5,00R$\n 3- Aneis de Cebola - 5,50R$\n");
    scanf("%s", acompanhamento);
    limpeza();

    switch(acompanhamento[0]) {
       // case 'Batata Frita':
        case '1': total += 7;
                  valorseparado[1] += 7;
                  strcpy(acompanhamento, "Batata Frita");
            break;

        //case 'Polenta frita':
        case '2': total += 5;
                  valorseparado[1] += 5;
                  strcpy(acompanhamento, "Polenta frita");
            break;

       //case 'Aneis de Cebola':
        case '3': total += 5.50;
                  valorseparado[1] += 5.50;
                  strcpy(acompanhamento, "Aneis de Cebola");
            break;

        default:
            printf("Opçao de acompanhamento invalida!\n");
            break;
    }

    printf("Escolha oa sua bebida: \n 1- Refrigerantes\n 2- Cervejas\n");
    scanf("%s", aux);
    limpeza();

    switch(aux[0]) {
        //case 'Refrigerantes':
        case '1': printf("Escolha o seu Refrigerante: \n 1- Coca Cola - 7,00R$\n 2- Guarana - 7,00R$\n 3- Sprite - 7,00R$\n");
                  scanf("%s)", bebida);
                  limpeza();
                  total += 7;
                  valorseparado[2] += 7;
                  switch (bebida[0]) {
                    case '1': strcpy(bebida, "Coca Cola");
                    break;
                    case '2': strcpy(bebida, "Guarana");
                    break;
                    case '3': strcpy(bebida, "Sprite");
                    break;
                  }
            break;

        //case 'Cervejas':
        case '2': printf("Escolha o seu Refrigerante: \n 1- Brahma - 10,00R$\n 2- Budweiser - 10,00R$\n 3- Heineken - 10,00R$\n");
                  scanf("%s)", bebida);
                  limpeza();
                  total += 10;
                  valorseparado[2] += 10;
                  switch (bebida[0]) {
                    case '1': strcpy(bebida, "Brahma");
                    break;
                    case '2': strcpy(bebida, "Budweiser");
                    break;
                    case '3': strcpy(bebida, "Heineken");
                    break;
                  }
            break;

        default:
            printf("Opçao de bebida invalida!\n");
            break;
    }

    printf("Escolha o bairro para entrega: \n 1- Villa Nova - 0,00R$\n 2- Alvorada - 7,00R$\n 3- Luther King - 5,00R$\n 4- Centro 6,00R$\n");
    scanf("%s", frete);
    limpeza();

    switch(frete[0]) {
        //case 'Villa Nova':
        case '1': total += 0;
                  valorseparado[1] += 0;
                  strcpy(frete, "Villa Nova");
            break;

        //case 'Alvorada':
        case '2': total += 7;
                  valorseparado[1] += 5;
                  strcpy(frete, "Alvorada");
            break;

        //case 'Luther King':
        case '3': total += 5;
                  valorseparado[1] += 5.50;
                  strcpy(frete, "Luther King");
            break;
        //case 'Centro':
        case '4': total += 6;
                  valorseparado[1] += 5.50;
                  strcpy(frete, "Centro");
            break;

        default:
            printf("Opçao de entrega invalida!\n");
            break;
    }

    printf("O seu pedido foi: \n");
    printf("Lanche: %s %.2fR$\n", lanche, valorseparado[0]);
    printf("Acompanhamento: %s %.2fR$\n", acompanhamento, valorseparado[1]);
    printf("Bebida: %s %.2fR$\n", bebida, valorseparado[2]);
    printf("Frete: %s %.2fR$\n", frete, valorseparado[3]);
    printf("Valor total: %.2fR$", total);
    

    return 0;
}