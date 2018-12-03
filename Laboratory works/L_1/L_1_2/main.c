//main.c L_1_2
#include <stdio.h>

struct string{
    int basis;
    char str[10];
    int length;
    char final_str[10];
};

enum sys{BIN = 2, OCT = 8, DEC = 10, HEX = 16};

struct string* get_str();
int print_str(struct string*);
int validation(struct string*);
int from_bin(struct string*);
int from_dec(struct string*);
int from_hex(struct string*);
int power(int, int);

int in_dec(struct string* str){
    int sum = 0;
    for(int i = str->length - 1, j = 0; i >= j; i--){
        if(str->str[i] >= 'A' && str->str[i] <= 'F')
            sum += ((int) str->str[i] - 55) * power(str->basis, str->length - (i + 1));
        else if(str->str[i] >= 'a' && str->str[i] <= 'f')
            sum += ((int) str->str[i] - 87) * power(str->basis, str->length - (i + 1));
        else
            sum += ((int) str->str[i] - '0') * power(str->basis, str->length - (i + 1));
    }
    return sum;
}

int main(){
    struct string *s = get_str();
    return print_str(s);
}

struct string* get_str(){
    unsigned int count = 0;
    static struct string s;
    scanf("%d%s", &s.basis, s.str);
    for (int i = 0; s.str[i] != '\0' && i < 6; ++i)
        count++;
    s.length = count;
    return &s;
}

int validation(struct string* s){
    const char msg_err_num[] = {"Number is wrong."};
    const char msg_err_bas[] = {"Base is wrong."};

    switch(s->basis)
	{
    case BIN:
        for(int i = 0; i < s->length; ++i){
            if (s->str[i] < '0' || s->str[i] > '1'){
                printf("%s", msg_err_num);
                return 1;
            }
        }
        return s->basis;
    case DEC:
        for(int i = 0; i < s->length; ++i){
            if(s->str[i] < '0' || s->str[i] > '9'){
                printf("%s", msg_err_num);
                return 1;
            }
        }
        return s->basis;
    case HEX:
        for(int i = 0; i < s->length; ++i){
            if(s->str[i] < '0' || (s->str[i] > '9' && s->str[i] < 'A') || s->str[i] > 'F'){
                if(s->str[i] < '0' || (s->str[i] > '9' && s->str[i] < 'a') || s->str[i] > 'f'){
                    printf("%s", msg_err_num);
                    return 1;
                }
            }
        }
        return s->basis;
    default:
        printf("%s", msg_err_bas);
        return 1;
    }
}

int power(int n, int rate){
    int val = n;
    if (rate != 0){
        for(; rate > 1; rate--)
            n *= val;
        return n;
    }
	else
        return 1;
}

int from_bin(struct string* s){
    int val = in_dec(s);
    int count = 0;
    int rest = 0;

    for(int i = 0; val > 0; ++i, ++count){
        rest = val % OCT;
        val /= OCT;
        for(int j = '0', k = 0; j < ':'; ++j, ++k)
            if(rest == k)
                s->final_str[i] = (char) j;
    }
    return count - 1;
}

int from_dec(struct string* s){
    int val = in_dec(s);
    int count = 0;
    int rest = 0;

    for(int i = 0; val > 0; ++i, ++count){
        rest = val % OCT;
        val /= OCT;
        for(int j = '0', k = 0; j < ':'; ++j, ++k)
            if(rest == k)
                s->final_str[i] = (char) j;
    }
    return count - 1;
}

int from_hex(struct string* s){
    int val = in_dec(s);
    int count = 0;
    int rest = 0;

    for(int i = 0; val > 0; ++i, ++count){
        rest = val % OCT;
        val /= OCT;
        for(int j = '0', k = 0; j < ':'; ++j, ++k)
            if(rest == k)
                s->final_str[i] = (char) j;
    }
    return count - 1;
}

int print_str(struct string* s){
    switch(validation(s)){
    case BIN:
        printf("%d %s\n0", s->basis, s->str);
        for(int i = from_bin(s); i >= 0; --i)
            printf("%c", s->final_str[i]);
        return 0;
    case DEC:
        printf("%d %s\n0", s->basis, s->str);
        for(int i = from_dec(s); i >= 0; --i)
            printf("%c", s->final_str[i]);
        return 0;
    case HEX:
        printf("%d %s\n0", s->basis, s->str);
        for(int i = from_hex(s); i >= 0; --i)
            printf("%c", s->final_str[i]);
        return 0;
    default:
        return 1;
    }
}
