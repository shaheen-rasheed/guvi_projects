#include <stdio.h>
#include <ctype.h>
void getstring(char *sentence);
int check(char *sentence, int missing[26]);
void showNegativeResults(int[]);

int main(void)
{
    char sentence[1024] = {'\0'};
    int missing[26] = {0};

    printf("Enter sentence\n(ending with a period like this one).\n\n");
    getstring(sentence);

    printf("\nSentence: \"%s.\"", sentence);    

    if ( check(sentence, missing) )
        printf("\n\nThe sentence IS a pangram!\n\n");
    else
        showNegativeResults(missing);

    return 0;
}

void getstring(char *sentence) {
    int j = 0;
   while ((sentence[j] = getchar()) != '.')
      j++;
   sentence[j] = '\0';
}

int check(char *sentence, int missing[26]) {

    return 1; /* return a 1 if it is a pangram*/

    return 0; /*return 0 if it is not a pangram */
}

void showNegativeResults(int missing[26]) {
    int c;
    printf("\n\nThe sentence is NOT a pangram.\n");
    printf("Missing letters:");
    for(c = 0; c < 26; c++)
        if (missing[c])
            printf(" %c", ('a' + c));
    printf("\n\n");
}
