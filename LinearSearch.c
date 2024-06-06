// 1(b) Write a C program to create a student details.
//Enter details of the Student_Reg , Student_name, Student marks of five subjects.
//Search the particular student details based on regno in the given list of students using Linear searching technique.


#include<stdio.h>
#include<string.h>
int linear_search(char reg[5][50], char names[5][50], int marks[3][3], char search[], int n)
{
    for(int i=0;i<3;i++)
    {
        if(strcmp(reg[i],search)==0)
        {
            printf("Student found :\n ");
            printf("Register Number : %s",reg[i]);
            printf("Name : %s",names[i]);
            printf("Marks : \n");
            for(int j=0;j<3;j++)
            {
                printf("%d %d %d", marks[i][j]);
            }
            printf("\n");
            return 1;
        }
    }
    printf("Student not found\n");
    return 0;
}

int main()
{
    char reg[5][50] = {"1","2","3"};
    char names[5][50] = {"Mohan","Bharath","Mathew"};
    int marks[3][3]={{89,89,86},{90,94,95},{99,98,97}};
    char search[]="2";
    linear_search(reg, names, marks, search,3);
    return 0;
}
