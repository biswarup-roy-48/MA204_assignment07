// BISWARUP ROY
// BTECH/10048/19

#include <bits/stdc++.h>
using namespace std;

double fDash(double x,double y){
	return  -1000*(y-(x+2)) +1;
}
int main()
{
	double x0=0,y0=1,xn=0.01,h,slope,y1;
	cout<<"Enter step size: ";
	cin>>h;
	int n=int((xn-x0)/h);
	cout<<"number of steps = "<<n<<"\n";
	for (int i = 0; i < n; ++i)
	{
		slope = fDash(x0,y0);
		y1=y0+h*slope;
		cout<<"[ "<<x0<<" , "<<y0<<" ] \t: \t"<<y1<<"\n";
		x0=x0+ h ;
		y0 = y1;
	}

	
	return 0;
}