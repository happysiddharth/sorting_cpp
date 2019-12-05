#include<iostream>
using namespace std;

void merge(int *a,int s,int e){
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[100];
    while(i<=mid&&j<=e){
        if(a[i]<a[j]){
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
        }
    }
    while(i<=mid){
        temp[k++]=a[i++];
    }
    while(j<=e){
        temp[k++]=a[j++];
    }
    for(i=s;i<=e;i++){
        a[i]=temp[i];
    }
}

void mergeSort(int a[],int s ,int e){
    if(s>=e){
        return;
    }

    int mid = (s+e)/2;

    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);
    merge(a,s,e);

}

int main()
{
    int a[10]={9,0,8,7,6,5,4,3,2,1};
    mergeSort(a,0,9);
    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }



    return 0;
}
