#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
struct dat
{
    int d,m;
};
int clscanf();
struct student
{
    struct dat dt;
    float f,fine,tot,adv,due;
    char n[50];
    int r,c;
} stud,s;
struct teacher
{
    struct dat dt;
    char n[50];
    float sal,adv,tot;
    int id,no;
} tech,t;
int chkdat(int,int);
void addrec(int);
void modrec(int);
void searchrec(int);
void delrec(int);
void salary(int);
FILE *fs,*ft;
int mm,dd;
void ext();
int main()
{
    start();
}
void start()
{
    int i,j;
    system("cls");
    printf("\n\t\tPLEASE ENTER ACCOUNT TYPE");
    printf("\n\t\t1:: Student");
    printf("\n\t\t3:: Exit");
    printf("\n\t\tAccount type choice  ");
    fflush(stdin);
    scanf("%d",&j);
    switch (j)
    {
    case 3:
        exit(0);
    case 1:
    {
        system("cls");
        printf("\n\t\tPLEASE ENTER THE CHOICE");
        printf("\n\t\t1:: Add record");
        printf("\n\t\t2:: Search record");
        printf("\n\t\t3:: Modify record");
        printf("\n\t\t4:: Delete record");
        printf("\n\t\t6:: Exit");
        printf("\n\n Enter choice  ");
        fflush(stdin);
        scanf("%d",&i);
        switch (i)
        {
        case 1:
            addrec(j);
        case 2:
            searchrec(j);
        case 3:
            modrec(j);
        case 4:
            delrec(j);
        case 6:
            ext();
        }
    }
}
}
void addrec(int j)
{
    int dif,cdat,ddat,month=0;
    float ff;
    char c='y';
    system("cls");
    printf("\n\tADD RECORD");
    if (j==1)
    {
        while(c=='y'||c=='Y')
        {
            int a=1;
            printf("\n\nEnter the Name: ");
            fflush(stdin);
            scanf("%[^\n]",stud.n);
            printf("\nEnter the Roll No.:");
            fflush(stdin);
            scanf("%2d",&stud.r);
            fs=fopen("student","ab+");
            fwrite(&stud,sizeof(stud),1,fs);
            fclose(fs);
            printf("RECORDS SUCCESSFULLY SAVED\n");
            system("pause");
            start();
        }
    }
}

void searchrec(int j)
{
    char name[50],namet[50];
    int a=1,choice;
    char c='y';
    if (j==1)
    {
        while(c=='y'||c=='Y')
        {
            int a=1;
            system("cls");
                a=1;
                printf("\n\nEnter Name to Search: ");
                fflush(stdin);
                scanf("%[^\n]",name);
                fs=fopen("student","rb");
                while(fread(&stud,sizeof(stud),1,fs)==1)
                {
                    if (strcmpi(name,stud.n)==0)
                    {
                        a=0;
                        printf("\nname = %s",stud.n);
                        printf("\nroll no = %d",stud.r);
                    }
                }
                if (a==1)
                    printf("\n\nRECORD NOT FOUND");
                printf("\n\n");
                system("pause");
                fflush(stdin);
                fclose(fs);
                start();
            }
        }
    }
void modrec(int j)
{

    char name[50];
    int a=1,choice,cl,rolno;
    char c='y';
    if (j==1)
    {
        while(c=='y'||c=='Y')
        {
            system("cls");
            printf("\n\t*********************   MODIFY RECORD     *******************");
                int a=0;
                printf("\n\nEnter Name to Modify: ");
                fflush(stdin);
                scanf("%[^\n]",name);
                fs=fopen("student","rb+");
                while(fread(&stud,sizeof(stud),1,fs)==1)
                {
                    a=1;
                    if (strcmpi(name,stud.n)==0)
                    {
                        a=0;
                        printf("\nEnter new Name: ");
                        fflush(stdin);
                        scanf("%[^\n]",stud.n);
                        printf("\nEnter new Roll No.: ");
                        fflush(stdin);
                        scanf("%d",&stud.r);
                        fseek(fs,-sizeof(stud),SEEK_CUR);
                        fwrite(&stud,sizeof(stud),1,fs);
                        fclose(fs);
                    }
                }
                if (a==1)
                    printf("\n\nRECORDS NOT FOUND");
                else
                    printf("\n\nRECORDS SUCCESSFULLY  MODIFIED");
                printf("\n\n");
                system("pause");
                start();
            }
        }
}
void delrec(int j)
{
    system("cls");
    printf("\n\tDELETE RECORD");
    FILE *temp,*t1;
    int a=1;
    char name[50],c='y';
    if (j==1)
    {
        while(c=='y'||c=='Y')
        {
            int a=1;
            printf("\n\nEnter Name to Delete: ");
            fflush(stdin);
            scanf("%[^\n]",name);
            fs=fopen("student","rb");
            temp=fopen("tempfile","wb");//opening of temporary file for deleting process
            while (fread(&stud,sizeof(stud),1,fs)==1)
            {
                if (strcmp(stud.n,name)==0)
                {
                    a=0;
                    continue;
                }
                else
                {
                    fwrite(&stud,sizeof(stud),1,temp);
                }
            }

            if (a==1)
                printf("\n\nRECORD NOT FOUND");
            else
                printf("\n\nRECORD SUCCESSFULLY  DELETED");
            printf("\n\n");
            system("pause");
            fflush(stdin);

            fclose(fs);
            fclose(temp);
            system("del student");
            system("ren tempfile, student");
            start();
        }
    }
}
void salary(int mm)
{
    system("cls");
}

void fee(int mm)
{
    system("cls");
}
void ext()
{
    
}
chkdat(int mnt,int dnt)
{
    
}
clscanf()
{
    
}