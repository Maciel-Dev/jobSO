// Online C compiler to run C program online
#include <stdio.h>

int receiveNumbers(int number){
    
    int anotherDiv = 0;
    
    printf("HERE");
    
    int contador = 2;
    
    while(contador <= number){
        if(number%contador == 0 && contador != number){
            anotherDiv = 1;
            break;
        }
        
        contador++;
    }
    
    return anotherDiv;
}


int main() {
    for(int i = 0; i<=100; i++){
        int check = receiveNumbers(i);
        if(check == 0){
            printf("O numero %i e primo\n", i);
        }
        else{
            printf("O numero %i nao e primo\n", i);
        }
    }
    

    return 0;
}
