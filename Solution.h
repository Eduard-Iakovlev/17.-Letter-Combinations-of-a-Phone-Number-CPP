#pragma once
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution{
public:
	vector<string> letterCombinations(string digits);
	static void backtrack(const string& digits, int idx, string comb, vector<string>& res, const unordered_map<char, string>& digitToLetters);
};

