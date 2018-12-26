#include <string.h>
#include <stdio.h>

struct student{
    char first_name[10];
    char last_name[10];
    char group_number[10];
};

int print_list(struct student*, const char*);

int main()
{
    struct student stud[100];
    char group_number[10];

    for(int i = 0; i < 100; ++i)
    {
        for(int j = 0; j < 10; ++j)
        {
            stud[i].first_name[j] = 0;
            stud[i].last_name[j] = 0;
            stud[i].group_number[j] = 0;
        }
    }


    for(int i = 0; i < 100; ++i)
    {
        scanf("%s%s%s", stud[i].last_name, stud[i].first_name, stud[i].group_number);

        if(!strcmp(stud[i].last_name, "X") && !strcmp(stud[i].first_name, "X") && !strcmp(stud[i].group_number, "X"))
        {
            break;
        }
    }

    scanf("%s", group_number);
    return print_list(stud, group_number);
}

int print_list(struct student* stud, const char* group_number)
{
    for(int i = 0; i < 100; ++i)
    {
        if(!strcmp(stud[i].last_name, "X") && !strcmp(stud[i].first_name, "X") && !strcmp(stud[i].group_number, "X"))
            return 0;
        else if(!strcmp(group_number, stud[i].group_number))
        {
            if(i)
                printf("\n");
            printf("%s %s", stud[i].first_name, stud[i].last_name);
        }
    }
    return 0;
}
