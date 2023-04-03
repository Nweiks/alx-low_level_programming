#include "main.h"

/*
*_memset - set value
*@s: pointer
*@b: value of assignment
*@n: end point
*@i: new value
*Return : s
*/

char *_memset(char *s, char b, unsigned int n)
{
char *i = s;
while (n-- > 0)
{
*i++ = (unsigned char) b;

}
return (s);
}
