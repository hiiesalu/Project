//פאיכ program.cpp
#include "stdafx.h"
#include <iostream>
#include "funcs.h" 

using namespace std;

int main()
{
	int ch;
	double a;
	double b;

	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>b;

	cout<<"Enter function:\n1-summation;\n2-subtraction;\n3-multiplication;\n4-division.\n";
	cin>>ch;
	cout<<"You have selected function number "<<ch<<endl;

	switch (ch){
	case 1:
cout <<"RESULT: "<< MySum(a, b) << endl;
cout << "Summation completed"<<endl;
	break;
	case 2:
cout <<"RESULT: "<< MySub(a, b) << endl; 
cout << "Subtraction completed"<< endl;
    break;
	case 3:
cout << "Multiplication is being developed"<<endl;
    break;
	case 4:
if (b==0) 
cout<<"Division by 0, ERROR!!!"<<endl;
else
{
cout << "RESULT: "<<MyDiv(a, b) << endl;
cout << "Division completed"<<endl;
}
	default:
		cout<<"error"<<endl;
	}
	system ("pause");
 return 0;
}