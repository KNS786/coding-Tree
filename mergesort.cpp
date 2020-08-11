#include<iostream>
using namespace std;

void merge(int arr[],int low,int mid,int high)
{
	int LH[low+mid];
	int RH[mid+1+h];
	for(int i=0;i<mid;i++)  LH[i]=arr[i];
    for(int i=mid+1;i<high;i++) RH[i]=arr[i];
	
	int i=0,j=0,k=0;
	while(i<=mid && j<=high)
	{
		if(LH[i]<=RH[j])
		{
			arr[k]=LH[i];
			i++;
		}
		else{
			arr[k]=RH[j];
			j++;
		}
		k++;
	}
	for(int i=0;i<=high;i++) //@param{index=high-1}
	{
		cout<<arr[i]<<" ";
	}
	
}


void mergesort(int arr[],int low,int high)
{
	if(low<high)
	{
		int mid=(low+high-1)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int  i=0;i<n;i++)
		cin>>arr[i];
    mergesort(arr,0,n);
	
}