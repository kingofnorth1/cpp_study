#include<iostream>
#include<vector>
#include "codeWar23_11.cpp"
#include "BayCar.cpp"

using namespace std;
int romanToInt(string t1);
string intToRoman(int t1);
long sumTwoSmallestNumbers(vector<int> numbers);
long sumTwoSmallestNumbersSort(vector<int> numbers);
bool valid_braces(std::string braces);
vector<vector<int>> multiplication_table(int t1);
vector<int> pick_peaks(vector<int> v);
int nthFibo(int t1);
int memory();

int main() {
	romanToInt("MDCLXVI");
	intToRoman(3666);
	vector<int> temp = { 3, 2, 3, 6, 4, 1, 2, 3, 2, 1, 2, 3 };
	sumTwoSmallestNumbers(temp);			//通过定义firstMin和secondMin取得最小结果
	sumTwoSmallestNumbersSort(temp);		//使用std::sort先进行排序，再将最小结果返回
	cout << valid_braces("{}()") << endl;				//有效符号，{[()]}
	multiplication_table(3);				//将int数转换为列表
	pick_peaks(temp);						//选择数组的峰值
    nthFibo(4);

    codeWar23_11 codewar;
    codewar.output();

    BuyCar buycar;
    buycar.nbMonths(12000, 8000, 1000, 1.5);

    memory();
    return 1;
}
