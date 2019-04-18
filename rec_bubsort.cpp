#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    // Base case
    if (n == 1)
        return;

    // One pass of bubble sort. After
    // this pass, the largest element
    // is moved (or bubbled) to end.
    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);

    // Largest element is fixed,
    // recur for remaining array
    bubbleSort(arr, n-1);
}

int main()
{
int n;
cin>>n;

int a[n];
for(int i=0;i<n;++i)
cin>>a[i];
bubbleSort(a,n);
for(int i=0;i<n;++i)
cout<<a[i]<<" ";

}
