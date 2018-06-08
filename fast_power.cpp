using namespace std;  // time logn and space logn
#include<iostream>
int power(int a, int b)
{
if(b==0)
return 1;

int value= power(a,b/2);
value*=value;

if(b&1) // i.e to check odd power
return a*value;

return value;

}


int main()
{
int a, b;
cin>>a>>b;
int x= power(a,b);
cout<<"\n Ans. is "<<x;

}
