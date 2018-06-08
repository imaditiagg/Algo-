using namespace std;   //time n^2
#include<iostream>
void replacepi(char s[], int i=0)
{
  if(s[i]=='\0' || s[i+1]=='\0')
  {
      return ;
  }

  if(s[i]=='p' && s[i+1]=='i')
  {
      int j=i+1;
      while(s[j])
      {
          j++;
      }
      while(j>i)
      {
          s[j+2]=s[j];
          j--;
      }
      s[i]='3';
      s[i+1]='.';
      s[i+2]='1';
      s[i+3]='4';

      replacepi(s,i+4);

  }
   else replacepi(s,i+1);
}
int main()
{
    char s[]= "xpiyhpizkpi";
    replacepi(s,0);
    cout<<s;
    return 0;
}
