#include<stdio.h>
#include<string.h>

void mystrcpy(char dest[3], const char source[3]);  //�Ű������� ������ �迭�϶� 

void main()
{
   char str[255] = "abcdefg";
   mystrcpy(str, "abcd");     //�Լ� ȣ�� 
   printf("%s\n", str);
   
}

void mystrcpy(char dest[3], const char source[3])
{ 
   printf("dest�� �ּ� : %d\ndest�� ũ�� : %d\n", dest, sizeof(dest));
   int i = 0;
   while(source[i] != '\0')
   {
      dest[i] = source[i];
      i++;
   }
   dest[i] = NULL;
}
