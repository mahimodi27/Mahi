#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
char str[100], sorted[100];
int i,j;
char temp;

printf("enter a string:");
fgets(str,sizeof(str),stdin);

str[strcspn(str,"\n")]='\0';

strcpy(sorted,str);

for(i=0;strlen(sorted)>i-1;i++)
{for(j=i+1;strlen(str)>j;j++)
{ tolower(sorted[i])> tolower(sorted[j]);
temp= sorted[i];
sorted[i]=sorted[j];
sorted[j]=temp;
}}
 FILE *fp;
fp= fopen("25BCP287.txt", "w");

fclose(fp);

printf("\n File has been created successfully\n");
printf("original file:%s",str);
printf("sorted file:%s",sorted);

return 0;
}

