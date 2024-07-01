#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // For isspace() function

#define MAX_FILE_NAME 100
#define MAX_WORD_LEN 50

int main() {
    FILE *fp;
    char filename[MAX_FILE_NAME];
    char word[MAX_WORD_LEN];
    int count = 0;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(fp, "%s", word) != EOF) {
        count++;
    }

    fclose(fp);

    printf("Number of words in file: %d\n", count);

    return 0;
}
