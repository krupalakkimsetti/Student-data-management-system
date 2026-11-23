#include"student.h"

int main()
{

        struct student *head=0;
        char op;
        while(1)
        {
                printf("*******STUDENT RECORD MENU********\n");
                printf("A : add new record\nD : Delete a record\nS : Show the list\nM : Modify a record\nV : Save records\nE : Exit\nT : Sort the list\nL : Delete all  the records\nR : Reverse the list\n");
                printf("Enter your choice: ");
                scanf(" %c",&op);
                switch(op)
                {
                        case 'A': stud_add(&head);      break;
                        case 'D': stud_del(&head);      break;
                        case 'S': stud_show(head);      break;
                        case 'M': stud_mod(head);       break;
                        case 'V': stud_save(head);      break;
                        case 'E': char ch;
                                  printf("s)Save and exit  e)Exit without saving\n");
                                  printf("Enter your choice: ");
                                  scanf(" %c",&ch);
                                  switch(ch)
                                  {
                                          case 's':stud_save(head);
                                                   exit(0);
                                                   break;
                                          case 'e':exit(0);
                                                   break;
                                          default:printf("Invalid option\n");

                                  }
                                  break;
                        case 'T':sort(head);    break;
                        case 'L':delete_all(&head);     break;
                        case 'R':reverse_link(&head);   break;
                        default:printf("Invalid option\n");
                }
        }
}