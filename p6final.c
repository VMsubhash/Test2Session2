#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
  scanf("%s",a);
}
int find_substring(char *s,char *sub)
{
  int k=0;
  int S=strlen(s),Sub=strlen(sub);
  for(int i=0;i<S-Sub+1;i++)
    {
      for(int j=0;j<Sub;j++)
        {
          if(sub[j]==s[i+j])
          {
            k=k+1;
          }
          else
          {
            k=0;
            break;
          }
        }
      if(k==Sub)
      {
        return(i);
      }
    }
  return(-1);
}
void output(char *s,char *sub,int index)
{
  if(index==-1)
  {
    printf("%s does not exist in %s\n",sub,s);
  }else{
    printf("the index of %s in %s is %d\n",sub,s,index);
  }
}
int main()
{
  printf("enter the string and substring\n");
  char str[25],substr[25];
  int ind;
  input_string(str);
  input_string(substr);
  ind=find_substring(str,substr);
  output(str,substr,ind);
}

