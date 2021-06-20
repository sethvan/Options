#ifndef OPERATIONSDV1_H_INCLUDED
#define OPERATIONSDV1_H_INCLUDED

typedef struct
{
    char name[10];
    int min;
    int max;
    int dislength;
} Type;

typedef struct
{
    char **array;
    int size;
} StringArray;

int get_int_value(Type type);

char *myGets(char *st, int n);
 
StringArray get_string_array(Type type);

StringArray sort_factor(StringArray factorArray);

float *qtfy_factor(StringArray factorArray);

float *rate_compat(StringArray optionArray, StringArray factorArray);

float *tally_sums(StringArray optionArray, StringArray factorArray, float *compatability, float *pfGrade);

void display_output_spreadsheet(StringArray optionsArray, StringArray factorsArray, float *compatability, float *pfGrade);

void display_option_totals(StringArray optionsArray, float *finalGradeSum);

#endif // OPERATIONSDV1_H_INCLUDED
