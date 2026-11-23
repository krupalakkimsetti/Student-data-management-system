#include"student.h"
int count(SLL *ptr)
{
        int c=0;
        while(ptr)
        {
                c++;
                ptr=ptr->next;
        }
        return c;
}
void reverse_link(SLL **ptr)
{
        printf("-----------------------------------------------------\n");
        if(*ptr==0)
        {
                printf("NO records are present\n");
                printf("---------------------------------------------------------\n");
                return;
        }
        int i,c=count(*ptr);
        if(c>1)
        {
                SLL *t=*ptr;
                SLL **a=malloc(sizeof(SLL *)*c);
                for(i=0;i<c;i++)
                {
                        a[i]=t;
                        t=t->next;
                }
                for(i=c-1;i>0;i--)
                {
                        a[i]->next=a[i-1];
                }
                a[0]->next=0;
                *ptr=a[c-1];
                printf("Reverse sucessfully\n");
        }
        printf("---------------------------------------------------------\n");

}