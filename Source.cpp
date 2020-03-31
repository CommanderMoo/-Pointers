// -Pointers
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

//notes
/*
{
	//pointers
#include <iostream>
#include <ctime>
#include <string>

	int* pAPointer;	//declare a pointer
	int* pScore = 0; // declare and initialize a pointer
	int score = 1000;
	pScore = &score; // assign pointer pScore address of variable score

	cout << "Assigning &score to pScore \n";
	cout << "&score is: " << &score << "\n"; //address of score variable
	cout << "pScore is: " << pScore << ""; //address stored in pointer
	cout << "score is: " << score << "\n";
	cout << "*pScore is: " << *pScore << "\n\n";

	cout << "Adding 500 to score \n";
	score += 500;
	cout << "score is: " << score << "\n";
	cout << "*pScore is:" << *pScore << "\n\n";

	cout << "Adding 500 to  *pScore \n";
	*pScore += 500;
	cout << "score is: " << score << "\n";
	cout << "*pScore is: " << *pScore << "\n\n";

	cout << "Assigning &newScore to pScore \n";
	int newScore = 5000;
	pScore = &newScore;
	cout << "&newScore is: " << &newScore << "\n";
	cout << "pScore is: " << pScore << "\n";
	cout << "newScore is: " << newScore << "\n";
	cout << "*pScore is:" << *pScore << "\n\n";

	cout << "Assigning &str to pStr \n";
	string str = "score";
	string* pStr = &str; //pointer to string object

	cout << "str is: " << str << "\n";
	cout << "*pStr is: " << *pStr << "\n";
	cout << "(*pStr).size() is: " << (*pStr).size() << "\n";
	cout << "pStr->size() is: " << pStr->size() << "\n";

	return 0;
}
*/
