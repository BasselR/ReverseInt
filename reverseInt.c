#include <stdio.h>

int main(){

    unsigned long int num;
    unsigned long int output = 0;
    printf("Enter an integer: ");
    scanf("%ld", &num);

    while(num){
        output = num % 10;
        printf("%li", output);
        num /= 10;
    }
    return 0;
}