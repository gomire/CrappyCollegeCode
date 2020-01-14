//<Lab> -- Control Structure DO WHILE FOR CASE Lab 4
//CSIS 111-D02
//<Sources> ++ How to Program, 10/e by Harvey Deitel; Paul Deitel:: use of <pointers> <setw> and other <formatting>


// Include and header declarations 
#include <iostream>

#include <string>

#include <iomanip>

#include <fstream> //file stream

#include <cmath>


//Namespace declarations
using namespace std;

//Main function deinFileition
int main()
{
	//Week4
	cout << "Marshall Mutumanje -- Lab Number 4" << endl << endl;

	//variables to manage the data for songs and time    
	int songMin, songSec;
	int rTime, rMin, rSec;
	int totalMin, totalSec, rTotalSec;
	int totalTime = 0;
	int songId;
	int capsuleTime = ((80 * 60)); //initialised 'capsuleTime' :)


	//File handler for reading and writing out using default flag ios::
	fstream inFile;
	inFile.open("Songs.txt", ios::in | ios::binary);
	
	//error handling upon file open
	if (!inFile)
	{
		cout << "File read validation: failed!" << endl;
		cout << "self-distructing..." << endl;
		//error return code 1 : default 0
		return 1;
	//end if
	}

	
	if (inFile.is_open())
	{
		//Troubleshooting technique found in the above source title
		// helped me with a pointer issue I had

		string buffer;
		inFile.seekg(0, ios::_Seekbeg); //gather file size
		streampos sizeOfFile = inFile.tellg();
		//Pointer position reset
		inFile.seekg(0);
		cout << "Troubleshooting ref : " << sizeOfFile  << endl;
	
	//end if, end troubleshooting
	}



	//Output and manual formating 
		cout << "\n " << setw(2) << " Song# " << setw(15)
		<< "Song Time Min." << setw(20) << "Song Time Sec." << setw(15) << "Total Min."  << setw(15) << "Time Sec. \n";

	    cout << "\n ||...............................................................|| \n";

		
	// while" loop will handle iteratation of input lines

	while (inFile.good())

	{
		//Read from file bring back song and time

		inFile >> songId >> rTotalSec;

		//total time and song time calculation minutes and seconds
		//while looping

		totalTime = (totalTime + rTotalSec);

		totalMin = (totalTime / 60);

		totalSec = totalTime % 60;

		songMin = (rTotalSec / 60);

		songSec = (rTotalSec % 60);

		//Write output to console

		cout << "\n " << setw(2) << songId << setw(15) << songMin << setw(15) 

			<< setw(15) << songSec << setw(15) << totalMin << setw(15) << totalSec << " \n";

	}

	//Calculate remaining time

	rTime = capsuleTime - totalTime;

	rMin = (rTime / 60);

	rSec = (rTime % 60);

	//Write remaining time console

	cout << "\n There are " << rMin << " minutes, and " << rSec << " seconds of space left on the 80-minute Compact Disk. " << endl;
	cout << "Marshall Mutumanje CSIS111D02" << endl;
	cout << endl;

	//Close file pointers

	inFile.close();

	//Closing program statements
	system("pause");
	return 0;



}
