#pragma once
#include <vector>
#include <string>

using namespace std;

class Check{
public:
	Check(vector<string>& expected, vector<string>& result);
	bool check();
private:
	vector<string> _expected, _result;
};

