#include <stdio.h>
// Q: co je vystupom nasledujuceho kodu
// A: Sucet cisel je 105
int main(int argc, char *argv[])
{
    int num[] = {1, 4, 6, 3, 7, 8, 5, 2, 9, 22, 38 };
    int numSize = sizeof(num) / sizeof(int);

    int x = 0;
    for(int i=0; i < numSize; i++)
    {
        x+=num[i];
    }

    printf("Sucet cisel je: %d\n", x);
}

