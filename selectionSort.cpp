#include <iostream>
using namespace std;

void selectionSort(int *a,int n){
    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[minIndex]){
                minIndex = j;
            }
        }
        swap(a[minIndex],a[i]);
    }
}

int main()
{
    int arr[]={9,8,7,6,5};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr,n);
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
