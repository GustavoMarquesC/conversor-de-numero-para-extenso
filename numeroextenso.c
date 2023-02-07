#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
char print[1000000];
char trans[10], transInvert[10];
int j, cont = 0, cont2 = 0, i;
int k, c, n, valor1, valor2, menos = 2;

//função que observa se há somente um número (imprimir)
void primeiraCasa(){
         switch(trans[n]){ //vai percorrer o número (string invertida) e cair no switch quando for igual
              case '1':
                  if(cont >= 2)
                    strcat(print,"e");
                    strcat(print," um ");
                    break;
              case '2':
                  if(cont >= 2)
                    strcat(print,"e");
                    strcat(print," dois ");
                    break;
              case '3':
                  if(cont >= 2)
                    strcat(print,"e");
                    strcat(print," tres ");
                    break;
              case '4':
                  if(cont >= 2)
                    strcat(print,"e");
                    strcat(print," quatro ");
                    break;
              case '5':
                  if(cont >= 2)
                    strcat(print,"e");
                    strcat(print," cinco ");
                    break;
              case '6':
                  if(cont >= 2)
                    strcat(print,"e");
                    strcat(print," seis ");
                    break;
              case '7':
                  if(cont >= 2)
                    strcat(print,"e");
                    strcat(print," sete ");
                    break;
              case '8':
                  if(cont >= 2)
                    strcat(print,"e");
                    strcat(print," oito ");
                    break;
              case '9':
                  if(cont >= 2)
                    strcat(print,"e");
                    strcat(print," nove ");
                    break;
                }
}

//função que observa se há dois números (imprimir)
void segundaCasa(){
     if(trans[n] == '1'){
            switch(trans[n - 1]){ //vai percorrer o número (string invertida) e cair no switch quando for igual
                case '0':
                    n--;
                    if(cont >= 3)
                        strcat(print,"e");
                        strcat(print," dez ");
                        break;
                case '1':
                    n--;
                    if(cont >= 3)
                        strcat(print,"e");
                        strcat(print," onze ");
                        break;
                case '2':
                    n--;
                    if(cont >= 3)
                        strcat(print,"e");
                        strcat(print," doze ");
                        break;
                case '3':
                    n--;
                    if(cont >= 3)
                        strcat(print,"e");
                        strcat(print," treze ");
                        break;
                case '4':
                    n--;
                    if(cont >= 3)
                        strcat(print,"e");
                        strcat(print," quatorze ");
                        break;
                case '5':
                    n--;
                    if(cont >= 3)
                        strcat(print,"e");
                        strcat(print," quinze ");
                        break;
                case '6':
                    n--;
                    if(cont >= 3)
                        strcat(print,"e");
                        strcat(print," dezesseis ");
                        break;
                case '7':
                    n--;
                    if(cont >= 3)
                        strcat(print,"e");
                        strcat(print," dezessete ");
                        break;
                case '8':
                    n--;
                    if(cont >= 3)
                        strcat(print,"e");
                        strcat(print," dezoito ");
                        break;
                case '9':
                    n--;
                    if(cont >= 3)
                        strcat(print,"e");
                        strcat(print," dezenove ");
                        break;
                }
     }
     else{
         switch(trans[n]){ //vai percorrer o número (string invertida) e cair no switch quando for igual
                case '2':
                    if(cont >= 3)
                        strcat(print,"e");
                        strcat(print,"vinte ");
                        break;
                case '3':
                    if(cont >= 3)
                        strcat(print,"e");
                        strcat(print," trinta ");
                        break;
                case '4':
                    if(cont >= 3)
                        strcat(print,"e");
                        strcat(print," quarenta ");
                        break;
                case '5':
                    if(cont >= 3)
                        strcat(print,"e");
                        strcat(print," cinquenta ");
                        break;
                case '6':
                    if(cont >= 3)
                        strcat(print,"e");
                        strcat(print," sessenta ");
                        break;
                case '7':
                    if(cont >= 3)
                        strcat(print,"e");
                        strcat(print," setenta ");
                        break;
                case '8':
                    if(cont >= 3)
                        strcat(print,"e");
                        strcat(print," oitenta ");
                        break;
                case '9':
                    if(cont >= 3)
                        strcat(print,"e");
                        strcat(print," noventa ");
                        break;
                }
         }
}

