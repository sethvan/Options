#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "seth.h"
#include "OperationsDV1.h"

char cardNumber[15][12] = {"first", "second", "third", "fourth", "fifth", "sixth", "seventh",
                                                          "eighth", "ninth", "tenth", "eleventh", "twelfth", "thirteenth",
                                                          "fourteenth", "fifteenth"};


int get_option_qty()
{
   int optQty;
    do
    {
        printf("How many options are you considering? (maximum 5)\n"
           "Number of options? = ");
        if((scanf("%i",  &optQty)!=1)||(optQty<2||optQty>5))
            {
               printf("\nInvalid entry, please enter an integer between 2 and 5.\n");
               while ( ( getchar( ) ) != '\n' );
            }
    }while(optQty<2||optQty>5);
    getchar();

    return optQty;
}

char ** get_option_names(char** pOptions, int optQty)
{
    printf("\nWe will now enter the names of your options, please keep them short as\n"
                " the output spreadsheet will only display the first 15 characters\n");
    for (int i  = 0 ; i< optQty; ++i)
    {
        if(!(pOptions[i] = malloc(20*sizeof(char)))) {
                printf("Failure to allocate memory!");
                break;}
        printf("\nWhat is your %s option?:\n",  cardNumber[i] );
        myGets(pOptions[i], 50);
    }
    return pOptions;
}

int get_factor_qty()
{
   int facQty = 0;
     do
    {
        printf("\nHow many factors are you using to compare your options? (maximum 15)\n "
                 "Number of factors? =  ");
        if((scanf("%i",  &facQty)!=1)||(facQty<1||facQty>15))
        {
           printf("\nInvalid entry, please enter an integer between 1 and 15.\n");
           while ( ( getchar( ) ) != '\n' );
        }
    }while(facQty<1||facQty>15);
    getchar();

    return facQty;
}

char** get_factor_name(char** pFactors, int facQty)
{
     printf("\nWe will now enter the names of your factors, please keep them short as\n"
                " the output spreadsheet will only display the first 23 characters\n");
    for (int i  = 0 ; i< facQty; ++i)
    {
        if(!(pFactors[i] = malloc(30*sizeof(char)))) {
            printf("Failure to allocate memory!");
            break;}
        printf("\nIn few words what is  the %s factor? \n",  cardNumber[i]);
        myGets(pFactors[i], 70);
    }
    return pFactors;
}

char** sort_factor(char** pFactors, int facQty)
{
    char* temp = NULL;
    int mostImportant = 0;
      for (int i  = 0 ; i< facQty-1; ++i)
        {
            if(i==0)
                printf("\nAmong the factors listed below, which is the most important?\n");
            else
                printf("\nAnd which is the most important of these that remain?\n\n");

           for (int j = 1;  j< facQty-i+1;  ++j)
           {
               printf("%i. %s\n", j,  pFactors[i+j-1] );
           }
               do
               {
                   printf("\nEnter the corresponding number:  ");
                   if((scanf("%i",  &mostImportant)!=1)||(mostImportant<1||mostImportant>facQty-i))
                   {
                       printf("\nInvalid entry, please enter an integer between 1 and %i.\n",   facQty-i);
                       while ( ( getchar( ) ) != '\n' );
                   }
                }while(mostImportant<1||mostImportant>facQty-i);
           getchar();

           mostImportant+=i-1;

            temp = pFactors[mostImportant];
            pFactors[mostImportant] = pFactors[i];
            pFactors[i] = temp;
     }
     return pFactors;
}

float* qtfy_factor(char** pFactors, float* pfGrade, int facQty)
{
     for (int i  = 0 ; i< facQty; ++i)
     {
         do
         {
             printf("From 1-1000 how important is the factor of:\n"
                "\"%s\"?: ", pFactors[i]);
             if((scanf("%f",  &pfGrade[i])!=1)||(pfGrade[i]<1.0f||pfGrade[i]>1000.0f))
               {
                   printf("\nInvalid entry, please enter a number between 1 and 1000.\n");
                   while ( ( getchar( ) ) != '\n' );
               }
         }while(pfGrade[i]<1.0f||pfGrade[i]>1000.0f);
         printf("\n\n");
    }
   getchar();
   return pfGrade;
}

float* rate_compat(char** pOptions, char** pFactors, float* pArray, int optQty, int arrayQty)
{
     for(int i = 0; i<(int)arrayQty; ++i)
      {
          do
          {
              printf("From 0-100 how ideal is option \"%s\"\n"
                 "for factor \"%s\"?:", pOptions [i%(int)optQty], pFactors[i/(int)optQty]);
              if((scanf("%f", &pArray[i])!=1)||(pArray[i]<0||pArray[i]>100))
               {
                   printf("\nInvalid entry, please enter an integer between 0 and 100.\n");
                   while ( ( getchar( ) ) != '\n' );
               }
           }while(pArray[i]<0||pArray[i]>100);
           printf("\n\n");
      }
      return pArray;
}


