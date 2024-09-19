#include<iostream>
#include<stack>
#include<string>
using namespace std;
// Функція для перевірки, чи відкриваються два символи
// і закриття того ж типу.
bool ArePair(char opening, char closing)
{
	if (opening == '(' && closing == ')') return true;
	else if (opening == '{' && closing == '}') return true;
	else if (opening == '[' && closing == ']') return true;
	return false;
}
bool AreParanthesesBalanced(string exp)
{
	stack<char>  S;
	for (int i = 0;i < exp.length();i++)
	{
		if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
			S.push(exp[i]);
		else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			if (S.empty() || !ArePair(S.top(), exp[i]))
				return false;
			else
				S.pop();
		}
	}
	return S.empty() ? true : false;
}

int main()
{
	string exp;
	cout << "Enter an expression:  "; 
	cin >> exp;
	if (AreParanthesesBalanced(exp))
		cout << "Correctly\n";
	else
		cout << "Not correct\n";
}