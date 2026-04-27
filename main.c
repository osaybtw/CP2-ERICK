#include <stdio.h> 

int main() {
    float nota1, nota2, presenca, media, nome;
    
    printf(" BEM VINDO AO SISTEMA DE NOTAS FIAP... \n");
    printf(" VAMOS COMECAR   \n");
    printf("     PAINEL DE NOTAS     \n");
    printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
    printf("Digite a sua frequencia (0 a 100): ");
        scanf("%f", &presenca);
    printf("    -------------------------     \n");
    

    media = (nota1 + nota2) / 2;
    printf("Media geral: %.2f\n", media); 

    printf(" ------------------------ \n");


    if (media >= 6 && presenca > 66) {
      printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    } 
    
 
    
    return 0;
}