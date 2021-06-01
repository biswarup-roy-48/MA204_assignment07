// BISWARUP ROY
// BTECH/10048/19

#include <bits/stdc++.h>
using namespace std;

double f(double x,double y){
	return  -1000*(y-(x+2)) +1;
}
int main()
{
	double x0=0,y0=1,xn=0.01,h,slope,y1,k1,k2,k3,k4,k;
	cout<<"Enter step size: ";
	cin>>h;
	int n=int((xn-x0)/h);
	cout<<"number of steps = "<<n<<"\n";
	for (int i = 0; i < n; ++i)
	{
		k1 = h * f(x0,y0);
		k2 = h * (f((x0+h/2),(y0+k1/2)));
		k3 = h * (f((x0+h/2),(y0+k2/2)));
		k4 = h * (f((x0+h),(y0+k3)));
		k = (k1 + 2*k2 + 2*k3 + k4)/6;
		y1 = y0 + k;
		
		cout<<"[ "<<x0<<" , "<<y0<<" ] \t: \t"<<y1<<"\n";
		x0=x0+ h ;
		y0 = y1;
	}

	
	return 0;
}