#include<bits/stdc++.h>
using namespace std;

int Pairs(int A[], int n, int k){
	int count=0;
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if((A[i] + A[j]) % k==0)
			    count++;
		}
	}
	return count;
}
int main(){
	int n,k;
	cout<<"Enter size of the array: ";
	cin>>n;
	cout<<"Enter key: ";
	cin>>k;
	int arr[n];
	
	cout<<"Enter array: ";
	
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	}
	
	cout<<"The number of pairs are: "<<Pairs(arr,n,k);
	return 0;
}
