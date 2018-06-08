#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int i=1,j=1;
for(int i=0;i<=n;i++)
{

if(i %3==0 || i%5==0)
{
if(i%3==0)
cout<<"Hi";
if(i%5==0)
cout<<"hello";
}
else
    cout<<i;


cout<<"\n";
}

return 0;

}


