#include <iostream>
using namespace std;


int tiara(15); // Array to be searched
int n; // Number of elements in the array 
int i; // Index of array element


void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array: ";
		cin >> n;
		if ((n > 0) && (n <= 15))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 15 elements.\n\n";
	}

	//Accept the element to be searched
	cout << "\n-----------------\n";
	cout << " Enter array elements \n";
	cout << "----------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> tiara[i];
	}
}
void exercise(int lowerbound, int upperbound, int mid)
{
	int lowerbound, int upperbound, int mid;
	if (low > up)
		return;

	//set the lowerbound,upperboard,mid
	lowerbound = 0
	upperbound = 1
	mid		   = lowerbound + upperbound/2
}
Set i = 0
Repeat step 4 until i > n or arr[
Increment i by 1
If i > n:
Display “Not Found”

