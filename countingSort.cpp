#include<iostream>
using namespace std;
void quickSort(int *arr,int n){
	int temp[100] = {0};
	for(int i=0;i<n;i++){
		temp[arr[i]]++;
	}

	
	for(int i=1;i<100;i++){
		temp[i]+=temp[i-1];
	}
	

	int output[100];

	for(int i=0;i<n;i++){
		output[temp[arr[i]]-1] = arr[i];
		temp[arr[i]]--;
		
	}
	
	for(int i=0;i<n;i++){
	arr[i] = output[i];
	}
}

int main(){
	int arr[]={9,8,7,6,5,4,3,2,1};
	int n = sizeof(arr)/sizeof(int);
	quickSort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<" ";
	}
}
