#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Choose a number\n");
    scanf("%d", &num );
    if (num < 42)
    {

        printf("the number you chose is below 42\n");

    }
    else if (num > 42)
    {

        printf("the number you chose is above 42\n");

    }
    else if (num = 42)
    printf("the number is 42\n");
    exit(0);
}