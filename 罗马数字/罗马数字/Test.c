#define _CRT_SECURE_NO_WARNINGS 1
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
	string intToRoman(int num)
	{
		string result;
		vector<string> tmpVec1 = { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" };
		vector<string> tmpVec2 = { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" };
		vector<string> tmpVec3 = { "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" };
		vector<string> tmpVec4 = { "", "M", "MM", "MMM" };
		vector<vector<string>> store = { tmpVec1, tmpVec2, tmpVec3, tmpVec4 };
		result.append(store[3][num / 1000 % 10]);
		result.append(store[2][num / 100 % 10]);
		result.append(store[1][num / 10 % 10]);
		result.append(store[0][num % 10]);
		return result;
	}
};

