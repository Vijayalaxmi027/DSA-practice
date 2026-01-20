#include<stdio.h>
#include<stdlib.h>
struct day{
    char*dayname;
    char*activity;
    int d,m,y;
};
struct day*cal;

void create()
{
    for(int i=0;i<7;i++)
    {
        cal[i].dayname=(char*)malloc(10*sizeof(char));
        cal[i].activity=(char*)malloc(10*sizeof(char));
    }
}

void raed()
{
    for(int i=0;i<7;i++)
    {
        printf("enter dayname:\n",i+1);
        scanf("%s",cal[i].dayname);
        printf("enter activity :\n",i+1);
        scanf("%s",cal[i].activity);
        printf("enter date:\n",i+1);
        scanf("%d-%d-%d", &cal[i].d, &cal[i].m, &cal[i].y);
    }
}

void display()
{
    printf("CALENDER DEATAILS\n");
    printf("dayname\t \t date\t \t activity\n");
    for(int i=0;i<7;i++)
    {
        printf("%s\t \t %d-%d-%d\t \t %s\n",cal[i].dayname,cal[i].d,cal[i].m,cal[i].y,cal[i].activity);
    }
}

int main()
{
    cal=(struct day*)malloc(7*sizeof(struct day));
    create();
    raed();
    display();
 for(int i=0;i<7;i++)
 {
     free(cal[i].dayname);
     free(cal[i].activity);
 }
     free(cal);
     return 0;
}