#include "MakeReal.h"
MakeReal::MakeReal()
{
	data = nullptr;
	size = 0;
}

MakeReal::~MakeReal()
{
}

void MakeReal::add()
{
	string house;
	string num;
	string nType;

	system("CLS");
	cout << "Adding\n";
	AEROFLOT* fla = new AEROFLOT[size + 1];
	for (int i = 0; i < size; i++)
	{
		fla[i] = data[i];
	}
	cout << "Destination is - \n";
	cin >> house;
	if (house.empty())
		throw (string)"Please input destination\n";
	fla[size].setDist(house);
	cout << "Number of plane is - \n";
	cin >> num;
	if (num.empty())
		throw (string)"Please input plane number";
	fla[size].setNum(num);
	cout << "Type of plane is - \n";
	cin >> nType;
	if (nType.empty())
		throw (string)"Please input plane type";
	fla[size].setType(nType);
	if (data)
		delete[] data;
	data = fla;
	cout << "Well done\n";
	size++;
	system("pause");
}

void MakeReal::del()
{
	int index;
	system("CLS");
	cout << "Output" << endl;
	try
	{
		if (!size)
			throw (string)"No Plane";
		for (int i = 0; i < size; i++)
		{
			cout << i+1 << " - " << data[i].getNum() << endl;
		}
		cout << "Choose plane to delete: ";
		cin >> index;
		index--;
		if (index < 0 || index > size - 1)
			throw (string)"No such plane";
		if (size == 1)
		{
			delete[] data;
			data = nullptr;
			cout << "Plane deleted" << endl;
			size--;
			system("pause");
			return;
		}
		AEROFLOT* tmp = new AEROFLOT[size - 1];
		int j = 0;
		for (int i = 0; i < size; i++)
		{
			if (index == i)
				continue;
			tmp[j] = data[i];
			j++;
		}
		delete[] data;
		data = tmp;
		size--;
		cout << "Plane deleted" << endl;
		system("pause");
	}
	catch (string err)
	{
		cout << "[ERROR] " + err << endl;
	}
}


void MakeReal::sort()
{
	cout << "Male sort\n";
	if(!size)
		throw(string)"No plane to research";
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (data[j].getNum().compare(data[j + 1].getNum()) > 0) 
			{
				swap(data[j], data[j + 1]);
			}
		}
	}
	system("pause");
}

void MakeReal::search()
{
	system("CLS");
	bool empty = false;
	cout << "Search is\n";
	string sDest;
	cin>> sDest;
	if (!size)
		throw(string)"No plane to research";
	string aDest;
	for (int i = 0; i < size; i++)
		if (data[i].getDist().compare(sDest) == 0)
		{
			cout << data[i];
			empty = true;
		}
	if (!empty)
		cout << "Not found\n";
	system("pause");
}

void MakeReal::print()
{
	system("CLS");
	if (!size)
		throw (string)"No plane";
	for (int i = 0; i < size; i++)
	{
		cout << data[i] << endl;
	}
	system("pause");
}

void MakeReal::red()
{
	int index;
	int wht;
	string ada;
	system("CLS");
	cout << "Output" << endl;
	try
	{
		if (!size)
			throw (string)"No Plane";
		cout << "Choose plane to change data: ";
		for (int i = 0; i < size; i++)
		{
			cout << i+1 << " - " << data[i] << endl;
		}
		cin >> index;
		index--;
		cout << data[index] << endl;
		cout << "Choose point to change: ";
		cin >> wht;
		switch (wht)
		{
		case 1:
		{
			cout << data[index].getDist() << " change to\n";
			cin >> ada;
			data[index].setDist(ada);
			cout << data[index].getDist() << endl;
			break;
		}
		case 2:
		{
			cout << data[index].getNum() << " change to\n";
			cin >> ada;
			data[index].setNum(ada);
			cout << data[index].getNum() << " \n";
			break;
		}
		case 3:
		{
			cout << data[index].getType() << " change to\n";
			cin >> ada;
			data[index].setType(ada);
			cout << data[index].getType() << "\n";
			break;
		}
		}
	}
	catch (string err)
	{
	}
}
