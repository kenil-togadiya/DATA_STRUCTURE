#include<stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    char branch[50];
    int batch_no;
};

int main()
{
    struct Student s1;

    struct Student *ptr;

    ptr = &s1;

    printf("Enter roll number : ");
    scanf("%d",&ptr->roll_no);

    printf("Enter the name : ");
    scanf("%s", ptr->name);

    printf("Enter the branch : ");
    scanf("%s",ptr->branch);

    printf("Enter the batch number : ");
    scanf("%d",&ptr->batch_no);


    printf("\n--------STUDENT DETAILS--------\n");
    printf("Roll No    : %d\n", ptr->roll_no);
    printf("Name       : %s\n", ptr->name);
    printf("Branch     : %s\n", ptr->branch);
    printf("Batch No   : %d\n", ptr->batch_no);  
       
       return 0;
    
}