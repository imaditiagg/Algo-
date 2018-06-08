#include<iostream>
using namespace std;

int binary_search(int *a,int s,int e,int n,int key)
{
       ///Binary Search

int mid=0;;
   while(s<=e)
    {

        mid = (s+e)/2;

        if(a[mid]==key)
        {

           return mid;
        }
        else if(a[mid]>key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }

   }
   return -1;


}



int main(){

    ///Create an array

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    ///Input the key
    int m;
    cin>>m;
     int s=0;
     int e = n-1;
     int mid;

int x = binary_search(a,s,e,n,m);
cout<<x;

return 0;
}
