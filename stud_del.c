#include"student.h"
void stud_del(SLL **ptr)
{
        if(*ptr==0)
        {
                printf("------------------------\n");
                printf("No records are present\n");
                printf("------------------------\n");
                return;
        }
        int op;
        printf("------------------------\n");
        printf("1)Delete by rollno 2)Delete by Name\n");
        printf("Enter your choice: ");
        scanf("%d",&op);
        switch(op)
        {
                case 1:int roll;
                       printf("Enter rollno to delete: ");
                       scanf("%d",&roll);
                       SLL *del=*ptr;
                       SLL *prev=del;
                       while(del)
                       {
                               if(del->rollno==roll)
                               {
                                       if(del==*ptr)
                                       {
                                               *ptr=del->next;
                                       }
                                       else if(del->next==0)
                                       {
                                               prev->next=0;
                                       }
                                       else
                                       {
                                               prev->next=del->next;
                                       }
                                       printf("%d %s %f\n",del->rollno,del->name,del->percentage);
                                       free(del);
                                       printf("-----Record sucessfully deleted---------\n");
                                               return;
                               }
                               prev=del;
                               del=del->next;
                       }
                       printf("-------Record not found----------\n");
                       break;
                case 2:char name[20];
                       printf("Enter name to delete: ");
                       scanf("%s",name);
                       SLL *dl=*ptr;
                       SLL *pre=del;
                       while(del)
                       {
                               if(strcmp(dl->name,name)==0)
                               {
                                       if(dl==*ptr)
                                       {
                                               *ptr=dl->next;
                                       }
                                       else if(dl->next==0)
                                       {               pre->next=0;

                                       }
                                       else
                                       {
                                               pre->next=dl->next;
                                       }
                                       printf("%d %s %f\n",dl->rollno,dl->name,dl->percentage);
                                       free(del);
                                       printf("--------Record sucessfully deleted-------------\n");
                                       return;
                               }
                               pre=dl;
                               dl=dl->next;
                       }
                       printf("----------------Record not found-------------------\n");
                        break;
                default:printf("----------------Invalid option-------------------\n");
        }
}