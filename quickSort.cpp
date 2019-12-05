#include<iostream>
using namespace std;

int partition(int *a,int s,int e){
    int i=s-1;
    int j=s;
    int piv = a[e];
    for (;j<e;j++ ) {
        /* code */
        if(a[j]<=piv){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[e]);
    return i+1;
}
void quickSort(int *a,int s,int e)
{
    if(s>=e){
        return;
    }
    int p = partition(a,s,e);
    quickSort(a,s,p-1);
    quickSort(a,p+1,e);
}


int main()
{
    int a[]={9,8,7,6,5,4,3,2,1,0};
    int n = sizeof(a)/sizeof(int);
    quickSort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }




    return 0;
}
