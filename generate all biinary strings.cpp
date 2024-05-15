#include<iostream>
using namespace std;
void printarray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	cout<<endl;
}

void binarystring(int arr[],int n,int i){
	if(i==n){
		printarray(arr,n);
		return;
	}
	
	arr[i]=0;
	binarystring(arr,n,i+1);
	
	arr[i]=1;
	binarystring(arr,n,i+1);
}

int main()
{
    int n = 4;
    int arr[n];
    binarystring(arr, n, 0);
    return 0;
}
