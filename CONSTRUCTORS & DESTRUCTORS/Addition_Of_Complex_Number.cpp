#include<iostream>
using namespace std;
class complex
{
	private:
		int real;
		int imag; 
	public:	
	initialize()
	{
		real=0;
		imag=0;
	} 
	    void input()
		{
	    	cout<<"Enter complex no's real and imaginary part = "<<endl;
	        cin>>real>>imag;
		}   
	    complex sum(complex s)
		{
	    	complex temp;
			temp.real= real+s.real;
			temp.imag=imag+s.imag;
			return temp;	
		}
	void display()
	{
		cout<<real<<"+"<<imag<<"i"<<endl;
	}
};
int main()
{
	complex s[30];
	int i,n;
	cout<<"Enter No. of Complex number = "<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		s[i].input();
	}
	complex sum2;
	sum2.initialize();
	for(i=0;i<n;i++)
	{
	    sum2=sum2.sum(s[i]);	
	}
	cout<<"After sum:: ";
	sum2.display();	
	return 0;
}