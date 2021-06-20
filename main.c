#include <stdio.h>
#include <stdlib.h>
#include "seth.h"
#include "OperationsDV1.h"

Type options = {"option", 2, 5, 15};
Type factors = {"factor", 1, 15, 23};

int main()
{
    StringArray optionsArray = get_string_array(options);
    printf("OptionsArray.size = %i\n", optionsArray.size);
    StringArray factorsArray = get_string_array(factors);

    factorsArray = sort_factor(factorsArray);

    float *pfGrade = qtfy_factor(factorsArray);

    float *compatability = rate_compat(optionsArray, factorsArray);

    float *finalGradeSum = tally_sums(optionsArray, factorsArray, compatability, pfGrade);

    display_output_spreadsheet(optionsArray, factorsArray, compatability, pfGrade);

    display_option_totals(optionsArray, finalGradeSum);

    free(optionsArray.array);
    optionsArray.array = NULL;
    free(factorsArray.array);
    factorsArray.array = NULL;
    free(pfGrade);
    pfGrade = NULL;
    free(compatability);
    compatability = NULL;
    free(finalGradeSum);
    finalGradeSum = NULL;

    return 0;
}
