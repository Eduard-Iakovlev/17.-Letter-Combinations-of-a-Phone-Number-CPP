#pragma once
#include <vector>
#include <string>


using namespace std;

class Output{
public:
	Output();

	void setOutputData(int example, string& digits, vector<string>& expected);
	void printOutputSolution();

private:
	int _example;
	string _digits;
	vector<string> _expected, _result;

	void setExample(int example);
	void setDigits(string& digits);
	void setExpected(vector<string>& expected);
	void setResult();

	void printVecSTR(vector<string>& vec);
	void printCheck();
};

