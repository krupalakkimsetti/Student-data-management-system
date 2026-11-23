#include "student.h"

void stud_add(SLL **ptr)
{
        SLL *new, *p;

        new=malloc(sizeof(SLL));
        printf("------------------------------------\n");
        if(new==NULL)
        {
                printf("Memory allocation failed\n");
                printf("------------------------------------\n");
                return;
        }

        int roll,found;

        for(roll=1;;roll++)
        {
                found=0;
                p=*ptr;

                while(p!=NULL)
                {
                        if(p->rollno==roll)
                        {
                                found=1;
                                break;
                        }
                        p=p->next;
                }

                if(!found)
                        break;
        }
        new->rollno=roll;

        printf("Enter student name: \n");
        if(scanf(" %49[^\n]", new->name)!=1)
        {
                printf("Name cannot be empty!\n");
                printf("---------------------------------------\n");
                free(new);
                return;
        }
        printf("Enter the presentage:");
        if(scanf("%f",&new->percentage)!=1)
        {
                printf("Invalid percentage\n");
                printf("------------------------------------------\n");
                free(new);
                return;
        }
        if(new->percentage <0 || new->percentage > 100)
        {
                printf("Presentage must be between 0 and 100\n");
                printf("-----------------------------------------\n");
                free(new);
                        return;
        }
        new->next=NULL;
        if(*ptr==NULL)
        {
                *ptr=new;
        }
        else
        {
                p=*ptr;
                while(p->next!=NULL)
                {
                        p=p->next;
                }
                p->next=new;
        }
        printf("------------------------------------------------\n");
        printf("\nAssigned Roll Number: %d \n",new->rollno);
        printf("------------------------------------------------\n");
}