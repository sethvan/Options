#ifndef OPERATIONSDV1_H_INCLUDED
#define OPERATIONSDV1_H_INCLUDED

extern char cardNumber[15][12];

int get_option_qty();

char **get_option_names(char **pOptions, int optQty);

int get_factor_qty();

char **get_factor_name(char **pFactors, int facQty);

char **sort_factor(char **pFactors, int facQty);

float *qtfy_factor(char **pFactors, float *pfGrade, int facQty);

float *rate_compat(char **pOptions, char **pFactors, float *pArray, int optQty, int arrayQty);

//void tally_option_sums(float** finalGrade, float** finalGradeSum, float* pArray, float* pfGrade,

#endif // OPERATIONSDV1_H_INCLUDED
