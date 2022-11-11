#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
#include <sstream>


using namespace std;


void main(void) {

	
	int n; //total number of records 
	const char delim = ' ';

	vector<string> errorList; //list of errors
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		vector<string> temp;
		string input;
		cin >> input;

		istringstream iss(input);
		string token;

		while (getline(iss, token, ' '))
		{
			temp.push_back(token);
		}


		for (int i = 0; i < temp.size(); i++)
		{
			if (i == 2)
			{
				if (temp[i] == "false")
				{
					errorList.push_back(temp[i + 1]);
				}
			}
		}
		temp.clear();
	}


	if (!errorList.empty())
	{
		cout << "No" << endl;
		for (string err : errorList)
		{
			cout << err<<" ";
		}
	}


}


