#include<iostream>
using namespace std;
#include<cstring>



void printPermutation(string input,int i){
	if(input[i]=='\0'){
		cout<<endl<<input;
		return;
	}

	///Rec Case
	for(int j=i;input[j]!='\0';j++){
		swap(input[i],input[j]);
		printPermutation(input,i+1);
		//Backtracking - restore the original array
		swap(input[i],input[j]);
	}
}


int main(){
	char input[20];
	cin>>input;
	printPermutation(input,0);




	return 0;
}
