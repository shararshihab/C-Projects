#include <stdio.h>
#include<conio.h>

int Menu();
void Bus();
void Cycle();
void Riksha();
void Delete();
void ShowDetail();

int nor=0,noc=0,nob=0,amount=0,count=0;
void main()
{
    while(1)
    {
    system("cls");
    switch(Menu())
    {
    case 1:
        Bus();
        break;
    case 2:
        Cycle();
        break;
    case 3:
        Riksha();
        break;
    case 4:
        ShowDetail();
        break;
    case 5:
        Delete();
        break;
    case 6:
        exit(0);
    default:
        printf("\nInvalid choice!");
    }
    getch();
    }
}

int Menu()
{
    int ch;
    printf("\n1. Enter bus:");
    printf("\n2. Enter cycle:");
    printf("\n3. Enter riksha:");
    printf("\n4. Show status:");
    printf("\n5. Delet data:");
    printf("\n6. Exit:");
    printf("\n\nEnter your choice:\n");
    scanf("%d",&ch);
    return(ch);
}

void Delete()
{
    printf("Deleted successfully");
    nor=0;
    noc=0;
    nob=0;
    amount=0;
    count=0;
}

void ShowDetail()
{
    printf("\nNumber of Bus %d",nob);
    printf("\nNumber of cycle %d",noc);
    printf("\nNumber of riksha %d",nor);
    printf("\nTotal Number of vehicle %d",count);
    printf("\nTotal gain amount %d",amount);
}

void Riksha(){
    printf("\nEntry successful");
    nor++;
    amount+=50;//price for parking a riksha is 50
    count++;
}

void Cycle(){
    printf("\nEntry successful");
    noc++;
    amount+=20;//price for parking a Cycle is 20
    count++;
}

void Bus(){
    printf("\nEntry successful");
    nob++;
    amount+=100;//price for parking a bus is 100
    count++;
}
