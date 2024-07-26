//c program for executing the atm functions---
#include<stdio.h>
void main()
{
    float amt,creditamt,debitamt;
    char ch;
    printf("enter the initial amount\n");
    scanf("%f",&amt);
    printf("enter\nc for credit\nd for debit\nb for balance\n");
    scanf("\n%c",&ch);
    switch(ch)
    {
        case 'c':
        printf("enter the credit amount\n");
        scanf("%f",&creditamt);
        amt=amt+creditamt;
        printf("new amount =%f\n",amt);
        break;
        case 'd':
        printf("enter the debit amount\n");
        scanf("%f",&debitamt);
        amt=amt-debitamt;
        printf("new amount =%f\n",amt);
        break;
        case 'b':
        printf("balance is =%f\n",amt);
        break;
        default:printf("invalid operation");
    }
}