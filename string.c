#include<stdio.h>
#include<string.h>
void main()
{
char str1[20],str2[20],str3[20];
int res;
printf("enter the string 1:\n");
scanf("%s",str1);
printf("enter the string 2:\n");
scanf("%s",str2);
printf("concatenation string is :%s",strcat(str1,str2));
res=strcmp(str1,str2);
printf("compare string result is:%d",res);
strcpy(str3,str1);
printf("first string is :%s\n",str1);
printf("third string is :%s\n",str3);
printf("n third strong lower case :%s",strlen(str3));
}