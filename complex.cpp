#include <iostream>

using namespace std;

class complex
{
	double r;
	double i;
public:
	complex()
	{
		r = 0;
		i = 0;
	}
	complex(double re, double im)
	{
		r = re;
		i = im;
	}

	complex add(complex other)
	{
		complex sum;
		sum.r = r + other.r;
		sum.i = i + other.i;
		return sum;
	}

	complex multiply(complex other)
	{
		complex prod;
		prod.r = (r * other.r) - (i * other.i);
		prod.i = (r * other.i) - (i * other.r);
		return prod;
	}

	complex negate()
	{
		complex ne;
		ne.r = -(r);
		ne.i = -(i);
		return ne;
	}

	complex invert()
	{
		complex in;
		double store = (r * r) + (i * i);
		in.r = r/store;
		in.i = -(i/store);
		return in;
	}

	complex print()
	{
		cout<<r<<"+("<<i<<"i)"<<endl;
	}
	
};

int main()
{
	double r,i;
	cout<<"Enter complex no. 1:"<<endl<<"Real: ";
	cin>>r;
	cout<<"Imaginary: ";
	cin>>i;
	complex o1 = complex(r,i);
	cout<<"Enter complex no. 2:"<<endl<<"Real: ";
	cin>>r;
	cout<<"Imaginary: ";
	cin>>i;
	complex o2 = complex(r,i);

	complex sum = o1.add(o2);
	complex prod = o1.multiply(o2);
	complex negative1 = o1.negate();
	complex negative2 = o2.negate();
	complex inverted1 = o1.invert();
	complex inverted2 = o2.invert();

	cout<<"Sum: ";
	sum.print();
	cout<<"Product: ";
	prod.print();
	cout<<"Negative of Complex no. 1: ";
	negative1.print();
	cout<<"Negative of Complex no. 2: ";
	negative2.print();
	cout<<"Inversion of Complex no. 1: ";
	inverted1.print();
	cout<<"Inversion of Complex no. 2: ";
	inverted2.print();

}