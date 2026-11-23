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