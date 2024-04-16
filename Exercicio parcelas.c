#include <stdio.h>

int main (){

int op, qtdpar, mes; //op = opções de pagamento
float valorgasto, valorprest, valorvista, valorfinal;

printf("Digite o valor total da compra: ");
scanf("%f%*c", &valorgasto);

printf("Digite a forma de pagamento: ");
scanf("%d%*c", &op);

switch (op){

case 1:

        valorfinal = 0;
        valorfinal = valorgasto - (valorgasto/10);

         printf("%f\n", valorgasto);
         printf("Valor final da compra com 10 por sento(awnn) de desconto: %.2f\n", valorfinal);
    break;

case 2:

    valorprest = valorgasto/2;
    printf("Valor das parcelas: \n");

    mes = 0;
    for(int i=0; i<2; i++){
            mes++;
        printf("Mes %d: %.2f\n", mes, valorprest);
    }
    break;

case 3:
    printf("Digite a quantidade de parcelas: ");
    scanf("%d%*c", &qtdpar);

        switch (qtdpar){

            case 3:
                valorprest = valorgasto/3;
                if(valorgasto>300){
                        printf("Valor das parcelas:\n");
                    mes=0;

                    for(int i=0; i<3; i++){
                        mes++;
                        valorprest += valorprest*3/100;
                        printf("Mes %d: %.2f\n", mes, valorprest);
                    }

                }
                else{
                    mes=0;
                    for(int i=0; i<3; i++){
                    mes++;
                    printf("Mes %d: %.2f\n", mes, valorprest);
                    }
                }
            break;

                        case 3:
                valorprest = valorgasto/3;
                if(valorgasto>300){
                        printf("Valor das parcelas:\n");
                    mes=0;

                    for(int i=0; i<3; i++){
                        mes++;
                        valorprest += valorprest*3/100;
                        printf("Mes %d: %.2f\n", mes, valorprest);
                    }

                }
                else{
                    mes=0;
                    for(int i=0; i<3; i++){
                    mes++;
                    printf("Mes %d: %.2f\n", mes, valorprest);
                    }
                }
            break;

                        case 3:
                valorprest = valorgasto/3;
                if(valorgasto>300){
                        printf("Valor das parcelas:\n");
                    mes=0;

                    for(int i=0; i<3; i++){
                        mes++;
                        valorprest += valorprest*3/100;
                        printf("Mes %d: %.2f\n", mes, valorprest);
                    }

                }
                else{
                    mes=0;
                    for(int i=0; i<3; i++){
                    mes++;
                    printf("Mes %d: %.2f\n", mes, valorprest);
                    }
                }
            break;
            default:
                printf("BURRO!!!\n");
                break;
        }
        break;


default:
    printf("BURRO!!!\n");
    break;

}

return 0;

}
