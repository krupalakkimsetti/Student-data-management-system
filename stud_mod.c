#include"student.h"
void delete_all(SLL **ptr)
{
        printf("----------------------------------\n");
        if(*ptr==0)
        {
                printf("--------Records not found----------\n");
                printf("--------------------------------------\n");
                return;
        }
        SLL *del=*ptr;
        while(del)
        {
                *ptr=del->next;
                free(del);
                del=*ptr;
        }
        printf("All Records Deleted Sucessfully\n");
        printf("---------------------------------------\n");
}
krupa@krupa:~/project$ cat stud_mod.c
#include"student.h"
void stud_mod(SLL *ptr)
{
        if(ptr==0)
        {
                printf("------------------------------------------------\n");
                printf("NO records present\n");
                printf("------------------------------------------------\n");
                return;
        }
        SLL *temp=ptr;
        char op;
        printf("r.Search by roll no\nn.Search by Name\np.Search by Persentage\n");
        printf("Enter yout option: ");
        scanf(" %c",&op);
        switch(op)
        {
                case 'r':int num;
                         printf("Enter num to modify: ");
                         scanf("%d",&num);
                         temp=ptr;
                         while(temp)
                         {
                                 if(temp->rollno==num)
                                 {
                                         printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
                                         printf("Enter Name and Precentage to modify : ");
                                         scanf("%s %f",temp->name,&temp->percentage);
                                 }
                                 temp=temp->next;
                         }
                         printf("---------Modified sucessfully--------\n");
                         break;
                case 'n':char name[20];
                         printf("Enter name to modify: ");
                         scanf("%s",name);
                         temp=ptr;
                         int f=0;
                         while(temp)
                         {
                                 if(strcmp(temp->name,name)==0)
                                 {
                                         f=1;
                                         printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
                                         break;
                                 }
                                 temp=temp->next;
                         }
                         if(f==1)
                         {
                                 printf("-----------------------------------------\n");
                                 printf("Enter Rollno and Precentage to modify : ");
                                 scanf("%d %f",&temp->rollno,&temp->percentage);
                                 printf("---------Modified sucessfully--------\n");
                         }
                         else
                                 printf("----------------------------------------\nNo record found\n---------------------------------------\n");
                         break;

                case 'p':float p;
                         printf("Enter percentage to Modify: ");
                         scanf("%f",&p);
                         temp=ptr;
                         int f1=0;
                         while(temp)
                         {
                                 if(temp->percentage==p)
                                 {
                                         f1=1;
                                         printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
                                         break;
                                 }
                                 temp=temp->next;
                         }
                         if(f1==1)
                         {
                                 printf("---------------------------------\n");
                                 printf("Enter Rollno and Name to mofidy : ");
                                 scanf("%d %s",&temp->rollno,temp->name);
                                 printf("---------Modified sucessfully--------\n");
                         }
                         else
                                 printf("-----------------------------------\nNo record found\n-------------------------------------\n");
                         break;
                default:printf("--------------------------\nInvalid choice\n--------------------------\n");
        }
}