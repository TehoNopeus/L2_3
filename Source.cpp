#include "MakeReal.h"
int main()
{
	MakeReal One;
	int a;
	while (true)
	{
		cout << "1 - Add\n2 - Print\n3 - Search\n4 - Sort\n5 - Delete\n6 - Change\n7 - Exit\n";
		cin >> a;
		switch (a)
		{
		case 1:
			One.add();
			break;

		case 2:
			One.print();
			break;

		case 3:
			One.search();
			break;

		case 4:
			One.sort();
			break;
		case 5:
			One.del();
			break;
		case 6: 
			One.red();
			break;
		case 7:
			return 0;
		}
		system("CLS");
	}
}