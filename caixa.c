#include <stdio.h>
#include <strings.h>

int main() {
    float saldo = 1024.05;
    int opcao;
    float valor;
    int alternativa;
    char nome[50];
    char continuar;
    int senha;
    char entrada[20];

    printf("\n=== CAIXA-ELETRÔNICO ===\n");
    printf("Vemos que você é novo por aqui!\n");

    do {
        printf("\nCriar nova conta [1]\n");
        printf("Digite sua opção: ");
        fgets(entrada, sizeof(entrada), stdin);
        if (sscanf(entrada, "%d", &alternativa) != 1 || alternativa != 1) {
        printf("Alternativa inválida! tente novamente");
        } 
        // Aqui você pode seguir para o menu de operações, se quiser
    } while (alternativa != 1);
        printf("Seu nome: ");
        scanf(" %[^\n]", nome);
        printf("Agora insira seu pin: ");
        scanf("%d", &senha);
        printf("Olá %s, seja bem-vindo(a)!\n", nome);
        // Aqui entra o menu de operações (switch/case)
        do {
            printf("Escolha uma das opções:\n");
            printf("[1] Ver Saldo\n");
            printf("[2] Depositar\n");
            printf("[3] Sacar\n");
            printf("[4] Sair\n");

            printf("Digite a opção: ");
            scanf("%d", &opcao);
            if (opcao >= 5 || opcao < 1) {
                printf("Opção inválida!\n");
            }

            switch (opcao) {
                case 1:
                    printf("Seu saldo é: %.2f\n", saldo);
                    break;
                case 2:
                    printf("Quanto deseja depositar? ");
                    scanf("%f", &valor);
                    if (valor > 0) {
                        saldo += valor;
                        printf("Depósito realizado. Seu saldo atual é: %.2f\n", saldo);
                    } else {
                        printf("Valor inválido para depósito.\n");
                    }
                    break;
                case 3:
                    printf("Quanto deseja sacar? ");
                    scanf("%f", &valor);
                    if (valor > saldo) {
                        printf("Você não tem saldo suficiente para sacar isso.\n");
                        printf("Atualmente seu saldo é: %.2f\n", saldo);
                    } else if (valor > 0) {
                        saldo -= valor;
                        printf("Saque realizado. Seu saldo agora é: %.2f\n", saldo);
                    } else {
                        printf("Valor inválido para saque.\n");
                    }
                    break;
                case 4:
                    printf("Encerrando programa...\n");
                    break;
                default:
                    printf("Opção inválida!\n");
            }
            if (opcao != 4) {
                printf("Deseja continuar? (s/n) \n\n");
                scanf(" %c", &continuar);
            } else {
                continuar = 'n';
                printf("Obrigado por usar nosso sistema!\n");
            }
        } while (continuar == 's' || continuar == 'S');

    return 0;
}
