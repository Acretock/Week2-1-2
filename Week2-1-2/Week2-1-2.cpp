#include <string>
#include <iostream>
using namespace std;

bool Polyndrome(string s) {
	if(s.empty())
		return true;
	string temp(s);
	reverse(begin(temp), end(temp));
	if (s == temp)
		return true;
	else
		return false;
}

int main()
{
	string stroka;
	cin >> stroka;
	cout << Polyndrome(stroka);
}
