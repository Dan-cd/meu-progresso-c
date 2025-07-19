#include <stdio.h>

int main(){

    int nome_usuario;
    int senha;
    senha = 456;
    int idade;
    float nota;

    //nome de usuario e senha
        printf("Qual seu nome de usuario? \n");
            scanf("%d", &nome_usuario);
            if (nome_usuario == 123) {
            printf("\nCerto! agora informe sua senha: \n");
                scanf("%d", &senha);
            }
            else{
            printf("Nome incorreto! tente novamente.\n");
                scanf("%d", &nome_usuario);
            
            printf("Agora informe a senha: \n");
                scanf("%d", &senha);}

            if (senha == 456) {
            printf("\nAcesso permitido!\n\n");
            }
            else{
                printf("senha errada! tente novamente!\n");
                    scanf("%d", &senha);
            }
    //idade
        printf("\nQual sua idade?: \n");
            scanf("%d", &idade);
            if (idade >= 18) {
            printf("\nBem vindo(a)!\n");
            }

            else{
            printf("voce é menor de idade!\n");
            return 0;
            }
    //notas
        printf("\nQual sua média geral? \n");
            scanf("%f", &nota);
            if (nota >= 7) {
                printf("Parabéns! passou de ano!\n\n");
            }
            else if (nota <= 4.9) {
                printf("Esta reprovado(a)\n");
            }
            else if (nota <= 6.9){
                printf("Você ficou de recuperação!\n");
            }
    return 0;


}