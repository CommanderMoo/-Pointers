// Pointers
// this is in class (from recording in covid-19 03312020)
#include <iostream>
using namespace std;
int main()
{
	//title of application
	cout << "\n\n\t\t *** Pointers Are Easy *** \n\n";

	// if you have a reference, you have something to reference
	int age = 21;
	// **********************************************************
	// a reference will never be different from what its referencing to
	int& r_age = age;
	cout << "\n my age from the variable age says: " << age << endl;
	cout << "\n my age from the variable r_age says: " << r_age << endl;
	cout << "\n changing reference";
	r_age = 25;
	cout << "Now after the change of only the ref r_age value \n";
	cout << "\n My age var: " << age << endl;
	cout << "\n My age ref: " << r_age << endl;
	// **********************************************************
	//point of confusion * can declare a ref (CAN ONLY HOLD ONE THING)
	//can only hold a memory address
	//address if opurator is &
	int* p_age = &age;
	cout << "\n My age from the var age says: " << age << endl;
	cout << "\n The address of age is: " << &age << endl;
	cout << "\n P_age is: " << &p_age << endl;
	cout << "\n My age from the pointer p_age says: " << p_age << endl;
	cout << "\n The value of my age from dereferencing the pointer p_age says: " << *p_age << endl;
	// **********************************************************
	return 0;
}