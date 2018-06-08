using namespace std;
#include<iostream>

void merge(int a[],int x[],int y[],int s,int e)
{

    int i = s;
	int mid = (s+e)>>1;  //right shift involves division
	int j = mid + 1;
	int k = s;

	while(i<=mid && j<=e){
		if(x[i]<y[j]){
			a[k++] = x[i++];
		}
		else{
			a[k++] = y[j++];
		}
	}

	//either of one array is left
	while(i<=mid){
		a[k++] = x[i++];
	}
	while(j<=e){
		a[k++] = y[j++];
	}

}

void merge_sort(int a[],int s,int e)
{
    //base case
    if(s==e|| s>e){
		return;
	}
    int x[100];
    int y[100];
    int mid=(s+e)/2;
    for(int i=s;i<=mid;i++){
		x[i] = a[i];
	}

	for(int i=mid+1;i<=e;i++){
		y[i] = a[i];
	}
    merge_sort(x ,s,mid);
    merge_sort(y,mid+1,e);

    merge(a,x,y,s,e);



}
int main()
{
    int a[]={6,7,1,3,2,5};
    int n= sizeof(a)/ sizeof(int);
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
