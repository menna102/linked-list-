#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<time.h>

//written by:
// Nada Othman
// Menna Abdelkader
// Enjy

struct Student
{
    int id, score, day , month , year;
    char name[50];
    struct Student *next;

};
void insert_begin()
{
    char name[50];
    int id, score, day , month , year;
    struct Student * student = (struct Student *) malloc(sizeof(struct Student));
                printf("\nEnter student ID: ");
                scanf("%d", &id);
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter score: ");
                scanf("%d", &score);
                printf("Enter date of birth in the following order: day month year: ");
                scanf("%d", &day);
                scanf("%d", &month);
                scanf("%d", &year);
    student->id = id;
    strcpy(student->name, name);
    student->score = score;
    student->day = day;
    student->month = month;
    student->year = year;
    student->next = NULL;

    if(head==NULL){
        // linked list is empty
        head = student;
        tail = student;
    }
    else{
        // linked list is not empty
        student->next = head;
        head = student;
    }

}
void insert_end ()
{
    char name[50];
    int id, score, day , month , year;
    struct Student * student = (struct Student *) malloc(sizeof(struct Student));
                printf("\nEnter student ID: ");
                scanf("%d", &id);
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter score: ");
                scanf("%d", &score);
                printf("Enter date of birth in the following order: day month year: ");
                scanf("%d", &day);
                scanf("%d", &month);
                scanf("%d", &year);
    student->id = id;
    strcpy(student->name, name);
    student->score = score;
    student->day = day;
    student->month = month;
    student->year = year;
    student->next = NULL;

    if(head==NULL){
        // linked list is empty
        head = student;
        tail = student;
    }
    else{
        // linked list is not empty
       tail->next = student;
       tail = student;
    }

}
void insert_middle ()
{
    char name[50];
    int id, score, day , month , year, length = 0, middle;
    struct Student * student = (struct Student *) malloc(sizeof(struct Student));
                printf("\nEnter student ID: ");
                scanf("%d", &id);
                printf("Enter name: ");
                scanf("%s", name);
                printf("Enter score: ");
                scanf("%d", &score);
                printf("Enter date of birth in the following order: day month year: ");
                scanf("%d", &day);
                scanf("%d", &month);
                scanf("%d", &year);
    student->id = id;
    strcpy(student->name, name);
    student->score = score;
    student->day = day;
    student->month = month;
    student->year = year;
    student->next = NULL;

    if(head==NULL){
       // linked list is empty
        head = student;
        tail = student;
    }
    else
    {
        // linked list is not empty
        struct Student *temp = head;
        struct Student *prev = head;
        // find the length of linked list
        while(temp!=NULL){
        temp = temp->next;
        length ++;
        }
        // determine the middle node
        if (length%2==0)
            middle = length/2;
        else
            middle = (length+1)/2;
        // insert the new node
        for(int i=1; i<middle; i++)
        prev = prev->next;
        student->next = prev->next;
        prev->next = student;
        }
}
void display()
{
    struct Student * temp = head;
    while(temp!=NULL)
        {
        printf("\nStudent ID: %d\n", temp->id);
        printf("Name: %s\n", temp->name);
        printf("Score: %d\n", temp->score);
        printf("Date of birth:");
        printf(" %d", temp->day);
        printf(" / %d", temp->month);
        printf(" / %d\n", temp->year);
        temp = temp->next;
        }
}
int main()
{
    printf("On behalf of all of us, welcome on board\n");
    head = NULL;
    tail = NULL;
    int number,choice;
    printf("Enter the number of students: ");
    scanf("%d", &number);

    for (int i=0; i<number; i++)
    {   printf("\nEnter where would you like to insert the student:");
        printf("\n1- in the beginning \n2- at the end \n3- in the middle \n");

        scanf("%d", &choice);
        switch (choice)
        {
            case 1:

                insert_begin();
                break;

            case 2:

                insert_end();
                break;

            case 3:

                insert_middle();
                break;
        }
    printf("\n\n----------------------------------------------------------\n");
    }
     printf("\nThe List of students: ");
     display();
    return 0;
}
