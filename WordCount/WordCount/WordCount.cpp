#include "pch.h"
#include <iostream>
#include <string>
#include <fstream>
#include "CountWords.h"
#include "arg_handle.h"

using namespace std;

extern string inputFilename;
extern int inputPos;
int main(int argc, char **argv)
{
	//int ret = Argv_handle(argv);
	ifstream input;
	input.open("test.txt");
	if (input.fail())
	{
		cout << "error" << endl;
	}
	CountWord("paper.txt", 0);
	
	
	

	

	
	
	
	
	return 0;
}