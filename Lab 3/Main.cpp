//** Lab 3 User and File I/O
//Alanio Reese
//24 September 2020
//**

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	int number1;
	int number2;
	int number3;
	int number4;
	int fnum1;
	int fnum2;
	int fnum3;
	int fnum4;
	float nummean;
	float numdeviation;
	float mean;

	ifstream infile;
	ofstream outfile;
	infile.open("inMeanStd.dat");
	outfile.open("outMeanStd.dat");

	infile >> number1 >> number2 >> number3 >> number4;
	cout << number1 << " " << number2 << " " << number3 << " " << number4 << "\n";
	outfile << number1 << " " << number2 << " " << number3 << " " << number4 << "\n";

	outfile << "\nThe Mean of integers = ";

	float mean = (number1 + number2 + number3 + number4) / 4;

	outfile << "Standard Deviation = ";

	infile.close();
	outfile.close();

	return 0;
}
