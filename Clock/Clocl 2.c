#include<stdio.h>
#include<conio.h>

void main(){

    int h,m,s,i;
    printf("Please enter a time format in HH:MM:SS");
	scanf("%d%d%d",&h,&m,&s);

	while(h<24){
        while(m<60){
            while(s<60){
                Sleep(1000);
                system("CLS");
                s++;
                printf("%d:%d:%d\n",h,m,s);
            }
            m++;
            s=0;
        }
	h++;
	m=0;
	}
getch();
}
