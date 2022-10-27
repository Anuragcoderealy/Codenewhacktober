#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
// The function calculate_Postfix returns the final answer of the expression after calculation
int calculate_Postfix(string  post_exp)
{
    stack <int> stack;
    int lenth = post_exp.length();
    // loop to iterate through the expression
    for (int i = 0; i < lenth; i++)
    {
        
        if ( post_exp[i] >= '0' &&  post_exp[i] <= '9')
        {
            stack.push( post_exp[i] - '0');
        }
        // if the character is an operator we enter else block
        else
        {
            // pop the top two elements from the stack and save them in two integers
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            //performing the operation on the operands
            switch (post_exp[i])
            {
                case '+': // add
                          stack.push(b + a);
                          break;
                case '-': // sub
                          stack.push(b - a);
                          break;
                case '*': // mul
                          stack.push(b * a);
                          break;
                case '/': // div
                          stack.push(b / a);
                          break;
                case '^': // exp
                          stack.push(pow(b,a));
                          break;
            }
        }
    }
    //the calculated result
    return stack.top();
}
// driver function
int main()
{
    //we save the postfix expression to calculate in postfix_expression string
    string postfix_expression = "70+65^2*5/-";
    cout<<"The answer after calculating the postfix expression is : ";
    cout<<calculate_Postfix(postfix_expression);
    return 0;
}
