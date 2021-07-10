#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int id, score, day , month , year;
    char name[50];
    struct Student *next;

};

int main()
{
    printf("On behalf of all of us, welcome on board\n");
    return 0;
}

