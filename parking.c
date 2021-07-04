#include<stdio.h>
#include<conio.h>

int Menu();
void Bus();
void Cycle();
void Riksha();
void Delete();
void ShowDetail();
int nor=0,nob=0,noc=0,amount=0,count=0;
void main()
{
    while(1)
    {
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
                printf("\n Invalid Choice:");
    }
    }
}
int Menu()
{
    int ch;
    printf("1. Enter Bus: \n");
    printf("2. Enter Cycle: \n");
    printf("3. Enter Riksha: \n");
    printf("4. Show Status: \n");
    printf("5. Delete data: \n");
    printf("6. exit\n");
    printf("   Enter your choice: ");
    scanf("%d",&ch);
    return(ch);
}
void Delete()
{
    nob=0;
    noc=0;
    nor=0;
    amount=0;
    count=0;
}
void ShowDetail()
{
    printf("\n Number of Bus:%d",nob);
    printf("\n Number of Cycle:%d",noc);
    printf("\n Number of Riksha:%d",nor);
    printf("\n Total Number of vehicles:%d",count);
    printf("\n Total gain amount:%d\n",amount);
}
void Riksha()
{
    printf("\n Entry Successful\n");
    nor++;
    amount = amount+50;
    count++;
}
void Cycle()
{
    printf("\n Entry Successful\n");
    noc++;
    amount = amount+20;
    count++;
}
void Bus()
{
    printf("\n Entry Successful\n");
    nob++;
    amount = amount+100;
    count++;
}
