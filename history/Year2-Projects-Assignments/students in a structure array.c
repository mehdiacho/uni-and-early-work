#include <stdio.h>

struct student
{
    char name[100];
    int marks;
};

void record(struct student info[], int x);
void retrieve(struct student info[], int x);
void sortTop3(struct student info[], int x);

int main()
{
    struct student grades[20];
    int n = 5;

    if(n == 0)
    {
    printf("Number of records you want to enter? : ");
    scanf("%d", &n);
    }

    record(grades, n);
    sortTop3(grades, n);
    retrieve(grades, 3);

    return 0;
} 

void record(struct student info[100], int x)
{
    int i;
    for (i = 0; i < x; i++)
    {
        printf("\n\nEnter info for student #%d\n", i + 1);
        
        printf("Enter name : ");
        scanf("%s", info[i].name);

        printf("Enter marks : ");
        scanf("%d", &info[i].marks);
    } 
}

void retrieve(struct student info[100], int x)
{
    int i;
    
    printf("\n\nName\tMarks\n");
    for (i = 0; i < x; i++)
    {
        printf("%s\t%d\n", info[i].name, info[i].marks);
    } 
}

void sortTop3(struct student info[100], int x)
{
    int i, j;
    struct student temp;
    
    for (i = 0; i < x - 1; i++)
    {
        for (j = 0; j < (x - 1-i); j++)
        {
            if (info[j].marks < info[j + 1].marks)
            {
                temp = info[j];
                info[j] = info[j + 1];
                info[j + 1] = temp;
            } 
        }
    }
}
