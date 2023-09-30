#include "main.h"

unsigned int binary_to_uint(const char *b)
{
int n;
unsigned int m;

n = 0;
if(!b)
return (0);
for (i=0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}
for (i=0; b[i] != '\0'; i++)
{
m << 1;
if (b[i] == '1')
m += 1;
}
return (m);
