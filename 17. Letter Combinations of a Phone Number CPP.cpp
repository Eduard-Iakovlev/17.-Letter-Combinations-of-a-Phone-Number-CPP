#include <iostream>
#include <string>
#include <vector>
#include "Output.h"

using namespace std;

int main(){
	setlocale(LC_ALL, "RUS");

	int example = 0;
	string digits;
	vector<string> expected;

	Output output;

	example++;
	digits = "23";
	expected = { "ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf" };
	output.setOutputData(example, digits, expected);
	output.printOutputSolution();

	example++;
	digits = "";
	expected = {};
	output.setOutputData(example, digits, expected);
	output.printOutputSolution();

	example++;
	digits = "2";
	expected = { "a", "b", "c" };
	output.setOutputData(example, digits, expected);
	output.printOutputSolution();
}
