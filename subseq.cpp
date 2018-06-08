
#include<iostream>
using namespace std;
int count=0;
void subsequence(char in[],int i,char out[],int j){
	if(in[i]=='\0'){
		out[j] = '\0';


          cout<<out<<" ";

		return;
	}
	//Rec Case

	out[j] = '\0';
	subsequence(in,i+1,out,j);
	out[j] = in[i];
	subsequence(in,i+1,out,j+1);
}
int count_subsequence(char in[],int i,int j)
{

    if(in[i]=='\0')
    {
        count++;
        return count ;
    }
    count_subsequence(in,i+1,j+1);
    count_subsequence(in,i+1,j);


}
int main()
{

	char input[100],out[100];
	cin>>input;
	int c=count_subsequence(input,0,0);
    cout<<c<<endl;
	subsequence(input,0,out,0);

    return 0;
}

