/*
ip:
enter the string1..
forcodecrazy
enter the string2..
codecrazyfor
op:
YES
-----
ip:
enter the string1..
crazyforcode
enter the string2..
codeforcrazy
op:
NO
*/
#include<stdio.h>
#include<string.h>
int main()
{
  int l1,l2,i,j,t;
  char a[30],b[30];
  printf("enter the string1..\n");
  scanf("%s",a);
  printf("enter the string2..\n");
  scanf("%s",b);
  l1=strlen(a);
  l2=strlen(b);
  if(l1==l2)
  { int c=0;
    for(;c!=l1;)
    {
      
       t=a[0];
      for(i=0;i<l1-1;i++)
        a[i]=a[i+1];
      a[l1-1]=t;
        //printf("%s\n",a);
       if(!strcmp(a,b))
        { printf("YES\n");
           break;
        }
       c++;
    }
     if(c==l1)
       printf("NO\n");
  }
  else
    printf("NO\n");
  return 0;
}
