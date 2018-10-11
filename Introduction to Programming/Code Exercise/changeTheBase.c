//Stantard Input Output Library
#include <stdio.h>

int main(){
    unsigned number, base, total=0, coefficient=1;

    printf("Enter the number and the base: ");
    scanf("%u %u",&number, &base);

    while(number!=0){
        total = total + coefficient*(number%base);
        number=number/base;
        coefficient*=10;
    }

    printf("%i\n", total);

    return 0;
}
