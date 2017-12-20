// Lab_2_2_14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <exception>
#include <stdexcept>
#include <iostream>
using namespace std;

class Int
{
public:
	int v;
	Int(int a) : v(a) {}
};

void a()
{
	throw 0;
}

void b()
{
	try
	{
		a();
	}
	catch (int i)
	{
		throw Int(i + 1);
	}
}

void c()
{
	try
	{
		b();
	}
	catch (...)
	{
		throw;
	}
}

int main(void)
{
	try
	{
		c();
	}
	catch (Int &i)
	{
		cout << i.v;
	}
	return 0;
}

