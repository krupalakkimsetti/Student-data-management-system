#include"student.h"
void sort(SLL *ptr)
{       printf("--------------------------------------------------------\n");
        if(ptr==0)
        {
                printf("NO records are present\n");
                printf("--------------------------------------------------------\n");
                return;
        }
        char op;
        printf("n.sort with Name \np.sort with Precentage\nEnter your choice: ");
        scanf(" %c",&op);
        switch(op)
        {
                case 'n':int i,j,c=0;
                         SLL *p1=ptr,*p2,t;
                         c=count(ptr);
                         for(i=0;i<c-1;i++)
                         {
                                 p2=p1->next;
                                 for(j=0;j<c-1-i;j++)
                                 {
                                         if(strcmp(p1->name,p2->name)>0)
                                         {
                                                 t.rollno=p1->rollno;
                                                 strcpy(t.name,p1->name);
                                                 t.percentage=p1->percentage;

                                                 p1->rollno=p2->rollno;
                                                 strcpy(p1->name,p2->name);
                                                 p1->percentage=p2->percentage;

                                                 p2->rollno=t.rollno;
                                                 strcpy(p2->name,t.name);
                                                 p2->percentage=t.percentage;
                                         }
                                         p2=p2->next;
                                 }
                                 p1=p1->next;
                         }
                         printf("-------------------------------------------------\n");
                         printf("records sorted according to name sucessfully\n");
                         printf("-------------------------------------------------\n");
                         break;
                case 'p':int k,l,cn=0;
                         SLL *p3=ptr,*p4,T;
                         cn=count(ptr);
                         for(k=0;k<cn-1;k++)
                         {
                                 p4=p3->next;
                                 for(l=0;l<cn-1-k;l++)
                                 {
                                         if((p3->percentage)<(p4->percentage))
                                         {
                                                 T.rollno=p3->rollno;
                                                 strcpy(T.name,p3->name);
                                                 T.percentage=p3->percentage;

                                                 p3->rollno=p4->rollno;
                                                 strcpy(p3->name,p4->name);
                                                 p3->percentage=p4->percentage;

                                                 p4->rollno=T.rollno;
                                                 strcpy(p4->name,T.name);
                                                 p4->percentage=T.percentage;
                                         }
                                         p4=p4->next;
                                 }
                                 p3=p3->next;
                         }
                         printf("----------------------------------------------------\n");
                         printf("records sorted according to percentage sucessfully\n");
                         printf("----------------------------------------------------\n");
                         break;
                default:printf("-----------------Invalid option------------\n");

        }
}