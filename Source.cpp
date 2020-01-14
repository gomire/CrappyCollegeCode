//<CSIS111D02_WEEK3> -- Control Structres IF...ELSE Lab 3
//CSIS 111-D02
//<Sources>

//Include statements
#include <iostream>
#include <string>
#include <cmath>
#include <fstream>


using namespace std;

int main()
{
	//Assignment
	cout << "Marshall Mutumanje -- Lab Number 3" << endl << endl;

	fstream inFromFile;
	char s;
	int ins;
	int inttl;

	//Validate the file will open without error   
	inFromFile.open("gradesFile.txt");
	if (inFromFile.is_open())
		cout << "File read validation : PASS!" << endl;//valitadation that file is open 
	else cout << "File read validation : FAIL!..." << endl;


	string name;
	float inScore{}, inTotal{};
	while (!inFromFile.eof())
		inFromFile >> name >> inScore >> inTotal;
	inFromFile.close();
	cout << "Student : " << name << inScore << " (score) " << endl;
	cout << inTotal << " (total) " << endl;
	inFromFile.close();

	//Programming logic to include ceiling
	double c = (inScore/inTotal)*inTotal;
	double result;
	string grade;


	result = ceil(c);
	cout << "Ceil of : " << c << " = " << result << endl;
	

	if (result >= 90)
		grade = "Excellent";
	else if (result >= 80)
		grade = "Well Done";
	else if (result >= 70)
		grade = "Good";
	else if (result >= 60)
		grade = "Need Improvemnt";
	else
		grade = 'Fail';
	
	cout << grade << endl;

	
	//Closing program statements;
	system("pause");
		return 0;
}
