#include <iostream>
using namespace std;

 void tower_of_hanoi(char src,char dest,char helper ,int n)
 {
   if(n==0)
   return;

   tower_of_hanoi(src,helper,dest,n-1);
   cout<<"Moving ring "<<n<< " from "<<src<<" to "<<dest<<endl;
   tower_of_hanoi(helper,dest,src,n-1);
 }

int main() {
    int n;

    cin>>n ;

    tower_of_hanoi('A','B','C',n);
    return 0;

}
