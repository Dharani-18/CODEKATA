#include<stdio.h>
int main()
{
char a;
scanf("%c",&a);
if((a>=97)&&(a<=122))
{
if((a==97)||(a==101)||(a==105)||(a==111)||(a==117))
{
printf("Vowel");
}
else
printf("Consonant");
}
else
printf("invalid");
return 0;
}
