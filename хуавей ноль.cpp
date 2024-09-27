#include <stdio.h>
#include <string.h>

void sort(char* onegin[], int  number);


int main()
{
    char* onegin[] = {
        "bebra",
        "hello",
        "kek",
        "lol",
        "gyat",
        "sigma",
        "pipow"
    };

    int number = sizeof(onegin) / sizeof(onegin[0]);

    sort(onegin, number);

    for (int i = 0; i < number; i++)
    {
        printf("%s\n",onegin[i]);
    }
    return 0;
}

void sort(char* onegin[], int number)
{
    for (int j = 0; j < number; j++) {
        for (int i = 0; i < number - 1; i++)
        {
            if (strlen(onegin[i]) > strlen(onegin[i + 1]))
            {
                char* tmp = onegin[i];
                            onegin[i]= onegin[i+1];
                                       onegin[i+1]= tmp;
            }
        }
    }
}
