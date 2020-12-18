#pragma once
#include <iostream>
#include <string>

using namespace std;

struct car
{
	string make;
	string model;
	int year;
	double cost;
	int quantity;
};

void nhap_xe(car& xe);

void arr_car(int& n, car arr[]);

void output_car(int n, car arr[]);

void new_car(int& n, car arr[]);