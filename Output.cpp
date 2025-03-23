#include "Output.h"
#include "Solution.h"
#include "Check.h"
#include <iostream>

Output::Output() = default;

void Output::setOutputData(int example, string& digits, vector<string>& expected){
	setExample(example);
	setDigits(digits);
	setExpected(expected);
}

void Output::printOutputSolution(){
	cout << "============ Пример № " << _example << " ============" << endl;
	cout << " Вводные данные: digits = \"" << _digits << "\"" << endl;
	cout << " Ожидаемый результат: ";
	printVecSTR(_expected);
	setResult();
	cout << " Полученный результат: ";
	printVecSTR(_result);
	cout << "============ Проверка ============" << endl;
	printCheck();
	cout << "=================================\n" << endl;
}

void Output::setExample(int example){
	_example = example;
}

void Output::setDigits(string& digits){
	_digits = digits;
}

void Output::setExpected(vector<string>& expected){
	_expected = expected;
}

void Output::setResult(){
	Solution solution;
	_result = solution.letterCombinations(_digits);
}

void Output::printVecSTR(vector<string>& vec){
	cout << "[ ";
	for (auto& str : vec) {
		cout << "\"" << str << "\"";
		if (&str != &vec.back()) cout << ", ";
	}
	cout << " ]" << endl;
}

void Output::printCheck(){
	Check check(_expected, _result);

	if (check.check()) cout << " Тест пройден!" << endl;
	else cout << " Тест не пройден!!!" << endl;
}
