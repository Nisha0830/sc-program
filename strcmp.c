#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    char r[10];
    scanf("%s",s);
    scanf("%s",r);
    if(strlen(s)<strlen(r))
{
    printf("%s",r);
}
else
{
    printf("%s",s);
}
 return 0;   
}
