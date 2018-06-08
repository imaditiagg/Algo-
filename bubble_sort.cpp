#include<iostream>
using namespace std;
void bubble_sort(int a[],int n)
{
        ///Bubble Sort
    for(int times=1;times<=n-1;times++){

        ///Iteration from 0 to n-times-1 => Pairwise swapping
        for(int j=0;j<=n-1-times;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main(){

    int n ;
    cin>>n;
    int a[n];
    for(int j=0;j<n;j++)
        cin>>a[j];

    bubble_sort(a,n);



    ///Print the array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}

