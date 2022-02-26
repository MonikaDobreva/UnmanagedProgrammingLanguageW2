#include <stdio.h>
int strCmp(char first[], char second[]);


int main() {
    printf("start\n");

	char* first = "same";
	char* second = "same";
	char* third = "abc";

	printf("%d\n", strCmp(first, third));
    printf("%d\n", strCmp(first, second));

    return 0;
}

int strCmp(char first[], char second[] )
{
    int i = 0;
    int flag = 0;    

    while (flag == 0)
    {
        if (first[i] > second[i])
        {
            flag = 1;
        }
        else if (first[i] < second[i])
        {
            flag = -1;
        }

        if (first[i] == '\0')
        {
            break;
        }

        i++;
    }

    return flag;
}