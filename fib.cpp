#include<iostream>   // time  2^n and space n
using namespace std;

int fib(int n)
{
if(n==0 || n==1)
return n;
else

return fib(n-1)+fib(n-2);


}

int main()
{
int n;
cout<<"Enter n :";
cin>>n;
int x= fib(n);
cout<<endl<<x;

}
