#include<iostream>
using namespace std;


int kadanes(int *a,int n){
	int cs,ms;
	cs = ms = 0;
	for(int i=0;i<n;i++){
		cs += a[i];
		if(cs < 0){ cs = 0; };
		ms = max(ms,cs);
	}
	return ms;

}

int main(){
    int n;
    cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
        cin>>a[i];
	cout<<kadanes(a,n)<<endl;

return 0;
}