//função que observa se há três números (imprimir)
void terceiraCasa(){
         switch(trans[n]){ //vai percorrer o número (string invertida) e cair no switch quando for igual
             case '1':
                 if(trans[n - 1] == '0' && trans[n - 2] == '0')
                    strcat(print," cem ");
                 else
                    strcat(print," cento ");
                 break;
             case '2':
                 strcat(print," duzentos ");
                 break;
             case '3':
                 strcat(print," trezentos ");
                 break;
             case '4':
                 strcat(print," quatrocentos ");
                 break;
             case '5':
                 strcat(print," quinhentos ");
                 break;
             case '6':
                 strcat(print," seiscentos ");
                 break;
             case '7':
                 strcat(print," setecentos ");
                 break;
             case '8':
                 strcat(print," oitocentos ");
                 break;
             case '9':
                 strcat(print," novecentos ");
                 break;
            }
}

//função que observa se há quatro números (imprimir)
void quartaCasa(){
        switch(trans[n]){ //vai percorrer o número (string invertida) e cair no switch quando for igual
             case '1':
                 if(cont >= 5)
                    strcat(print,"e");
                    strcat(print,"mil ");
                    break;
             case '2':
                 if(cont >= 5)
                    strcat(print,"e");
                    strcat(print," dois mil");
                    break;
             case '3':
                 if(cont >= 5)
                    strcat(print,"e");
                    strcat(print," tres mil ");
                    break;
             case '4':
                 if(cont >= 5)
                    strcat(print,"e");
                    strcat(print," quatro mil ");
                    break;
             case '5':
                 if(cont >= 5)
                    strcat(print,"e");
                    strcat(print," cinco mil ");
                    break;
             case '6':
                 if(cont >= 5)
                    strcat(print,"e");
                    strcat(print," seis mil ");
                    break;
             case '7':
                 if(cont >= 5)
                    strcat(print,"e");
                    break;
             case '8':
                 if(cont >= 5)
                    strcat(print,"e");
                    strcat(print," oito mil ");
                    break;
             case '9':
                 if(cont >= 5)
                    strcat(print,"e");
                    strcat(print," nove mil ");
                    break;
                }

}

