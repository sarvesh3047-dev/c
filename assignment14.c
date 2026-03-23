#include <stdio.h>
#include <math.h>

int main(){
    int binary,decimal=0,n=0,temp,digit;
    printf("Enter a binary number: ");
    scanf("%d",&binary);
    temp=binary;
    while (temp!=0){
        digit=temp%10;
        temp=temp/10;
        if (digit==1){
            decimal=decimal+pow(2,n);
        }
        n++;

    }
    printf("The decimal equivalent of %d is %d",binary,decimal);
}