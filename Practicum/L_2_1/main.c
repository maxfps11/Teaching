#include <stdio.h>
#include <stdlib.h>

unsigned char validation(unsigned char);
unsigned char* create_array(int);

int main()
{
    unsigned char* pInt = calloc(1, sizeof(unsigned char));

    scanf("%hhu", &pInt[0]);

    for(int i = 0, j = validation(pInt[0]); i < j / 2; ++i)
    {
        if(!i)
        {
            free(pInt);
            pInt = create_array(j);
        }
        printf("%5d", pInt[i]);
    }

    free(pInt);
    return 0;
}

unsigned char* create_array(int val)
{
    unsigned char* pInt = calloc((size_t) val, sizeof(char));
    unsigned char* pInt1 = calloc((size_t) (val / 2), sizeof(char));

    printf("%d\n", val);


    for(int i = 0; i <= val; ++i)
    {
            pInt[i] = (unsigned char) (i + 1);
    }

    for(int i = 0; i < val / 2; ++i)
    {
        pInt1[i] += pInt[i];
        pInt1[i] += pInt[(val - 1) - i];
    }

    free(pInt);
    return pInt1;
}

unsigned char validation(unsigned char val)
{
    if(val < 2 || val > 150)
    {
        printf("%d\nNumber is wrong.", val);
        exit(1);
    }
    else if(val % 2)
    {
        printf("%d\nNumber is uneven.", val);
        exit(1);
    }
    else
        return val;
}