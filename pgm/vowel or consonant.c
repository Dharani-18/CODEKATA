#include<stdio.h>
int main()
{
char a;
scanf("%c",&a);
if((a>=97)&&(a<=122))
{
if(a=="a"||a=="e"||a=="i"||a=="o"||a=="u")
printf("Vowel");
else
printf("Consonant");
}
else
printf("invalid");
return 0;
}
