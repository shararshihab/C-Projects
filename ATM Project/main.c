#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    char ch;
    printf("Enter initial amount: ");
    scanf("%f",&x);
    printf("Enter\nc for credit\nd for debit\nb for balance\n");
    scanf("\n%c",&ch);
    switch(ch)
    {
    case 'c':
        printf("Enter credit amount: \n");
        scanf("%f",&y);
        x=x+y;
        printf("New amount = %.2f",x);
        break;
    case 'd':
        printf("Enter debit amount: \n");
        scanf("%f",&y);
        if(x>=y){
            x=x-y;
            printf("New amount = %.2f",x);
        }else{
        printf("Insufficient amount in your account!");}
        break;
    case 'b':
        printf("Amount in your account = %.2f",x);
        break;
    default:
        printf("Choose correct option for operation.");
    }
    return 0;
}
