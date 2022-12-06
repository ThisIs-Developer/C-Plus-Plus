#include<iostream>
#define M 3
#define N 3
#define P 3
using namespace std;
int main()
{
	int i,j,k;
	int arr[M][N],brr[N][P];
	int pro[M][P];
	cout<<"ENTER THE FIRST MATRIX : "<<endl;
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"ENTER THE SECOND MATRIX : "<<endl;
	for(i=0;i<N;i++)
	{
		for(j=0;j<P;j++)
		{
			cin>>brr[i][j];
		}
	}
	cout<<"PRODUCT : "<<endl;
	for(i=0;i<M;i++)
	{
		for(j=0;j<P;j++)
		{
			pro[i][j]=0;
			for(k=0;k<N;k++)
			{
				pro[i][j]+=arr[i][k]*brr[k][j];
			}
			cout<<" "<<pro[i][j];
		}
		cout<<"\n";
	}
	return 0;
}