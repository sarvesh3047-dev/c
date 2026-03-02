#include <stdio.h>

int main(){
float basic_pay, HRA, TA, gross, net, tax;
printf("Enter your salary: ");
scanf("%f", &basic_pay);
HRA = 0.1* basic_pay;
TA = 0.05* basic_pay;
tax = 0.02* basic_pay ;
gross = basic_pay + HRA + TA;
net = gross - tax;
printf("The Basic Pay is %f\n", basic_pay);
printf("The HRA is %f\n", HRA);
printf("The TA is %f\n", TA);
printf("The Tax is %f\n", tax);
printf("The Salary of employee is %f\n", net);
return 0;

}