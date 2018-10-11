#include <stdio.h>

int main(){
    unsigned number, base, total=0, coefficient=1, initialBase;

    printf("Enter the Number, Initial Base and the Base: ");
    scanf("%u %u %u", &number, &initialBase, &base);

    while((number>0)&&(base>0)&&(initialBase>0)){
        total = total + coefficient*(number%base);
        number = number/base;
        coefficient*=initialBase;
    }
    printf("%u\n",total);

    return 0;
}
