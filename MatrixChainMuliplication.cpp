/* A[1...n] =>A[i] * A[n-i-1]*/
#include<iostream>
using namespace std;

int MatrixChainOrder(int p[],int n)
{
	int M[n][n];
	int i,j,k,l,q;
	
	for(i=1;i<n;i++)
	  M[i][i]=0;
	
	for(l=2;l<n;l++)
	{
		for(i=1;i<n-l+1;i++)
		{
			j=i+l-1;
			M[i][j]=INF;
			for(k=i;k<=j;k++)
			{
				q=M[i][k]+M[k+1][j]+p[i-1]*p[k]*p[j];
			     if(q<M[i][j])
			       M[i][j]=q;
			}
		}
	}
  return M[1][n-1];
}

int main()
{
	int arr[]={1,2,3,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Minimul number of muliplication "<<
	MatrixChainOrder(arr,n);
	
	return 0;
	
	
}
