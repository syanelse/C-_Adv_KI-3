// Lab_1_1_6(2).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>

using namespace std;
int main()
{
	vector <float> v(5);
	cout << "Put float number: ";
	float init;
	cin >> init;
	v[0] = init;
	v[1] = init + 5;
	v[2] = init + 0.5;
	v[3] = init + 2.3;
	v[4] = init + 4.7;
	for (unsigned i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " " << endl;
	}
	float sum = .0;
	for (unsigned i = 0; i < v.size(); ++i)
	{
		sum += v[i];
	}
	cout << sum << endl;
	float avg = sum / v.size();
	cout << avg << endl;
	cout << endl;
	return 0;
}