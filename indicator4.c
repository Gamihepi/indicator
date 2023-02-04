#include<stdio.h>
 main()
{
  char str[20], *pt;
  int i=0;
  printf("Enter Any string = ");
  gets(str);
  pt = str;
  for(i=0;*pt != '\0';i++) 
  {
    pt++;
  }
  printf("Length of String : %d", i);

}
