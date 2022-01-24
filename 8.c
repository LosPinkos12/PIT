#include <stdio.h>
// Q: co je vystupom nasledujuceho kodu
// A: Sucet cisel je 47
int main(int argc, char *argv[])
{
    int num[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 1, 1};
    int numSize = sizeof(num) / sizeof(int);

    int x = 0;
    for(int i=0; i < numSize; i++)
    {
        x+=num[i];
    }

    printf("Sucet cisel je: %d\n", x);
}

