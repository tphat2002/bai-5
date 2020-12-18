
#include <iostream>
#include <string>
#include "car.h"

using namespace std;

void nhap_xe(car &xe)
{
	cout << "Hang xe: ";
	cin.ignore();
	getline(cin, xe.make);

	cout << "Model: ";
	getline(cin, xe.model);

	cout << "Nam sx: ";
	cin >> xe.year;

	cout << "Gia: ";
	cin >> xe.cost;

	cout << "So luong: ";
	cin >> xe.quantity;

	cout << endl;
}

void arr_car(int& n, car arr[])
{
	cout << "Nhap n: ";
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "Xe thu " << i + 1 << endl;
		nhap_xe(arr[i]);
	}
}

void output_car(int n, car arr[])
{
	cout << "Make \t" << "Model \t" << "Year \t"
		<< "Cost \t" << "Quantity \t";
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i].make << "\t"
			<< arr[i].model << "\t"
			<< arr[i].year << "\t"
			<< arr[i].cost << "\t"
			<< arr[i].quantity << "\t";
		cout << endl;
	}
}

void new_car(int& n, car arr[])
{
	cout << endl;
	cout << "Nhap xe moi: " << endl;
	nhap_xe(arr[n]);
	n++;
}