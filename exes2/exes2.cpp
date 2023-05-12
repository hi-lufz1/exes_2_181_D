#include <iostream>
using namespace std;

int ltif[32]; 
int n; 
int i; 


void input()
{
	while (true)
	{
		cout << "Enter the number of element in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 32))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 32 element.\n\n";
	}

	
	cout << "\n----------------------------\n";
	cout << "Enter array element\n";
	cout << "Data harus urut Kecil -> Besar \n";
	cout << "----------------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> ltif[i];

	}
}

void  BinarySearch()
{
	char ch;
	do
	{
		cout << "\nEnter element want you to search: ";
		int item;
		cin >> item;

		int latif = 0;
		int fauzi = n - 1;


		do {
			int mid = (latif + fauzi) / 2;

			if (ltif[mid] == item) {

				cout << "\n" << item << " found at position " << (mid + 1) << endl;
				break;
			}

			if (item < ltif[mid])
			{
				fauzi = mid - 1;
			}
			if (item > ltif[mid])
			{
				latif = mid + 1;
			}
			if (latif <= fauzi)
			{
				int mid = (latif + fauzi) / 2;
			}
			else { cout << "\n" << item << " not found \n"; }

		} while (latif <= fauzi);
		

		cout << "\nContinue search (y/n): ";
		cin >> ch;

	} while ((ch == 'y') || (ch == 'Y'));
}


int main() {

	input();
	BinarySearch();
	return 0;

}
