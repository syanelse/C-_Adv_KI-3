// Lab_1_1_6(1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iostream>

using namespace std;

int main()
{

	vector <int> v(8);

	for (unsigned i = 0; i < v.size(); ++i)
		v[i] = i * 2;

	for (auto i : v)
		cout << i << " ";

	cout << endl;
	cout << v.size() << endl;

	v.push_back(40);
	cout << v.size() << endl;

	v.pop_back();
	cout << v.size() << endl;

	return 0;
}
