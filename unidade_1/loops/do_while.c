#include <stdio.h>

int main(){
    int opt = 3;
    while (opt != 0){
        printf("Digite 0 para sair:");
        scanf("%d", &opt);
    }

    /* do{
        printf("Digite 0 para sair:");
        scanf("%d", &opt);        
        switch (opt){
            case 1:
                printf("Voce pegou em bomba\n");
                break;
            case 2: 
                printf("Vai trabalhar, vagabundo!\n");
            break;
        }
    }while (opt != 0); */
    return 0;
}