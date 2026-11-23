#include"student.h"
void stud_show(SLL *ptr)
{
        printf("---------------------------------------------\n");
        if(ptr==0)
        {
                printf(" \nRecords not found \n");
                printf("---------------------------------------\n");
                return;
        }

        printf("Roll No. Name    Marks\n");
        printf("----------------------------------------------\n");
        while(ptr)
        {
                printf("  %d   %s     %.2f\n",ptr->rollno,ptr->name,ptr->percentage);
                ptr=ptr->next;
        }
        printf("----------------------------------------------\n");
}