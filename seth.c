#include <string.h>
#include <stdio.h>
#include "seth.h"

char *myGets(char *st, int n)
{
    char *ret_val;
    if((ret_val=fgets(st, n, stdin))!= NULL)
        {st[strcspn(st, "\n")] = 0;}

        return ret_val;

}

char *s_gets(char *st, int n)
{
char *ret_val;
char * find;

ret_val = fgets(st,n,stdin);

if(ret_val)
{
    find = strchr(st,'\n');
    if(find)
    {
        *find = '\0';
    }
    else
    {
        while(getchar() != '\n')
        continue;
    }
}
return ret_val;}
