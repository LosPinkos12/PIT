#include <stdio.h>
// Q: co je vystupom nasledujuceho kodu
// A: Sucet cisel je 489
int main(int argc, char *argv[])
{
    int num[] = {420,69};
    int numSize = sizeof(num) / sizeof(int);

    int x = 0;
    for(int i=0; i < numSize; i++)
    {
        x+=num[i];
    }

    printf("Sucet cisel je: %d\n", x);
}

