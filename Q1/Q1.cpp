#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>

using namespace std;


bool checker(string size, vector<string> sizes)
{
	for (string x : sizes) {

	}


}


void main() {
	
	bool answer = true; 
	vector<string> sizes; //list to store avaiable T shirts 

	vector<string> rSizes; //list to store requested T shirts 

	int n; //  total number of t shirts 
	int m; // total number of requested t shirts
	cin >> n;

	for (int i = 0; i < n; i++)   //inputting avaiable size
	{
		cin >> sizes[i];
	}
	cin >> m;
	for (int i = 0; i < n; i++) // inputting requested sizes
	{
		cin >> sizes[i];
	}



	for (int i = 0; i < n; i++)  //for checking each requests
	{
		answer = checker(rSizes[i], sizes);
		if (!answer)
		{
			break;
		}
	}

		

	if (answer)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}

	
}


