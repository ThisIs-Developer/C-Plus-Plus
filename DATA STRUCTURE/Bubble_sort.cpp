#include<iostream>
#define M 50
using namespace std;
int main()
{
	int arr[M],m;
	int i,j,temp=0;
	cout<<"ENTRE THE RANGE : ";
	cin>>m;
	
	for(i=0;i<m;i++)
	{
		cout<<"ENTER THE ELEMENT : ";
		cin>>arr[i];
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<m-1;j++)
		{
			if(arr[j+1]<arr[j])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"AFTER SHORTING"<<endl;
	for(i=0;i<m;i++)
	cout<<" "<<arr[i];
	return 0;
}