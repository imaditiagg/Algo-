#include<iostream>
#include "heap.h"
using namespace std;

class pair
{

int element;
int idx;
int j;


};


int main()
{

int k=3,n=4;

int arr[][n] =  {{2, 6, 12, 34},
                     {1, 9, 20, 1000},
                     {23, 34, 90, 2000}};

int *output =new int[k*n];
pair *p=new pair[k];

 for (int i = 0; i < k; i++)
    {
        p[i].element = arr[i][0]; // Store the first element
        p[i].idx = i;  // index of array
        p[i].j = 1;  // Index of next element to be stored from array
    }

Heap h;
h.push(p);

for (int count = 0; count < n*k; count++)
    {
        // Get the minimum element and store it in output
        pair root = h.top();
        h.pop();
        output[count] = root.element;

        // Find the next elelement that will replace current
        // root of heap. The next element belongs to same
        // array as the current root.
        if (root.j < n)
        {
            root.element = arr[root.idx][root.j];
            root.j += 1;
        }
        // If root was the last element of its array
        else root.element =  INT_MAX; //INT_MAX is for infinite

        // Replace root with next element of array
        p[0]=root;
       h.heapify(0)

    }



   for (int i=0; i < k*n; i++)
       cout << output[i] << " ";
       return 0;
}
