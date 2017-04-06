// buy computer.cpp: определяет точку входа для консольного приложения.
//

#include "functions.h"
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char file_quantity[100], file_list[100];
	cout << "Price list from shop, list for buy:" << endl;
	cin.getline(file_quantity, 100);
	cin.getline(file_list, 100);
	(get(file_quantity, file_list)) ? cout << "Yes" : cout << "No";
	return 0;
}