//função que observa se há cinco números (imprimir)
void quintaCasa(){
     if(trans[n - 1] == '0' && trans[n] == '1'){
         switch(trans[n]){ //vai percorrer o número (string invertida) e cair no switch quando for igual
            case '1':
                strcat(print," dez mil ");
                break;
            }
     }
     else if(trans[n] == '1'){
         switch(trans[n - 1]){ //vai percorrer o número (string invertida) e cair no switch quando for igual
            case '1':
                n--;
                if(cont >= 6)
                    strcat(print,"e");
                    strcat(print," onze mil ");
                    break;
            case '2':
                n--;
                if(cont >= 6)
                    strcat(print,"e");
                    strcat(print," doze mil ");
                    break;
            case '3':
                n--;
                if(cont >= 6)
                    strcat(print,"e");
                    strcat(print," treze mil ");
                    break;
            case '4':
                n--;
                if(cont >= 6)
                    strcat(print,"e");
                    strcat(print," quatorze mil ");
                    break;
            case '5':
                n--;
                if(cont >= 6)
                    strcat(print,"e");
                    strcat(print," quinze mil ");
                    break;
            case '6':
                n--;
                if(cont >= 6)
                    strcat(print,"e");
                    strcat(print," dezesseis mil ");
                    break;
            case '7':
                n--;
                if(cont >=6 )
                    strcat(print,"e");
                    strcat(print," dezessete mil ");
                    break;
            case '8':
                n--;
                if(cont >= 6)
                    strcat(print,"e");
                    strcat(print," dezoito mil ");
                    break;
            case '9':
                n--;
                if(cont >= 6)
                    strcat(print,"e");
                    strcat(print," dezenove mil ");
                    break;
                }
         }
         else
                switch(trans[n]){ //vai percorrer o número (string invertida) e cair no switch quando for igual
                    case '2':
                        if(cont >= 7)
                            strcat(print,"e");
                            strcat(print," vinte ");
                        if((trans[n - 1]) == '0')
                            strcat(print,"mil ");
                            break;
                    case '3':
                        if(cont >= 7)
                            strcat(print,"e");
                            strcat(print," trinta ");
                        if((trans[j - 1]) == '0')
                            strcat(print,"mil ");
                            break;
                    case '4':
                        if(cont >= 7)
                            strcat(print,"e");
                            strcat(print," quarenta ");
                        if((trans[n - 1]) == '0')
                            strcat(print,"mil ");
                            break;
                    case '5':
                        if(cont >= 7)
                            strcat(print,"e");
                            strcat(print," cinquenta ");
                        if(trans[n - 1] == '0')
                            strcat(print,"mil ");
                            break;
                    case '6':
                        if(cont >= 7)
                            strcat(print,"e");
                            strcat(print," sessenta ");
                        if((trans[n - 1]) == '0')
                            strcat(print,"mil ");
                            break;
                    case '7':
                        if(cont >= 7)
                            strcat(print,"e");
                            strcat(print," setenta ");
                        if(trans[n - 1] == '0')
                            strcat(print,"mil ");
                            break;
                    case '8':
                        if(cont >= 7)
                            strcat(print,"e");
                            strcat(print," oitenta ");
                        if((trans[n - 1]) == '0')
                            strcat(print,"mil ");
                            break;
                    case '9':
                        if(cont >= 7)
                            strcat(print,"e");
                            strcat(print," noventa ");
                        if((trans[n - 1]) == '0')
                            strcat(print,"mil ");
                            break;
         }
}

