#include<iostream>
#include<cmath>
using namespace std;

bool isSafe(int mat[][9],int i,int j,int no,int n){

	//Check for row and col
	for(int k=0;k<n;k++){
		if(mat[k][j]==no||mat[i][k]==no){
			return false;
		}
	}
	//Check for subgrid
	int sqn = sqrt(n);
	int sx = (i/sqn)*sqn;
	int sy = (j/sqn)*sqn;

	for(int x = sx;x<sx+sqn;x++){
		for(int y=sy;y<sy+sqn;y++){
			if(mat[x][y]==no){
				return false;
			}
		}
	}
	return true;
}

bool solveSudoku(int mat[][9],int i,int j,int n){
	//Base Case
	if(i==n){
		//Print the matrix
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
	if(j==n){
		return solveSudoku(mat,i+1,0,n);
	}
	//Rec Case
	//Skip the blue cell
	if(mat[i][j]!=0){
		return solveSudoku(mat,i,j+1,n);
	}
	//White Cell
	for(int no=1;no<=n;no++){
		if(isSafe(mat,i,j,no,n)){

			mat[i][j] = no;
			bool solveHui = solveSudoku(mat,i,j+1,n);
			if(solveHui){
				return true;
			}
		}
	}
	mat[i][j] = 0;
	return false;
}


int main(){
	int n;
	cin>>n;
	int mat[9][9];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                cin>>mat[i][j];
        }


        if(!solveSudoku(mat,0,0,n)){
        	cout<<"No solution exists!";
        }


}
