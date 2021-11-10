#include <stdio.h>
#include <stdlib.h>

int get_1st_weekDay(int year){
    int day;
    day = (((year-1)*365)+((year-1)/4)-((year-1)/100)+((year)/400)+1)%7;
    return day;
}

int main()
{
    system("Color 3F");
    int year,daysInMonth,weekDay=0,startingDay;
    printf("\nEnter a year: ");
    scanf("%d",&year);

    freopen("Calendar.txt","w",stdout);
    printf("\n\t*******Calendar of %d*******\n",year);
    printf("\t******************************");

    char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};

    if((year%4==0&&year%100!=0)||year%400==0)
        monthDay[1]=29;

        startingDay=get_1st_weekDay(year);

    for(int i=0;i<12;i++){
        daysInMonth=monthDay[i];
        printf("\n\n---------------%s-------------------\n",months[i]);
        printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");

        for(weekDay=0;weekDay<startingDay;weekDay++){
            printf("     ");
        }

        for(int i=1;i<=daysInMonth;i++){
            printf("%5d",i);

            if(++weekDay>6){
                printf("\n");
                weekDay=0;
            }
            startingDay=weekDay;
        }
    }
printf("\n\nShodoltong!");
}
