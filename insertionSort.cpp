#include <iostream>
using namespace std;

void insertionSort(int *a,int n){
    for(int i=1;i<n;i++){
        int value = a[i];
        if(a[i]<a[i-1]){
            int hole = i;
            while(hole>0&&a[hole-1]>value){
                a[hole] = a[hole-1];
                hole--;
            }
            a[hole]=value;
        }
    }
}

int main()
{
    int arr[]={9,8,7,6,5};
    int n = sizeof(arr)/sizeof(int);
    insertionSort(arr,n);
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
