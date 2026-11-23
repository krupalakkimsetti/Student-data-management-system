#include"student.h"

void stud_save(SLL *ptr)
{
printf("-------------------------------\n");
if(ptr==0)
{
printf("No records are present\n");
printf("-------------------------------\n");
return;
}
FILE *fp=fopen("student.dat","w");
while(ptr)
{
fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
ptr=ptr->next;
}
printf("Data saved to file sucessfully\n");
printf("--------------------------------\n");
fclose(fp);
}