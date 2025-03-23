#include "Solution.h"


vector<string> Solution::letterCombinations(string digits){
	vector<string> result{};
	unordered_map<char, string> phone; {
		phone['2'] = "abc";
		phone['3'] = "def";
		phone['4'] = "ghi";
		phone['5'] = "jkl";
		phone['6'] = "mno";
		phone['7'] = "pqrs";
		phone['8'] = "tuv";
		phone['9'] = "wxyz";
	}

	if (digits.empty()) return result;

	backtrack(digits, 0, "", result, phone);

    return result;
}

void Solution::backtrack
(const string& digits, int idx, string comb, vector<string>& res, const unordered_map<char, string>& digitToLetters){
	if (idx == digits.length()) {
		res.push_back(comb);
		return;
	}

	string letters = digitToLetters.at(digits[idx]);
	for (char letter : letters) {
		backtrack(digits, idx + 1, comb + letter, res, digitToLetters);
	}
}
