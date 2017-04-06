// buy computer.cpp: îïðåäåëÿåò òî÷êó âõîäà äëÿ êîíñîëüíîãî ïðèëîæåíèÿ.
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
	(get(file_quantity, file_list)) ? cout << "List is compatible" : cout << "List is incompatible";
	return 0;
}

