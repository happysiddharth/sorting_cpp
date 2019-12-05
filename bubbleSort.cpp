
#include <iostream>
using namespace std;

void bubbleSort(int *a,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j+1],a[j]);
            }
        }
    }
}

int main()
{
    int arr[]={9,8,7,6,5};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
