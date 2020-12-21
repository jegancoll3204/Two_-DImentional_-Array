#include<stdio.h>
int main()
{

    int  s,sub;
    printf("HOw many Student:");
    scanf("%d",&s);
    printf("How many Subject Each Students Have?:");
    scanf("%d",&sub);
    int a[s][sub];
    int ctotal[sub];
    int i,j;
    for(i=0;i<s;i++)
    {
        printf("\nEnter Student %d ",i+1);
        printf("\n--------------------");
        printf("\n");
        for(j=0;j<sub;j++)
        {
            printf("Enter Mark %d :",j+1);
            scanf("%d",&a[i][j]);
        }
    }


    for(i=0;i<s;i++)
    {
        for(j=0;j<sub;j++)
        {
            ctotal[i]=ctotal[i]+a[i][j];
        }
    }

    printf("\n\n\n");

    printf("School Name : Js higher Secondary School");
    printf("\n");
    printf("---------------------------------------------------------------------------------\n");
    printf("S.no         Sub-1          Sub-2           Sub-3           Sub-4         Sub-5  \n");
    printf("----         -----          ------          ------          ------        ------ \n");
    for(i=0;i<s;i++)
    {
        printf("\n");
        printf("%d",i+1);
        for(j=0;j<sub;j++)
        {
            printf("%15d",a[i][j]);
        }

    }
    printf("\n  \n");

    for(i=0;i<s;i++)
    {
        printf("\n%d Student Mark Total:-%d",i+1,ctotal[i]);
        printf("\n%d Student Average %d ",i+1,ctotal[i]/sub);
        printf("\n---------------------------------\n");
    }
    printf("\n\n");

}