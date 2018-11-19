#include <stdio.h>
#include <string.h>

#define max_chars 10
#define max 100

struct student{
    char first_name[max_chars];
    char last_name[max_chars];
    char group_number[max_chars];
};

int print_list(struct student*, char*);

int main(){
    struct student stud[max];
    char group_number[max_chars];
    
    for(int i = 0; i < max; ++i){
        for(int j = 0; j < max_ch){
            stud[i].first_name[j] = 0;
            stud[i].last_name[j] = 0;
            stud[i].group_number[j] = 0;
        }
    }
    
    for(int i = 0; i < max; ++i){
        scanf("%s%s%s", stud[i].last_name, stud[i].first_name, stud[i].group_number);
        if(!strcmp(stud[i].last_name, "X") && !strcmp(stud[i].first_name, "X") && !strcmp(stud[i].group_number, "X")){
            break;
        }
    }

    scanf("%s", group_number);
    return print_list(stud, group_number);
}

int print_list(struct student* stud, char* group_number){
    for(int i = 0; i < max; ++i){
        if(!strcmp(stud[i].last_name, "X") && !strcmp(stud[i].first_name, "X") && !strcmp(stud[i].group_number, "X"))
            return 0;
        else if(strstr(group_number, stud[i].group_number))
            printf("%s %s\n", stud[i].last_name, stud[i].first_name);
    }
    return 0;
}
