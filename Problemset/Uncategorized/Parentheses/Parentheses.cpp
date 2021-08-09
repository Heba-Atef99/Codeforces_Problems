#include<iostream>
#include<string>

using namespace std;

typedef char entryType;

class Node
{
private:
	entryType data;
	Node* next;

public:
	Node()
	{
		next = NULL;
	}

	entryType get_data()
	{
		return data;
	}

	void set_data(entryType d)
	{
		data = d;
	}

	Node* get_next()
	{
		return next;
	}

	void set_next(Node* n)
	{
		next = n;
	}
};

//stack implementation
//only need: Push, Pop, empty, top
class Stack
{
private:
	Node* top;
	int size;

public:
	Stack()
	{
		size = 0;
		top = NULL;
	}

	void Push(entryType d)
	{
		Node* pn = new Node;
		pn->set_data(d);
		pn->set_next(top);
		top = pn;
		size++;
	}
	void Pop()
	{
		Node* pn;
		pn = top->get_next();
		delete[] top;
		top = pn;
		size--;
	}
	bool Is_Empty()
	{
		return (size == 0);
	}

	entryType Top_Element()
	{
		return top->get_data();
	}

	~Stack()
	{
		//delete all the stack
		while (top != NULL)
			this->Pop();
	}
};

bool is_balanced(string brackets);
bool is_open(char p);
bool is_pair(char ob, char cb);

int main_fn()
{
	int n;
	cin >> n;

	string* brackets = new string[n];
	//make sure that the allocated variable is valid
	if (brackets == NULL)
	{
		cout << "Memory Fault\n";
		return 1;
	}

	//take inputes from user
	for (int i = 0; i < n; i++)
	{
		cin >> brackets[i];
	}

	//determine whether the brackets are balanced or not
	for (int i = 0; i < n; i++)
	{
		if (is_balanced(brackets[i]))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	
	delete[] brackets;
	return 0;
}

//check if the parantheses are balanced 
bool is_balanced(string brackets)
{
	char b = brackets[0];
	int pair_count = 0;

	Stack expresion;

	if (is_open(b))
	{
		for (int i = 0; i < brackets.length(); i++)
		{
			b = brackets[i];

			if (is_open(b))
				expresion.Push(brackets[i]); //save the open brackets in stack

			else if (!expresion.Is_Empty())
			{
				//compare the closing bracket with the last open bracket saved in stack
				if (is_pair(expresion.Top_Element(), b))
				{
					expresion.Pop();
					pair_count++;
				}
				else
					break;
			}
		}
	}

	//check if the pairs are forming the whole length of the brackets
	return (pair_count * 2 == brackets.length());
}

//check if the bracket is opening bracket or not
bool is_open(char p)
{
	return (p == '(' || p == '[' || p == '{' || p == '<');
}

//check if two brackets are considered pair or not
bool is_pair(char ob, char cb)
{
	switch (ob)
	{
	case '(':
		return cb == ')';
		break;

	case '{':
		return cb == '}';
		break;

	case '[':
		return cb == ']';
		break;

	case '<':
		return cb == '>';
		break;

	default:
		return false;
		break;
	}
}