//função que observa se há seis números (imprimir)
void sextaCasa(){
         switch(trans[n]){ //vai percorrer o número (string invertida) e cair no switch quando for igual
                    case '1':
                        if(trans[n - 1] == '0' && trans[n - 2] == '0')
                            strcat(print," cem mil");
                            else
                                strcat(print," cento ");
                                break;
                    case '2':
                        strcat(print," duzentos ");
                        if(trans[n - 1] == '0' && trans[n - 2] == '0')
                            strcat(print,"mil ");
                            break;
                    case '3':
                        strcat(print," trezentos ");
                        if(trans[n - 1] == '0' && trans[n - 2] == '0')
                            strcat(print,"mil ");
                            break;
                    case '4':
                        strcat(print," quatrocentos ");
                        if(trans[n - 1] == '0' && trans[n - 2] == '0')
                            strcat(print,"mil ");
                            break;
                    case '5':
                        strcat(print," quinhentos ");
                        if(trans[n - 1] == '0' && trans[n - 2] == '0')
                            strcat(print,"mil ");
                            break;
                    case '6':
                        strcat(print," seiscentos ");
                        if(trans[n - 1] == '0' && trans[n - 2] == '0')
                            strcat(print,"mil ");
                            break;
                    case '7':
                        strcat(print," setecentos ");
                        if(trans[n - 1] == '0' && trans[n - 2] == '0')
                            strcat(print,"mil ");
                            break;
                    case '8':
                        strcat(print," oitocentos ");
                        if(trans[n - 1] == '0' && trans[n - 2] == '0')
                            strcat(print,"mil ");
                            break;
                    case '9':
                        strcat(print," novecentos ");
                        if(trans[n - 1] == '0' && trans[n - 2] == '0')
                            strcat(print,"mil ");
                            break;
         }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Digite o primeiro valor:\n"); //ler o primeiro valor
    scanf("%d", &valor1);
    if (valor1 <= 0 || valor1 > 999999){ //verificar se está no intervalo entre 0 e 1000000
        while (valor1 <= 0 || valor1 > 999999){
            printf("Valor inválido. Digite outro valor:\n");
            scanf("%d", &valor1);
        }
    } else{
        printf("Valor válido.\n");
    }

    printf("Digite o segundo valor:\n"); //ler o segundo valor
    scanf("%d", &valor2);
    if (valor2 <= 0 || valor2 > 999999){ //verificar se está no intervalo entre 0 e 1000000
        while (valor1 <= 0 || valor1 > 999999){
            printf("Valor inválido. Digite outro valor:\n");
            scanf("%d", &valor1);
        }
        printf("Valor inválido. Digite outro valor:\n");
        scanf("%d", &valor2);
    } else{
        printf("Valor válido.\n");
    }

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-\n");



    if (valor1 > valor2){ //verificar se está no intervalo entre 0 e 1000000
        for(j = valor2; j <= valor1; j++){ //o for irá contar o menor valor até o maior
            itoa(j, transInvert, 10); //transforma o valor int em char, para que inverta a ordem dos caracteres
            printf("%s\n", transInvert);
            cont = strlen(transInvert); //contando as letras
            k = cont - 1;
            for (c = 0; c <= cont; c++){ //invertendo os números (string)
                trans[c] = transInvert[k];
                k = k - 1;
            }
            for (n = cont; n >= 0; n--){ //verificando a quantidade de caracteres
                switch (n){ //recebendo o valor do for e imprimindo de acordo com as funções

                      case 0:
                          primeiraCasa();
                          break;
                      case 1:
                          segundaCasa();
                          break;
                      case 2:
                          terceiraCasa();
                          break;
                      case 3:
                          quartaCasa();
                          break;
                      case 4:
                          quintaCasa();
                          break;
                      case 5:
                          sextaCasa();
                          break;

                    }

            }

                cont2 = strlen(print); //contando números de caracteres
                printf("-=-=-=-=-=-=-=-=-=-=-=-=-\n");
            }
            for (i = 0; i < strlen(print); i++){ //ajustando a contagem de letras
                if(print[i] == ' '){
                    cont2--;
                }
            }
            printf("%s\n", print);
            printf("-=-=-=-=-=-=-=-=-=-=-=-=-\n");
            printf("A quantidade de letras contadas foi: %i letras\n", cont2);
            }else if (valor2 > valor1){ //verificar qual o valor é maior, para que seja feito na ordem certa
                for(j = valor1; j <= valor2; j++){ //o for irá contar o menor valor até o maior
                    itoa(j , transInvert, 10); //transforma o valor int em char, para que inverta a ordem dos caracteres
                    printf("%s\n", transInvert);
                    cont = strlen(transInvert); //contando as letras
                    k = cont - 1;
                    for (c = 0; c <= cont; c++){ //invertendo os números (string)
                        trans[c] = transInvert[k];
                        k = k - 1;
                    }
                    for (n = cont; n >= 0; n--){ //verificando a quantidade de caracteres
                    switch (n){ //recebendo o valor do for e imprimindo de acordo com as funções

                          case 0:
                              primeiraCasa();
                              break;
                          case 1:
                              segundaCasa();
                              break;
                          case 2:
                              terceiraCasa();
                              break;
                          case 3:
                              quartaCasa();
                              break;
                          case 4:
                              quintaCasa();
                              break;
                          case 5:
                              sextaCasa();
                              break;

                }
                    }

                    cont2 = strlen(print); //contando números de caracteres
                    printf("-=-=-=-=-=-=-=-=-=-=-=-=-\n");
            }
            for (i = 0; i < strlen(print); i++){ //ajustando a contagem de letras
                if(print[i] == ' '){
                    cont2--;
                }
            }
            printf("%s\n", print);
            printf("-=-=-=-=-=-=-=-=-=-=-=-=-\n");
            printf("A quantidade de letras contadas foi: %i letras\n", cont2);
    }

    return 0;
}