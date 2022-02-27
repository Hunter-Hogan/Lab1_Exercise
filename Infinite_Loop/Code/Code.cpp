// Lab 1.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int choice = 0;

	string name = "";
	string age = "";
	string occup = "";

	/* The Problem is that the choice cases when getting to case 3 
	the program enters infinite loop 

	while (choice != -1)
	{
		cout << "-1: Exit\n";
		cout << "1: Enter Name\n";
		cout << "2: Enter Age\n";
		cout << "3: Enter Occupation\n";
		cin >> choice;

		/*if (choice == -1)
			break;

		switch (choice)
		{
		case 1:
			cout << "What is your Name: ";
			cin >> name;
			break;
		case 2:
			cout << "What is your Age? ";
			cin >> age; 
			break;
		case 3:
			cout << "What is your Occupation? ";
			cin >> occup;  
			break;
		default:
			// Assume Invalid Menu Choice
			cout << "Sorry that choice is not valid!";
			break;

		}
	}
	*/

/* The solution was to get rid of the switch case and put an if case instead 
*/

cout << "-1: Exit\n";
cout << "1: Enter Name\n";
cout << "2: Enter Age\n";
cout << "3: Enter Occupation\n";
cin >> choice;

while (choice != -1)
{
	if (choice == 1)
	{
		cout << "What is your Name: ";
		cin >> name;
		cout << "What is your next choice? ";
		cin >> choice;
	}
	if (choice == 2)
	{
		cout << "What is your Age? ";
		cin >> age;
		cout << "What is your next choice? ";
		cin >> choice;
	}
	if (choice == 3)
	{
		cout << "What is your Occupation? ";
		cin >> occup;
		cout << "What is your next choice? ";
		cin >> choice;
	}
	if (choice > 3 || (choice < -1 || choice == 0 ))
	{
		cout << "Sorry that choice is not valid! \n";
		cout << "What is your next choice? ";
		cin >> choice;
	}
}
	
	age += 1;
	cout << "Thank you for using our application, " << name << " and hope your career in " << occup << " is successful.\n";
	cout << "Hope your " << age << " birthday will be enjoyable and exciting";

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
