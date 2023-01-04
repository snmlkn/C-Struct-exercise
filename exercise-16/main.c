#include <stdlib.h>
#include <string.h>
#include <stdio.h>
// BIR MEYVE LISTESINI ALFABETIK SIRALAMA
void sort_words(char *words[], int count)
{
    char *x;

    for (int i = 0; i<count; i++)
    {
        for (int j = i + 1; j<count; j++)
        {
            if (strcmp(words[i], words[j]) > 0)
            {
                x = words[j];
                words[j] = words[i];
                words[i] = x;
            }
        }

    }
}


int main()
{
    char *words[] = { "cherry", "orange", "apple", "oyester"};

    sort_words(words, 4);

    for (int i = 0; i < 4; i++)
    {
        printf("%s ", words[i]);
    }
    printf ("\n");
}

