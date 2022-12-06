#include<iostream>
#define M 255
using namespace std;
void sort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
void printarray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int  main()
{
	int arr[M],i,n;
	cout<<"ENTRE THE SIZE OF ARRAY = ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"ENTER THE ELEMENTS = ";
		cin>>arr[i];
	}
	sort(arr,n);
	cout<<"AFTER SORRT"<<endl;
	printarray(arr,n);
	return 0;
}
