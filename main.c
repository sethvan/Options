#include <stdio.h>
#include <stdlib.h>
#include "seth.h"
#include "OperationsDV1.h"

#define LINE_LENGTH 119

int main()
{
    int line = 0;
    int numOfoptions = 0;
    int numOffactors = 0;
    char **pOptions = NULL;
    char **pFactors = NULL;
    float *pfGrade = NULL;
    float *pArray = NULL;
    size_t arrayQty = 0;
    float *finalGrade = NULL;
    float *finalGradeSum = NULL;

    numOfoptions = get_option_qty();

    if (!(pOptions = malloc(numOfoptions * sizeof(char *))))
        return -1;
    pOptions = get_option_names(pOptions, numOfoptions);

    numOffactors = get_factor_qty();
    if (!(pFactors = malloc(numOffactors * sizeof(char *))))
        return -1;
    pFactors = get_factor_name(pFactors, numOffactors);

    pFactors = sort_factor(pFactors, numOffactors);

    if (!(pfGrade = malloc(numOffactors * sizeof(float))))
        return -1;
    pfGrade = qtfy_factor(pFactors, pfGrade, numOffactors);

    arrayQty = (size_t)numOffactors * numOfoptions;
    if (!(pArray = malloc(arrayQty * sizeof(float))))
        return -1;
    pArray = rate_compat(pOptions, pFactors, pArray, numOfoptions, arrayQty);

    if (!(finalGrade = malloc(arrayQty * sizeof(float))))
        return -1;
    if (!(finalGradeSum = (float *)calloc(numOfoptions, sizeof(float))))
        return -1;

    //Tally sum of points for each option
    for (int i = 0; i < (int)arrayQty; ++i)
    {
        finalGrade[i] = pArray[i] * pfGrade[i / (int)numOffactors];
        finalGradeSum[i % (int)numOfoptions] += finalGrade[i];
    }

    //Display output spreadsheet
    printf("\n\n\n%38s%-80s\n", " ", "          Compatabilities of the options with each corresponding factor");
    printf("%38s", "Factor     ");
    for (line = 0; line < 81; line++)
        putchar('-');
    printf("\n%-26s%s", "Priority of factors", "|Importance |");
    for (int i = 0; i < numOfoptions; ++i)
    {
        printf("%-15.15s"
               "|",
               pOptions[i]);
    }

    if (numOfoptions < 5)
    {
        for (line = 0; line < 79 - (numOfoptions * 16); line++)
            putchar(' ');
        putchar('|');
    }
    printf("\n");

    for (line = 0; line < LINE_LENGTH; line++)
        putchar('-');
    for (int i = 0; i < numOffactors; ++i)
    {
        printf("\n%2i.%-22.22s |   %4.0lf    |", i + 1, pFactors[i], pfGrade[i]);
        for (int j = i * numOfoptions; j < (i + 1) * numOfoptions; ++j)
            printf("      %3.0lf      |", pArray[j]);
    }
    printf("\n\n");

    //Display total scores for each option
    printf("\nScore totals in favor of each option:\n\n");
    for (int i = 0; i < numOfoptions; ++i)
    {
        printf("%-20s=  %.0f\n", pOptions[i], finalGradeSum[i]);
    }

    printf(("\n\n\n\n"));

    free(pOptions);
    pOptions = NULL;
    free(pFactors);
    pFactors = NULL;
    free(pfGrade);
    pfGrade = NULL;
    free(pArray);
    pArray = NULL;
    free(finalGrade);
    finalGrade = NULL;
    free(finalGradeSum);
    finalGradeSum = NULL;

    return 0;
}
