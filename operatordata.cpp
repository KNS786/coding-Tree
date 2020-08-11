#include<iostream>
using namespace std;

struct complex{
	double real;
	double img;
};
complex operator+(const complex& a,const complex& b)
{
	complex c;
	c.img=c.img+c.img;
	c.real=c.real+c.real;
}
complex operator*(const complex& a,const complex& b)
{
	complex c;
	c.img=c.img*c.img;
	c.real=c.real*c.real;
} 
complex operator-(const complex& a,const complex& b )
{
	complex c;
	c.img=c.img-c.img;
	c.real=c.real-c.real;
	
}
complex operator/(const complex& a,const complex& b)
{
	complex c;
	c.img=c.img/c.img;
	c.real=c.real/c.real;
}

int main()
{
	static complex data={10,20},val={70.91,31.81},z;
	z=data+val;
	cout<<z.img<<" "<<z.real<<endl;
	z=data*val;
	cout<<z.img<<" "<<z.real<<endl;
	z=data/val;
	cout<<z.img<<" "<<z.real<<endl;

 return 0;
}
