#include <stdio.h>
int main(){
    int num,digit,temp;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        digit=temp%10;
        printf("%d ",digit);
        temp=temp/10;
}
}