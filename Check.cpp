#include "Check.h"

Check::Check(vector<string>& expected, vector<string>& result) : _expected(expected), _result(result) {}

bool Check::check(){
	if (_expected.size() != _result.size()) return false;
	for (int i = 0; i < _expected.size(); i++) {
		if (_expected[i] != _result[i]) return false;
	}

	return true;
}
