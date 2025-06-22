#include <iostream>
#include <stack>
#include <string>
using namespace std;

int precedence(char op)
{
    if (op == '+' || op == '-')
    {
        return 1;
    }
    else if (op == '*' || op == '/')
    {
        return 2;
    }
    return 0;
}

bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

string infixToPostfix(const string &infix)
{
    stack<char> operators;
    string postfix = "";

    for (char c : infix)
    {
        if (isalnum(c) || c == '.')
        {
            postfix += c;
        }
        else if (c == '(')
        {
            operators.push(c);
        }
        else if (c == ')')
        {
            while (!operators.empty() && operators.top() != '(')
            {
                postfix += operators.top();
                operators.pop();
            }
            if (!operators.empty() && operators.top() == '(')
            {
                operators.pop();
            }
        }
        else if (isOperator(c))
        {
            while (!operators.empty() && precedence(c) <= precedence(operators.top()))
            {
                postfix += operators.top();
                operators.pop();
            }
            operators.push(c);
        }
    }

    while (!operators.empty())
    {
        postfix += operators.top();
        operators.pop();
    }

    return postfix;
}

int main()
{
    string infix_expression;
    getline(cin, infix_expression);
    string postfix_expression = infixToPostfix(infix_expression);
    cout << "The RPN is: " << postfix_expression << endl;
    return 0;
}
