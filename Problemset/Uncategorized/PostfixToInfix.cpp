#include<iostream>
#include<string>
#include<stack>

using namespace std;
string postfix_to_infix(string postfix_exp);
bool isPrecedent(char op1, char op2);
bool isOperator(char op);
string need_parenthesis(char opt, string opd);

int fn_main()
{
	int n;
	cin >> n;
	string postfix_exp;
	string infix_exp;
	for (int i = 0; i < n; i++)
	{
		cin >> postfix_exp;
		infix_exp = postfix_to_infix(postfix_exp);
		cout << infix_exp << "\n\n";
	}


	return 0;
}

//notice that parinthesis are put if the first operator has lower precedent than the second
string postfix_to_infix(string postfix_exp)
{
	stack <string> operands;
	string infix_exp;
	string opd1, opd2, op;

	for (int i = 0; i < postfix_exp.length(); i++)
	{
		//check if the character is an operand
		if (!isOperator(postfix_exp[i]))
		{
			op = postfix_exp[i];
			operands.push(op);
		}

		else
		{
			if (operands.size() >= 2)
			{
				opd2 = need_parenthesis(postfix_exp[i], operands.top());
				operands.pop();

				opd1 = need_parenthesis(postfix_exp[i], operands.top());
				operands.pop();

				infix_exp = opd1 + postfix_exp[i] + opd2;
				operands.push(infix_exp);
			}

			else
			{
				return "Error => input not sufficient values in the expression";
			}
		}
	}

	infix_exp = (operands.size() == 1)? operands.top() : "Error => The user input has too many values";
	return infix_exp;
}

bool isPrecedent (char op1, char op2)
{
     if (op1 == '^') return true;

     if(op1 == '*' || op1 == '/') return (op2 != '^');

     if(op1 == '+' || op1 == '-') return (op2 != '^' && op2 != '*' && op2 != '/');

     return false;
}

bool isOperator(char op)
{
     switch (op)
     {
         case '+':
         case '-':
         case '/':
         case '^':
         case '*':
             return true;
             break;
         default:
             return false;
     }
}

string need_parenthesis (char opt, string opd)
{	
	if (opt == '*' || opt == '/' || opt == '^')
	{
		opd = (opd.length() > 1)? '(' + opd + ')' : opd;
	}

	return opd;
}