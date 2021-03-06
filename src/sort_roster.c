#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "roster.h"

int numcmp(Student *x, Student *y)
{
    return (x->number < y->number ? -1 : x->number > y->number ? 1 : 0);
}
void sort_roster_by_number(Student roster[])
{
    int length = 100;
    Student tmp_roster[100];
    for (int i = 0; i < 100; i++)
    {
        if (roster[i].name[0] == '\0')
        {
            length = i;
            break;
        }
        tmp_roster[i].number = roster[i].number;
        strncpy(tmp_roster[i].name, roster[i].name, 128);
        strncpy(tmp_roster[i].school, roster[i].school, 128);
    }
    qsort(tmp_roster, length, sizeof(Student), numcmp);
    print_roster_list(tmp_roster);
}

int namecmp(Student *x, Student *y)
{
    return (strcmp(x->name, y->name));
}
void sort_roster_by_name(Student roster[])
{
    int length = 100;
    Student tmp_roster[100];
    for (int i = 0; i < 100; i++)
    {
        if (roster[i].name[0] == '\0')
        {
            length = i;
            break;
        }
        tmp_roster[i].number = roster[i].number;
        strncpy(tmp_roster[i].name, roster[i].name, 128);
        strncpy(tmp_roster[i].school, roster[i].school, 128);
    }
    qsort(tmp_roster, length, sizeof(Student), namecmp);
    print_roster_list(tmp_roster);
}
