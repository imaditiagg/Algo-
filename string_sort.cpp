#include<bits/stdc++.h>  //to include all header files
using namespace std;

bool cmp(string a,string b){

	if(a.length()==b.length()){
		return a>b;
	}
	return a.length()< b.length();
}

int main(){

	string s[]  = {"ap","ax","mango","apple","banana"};

	sort(s,s+4,cmp); //calling

	for(int i=0;i<4;i++){
		cout<<s[i]<<endl;
	}
return 0;
}
