#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

bool isoperator(string com)
{
    if(com == "+" || com == "-" || com == "*" || com == "/" )
        return true;
    else
        return false;

}


int perform_operation(char operation, int operand1, int operand2)
{
	if(operation == '+') return operand1 +operand2;
	else if(operation == '-') return operand1 - operand2;
	else if(operation == '*') return operand1 * operand2;
	else if(operation == '/') return operand1 / operand2;

	else cout<<"Unexpected Error \n";
	return -1;
}



void rator_operation(stack<int> &box, string str)
{
   if(box.size() > 1)
    {
    int a = box.top();
    box.pop();
    int b = box.top();
    box.pop();
    box.push(perform_operation(str[0],b,a)); }

    else if(box.size() == 1)
    {
        if(str[0] == '-')
        {
         int temp = box.top();
         temp = 0-temp;
         box.pop();
         box.push(temp);
         return;
        }

    }


    else
    {
        cout << "Error" << endl;
    }


}




int main()
{
    string k;
    getline(cin, k);

    char arr[k.length()+1];

     for(int i = 0; i < k.length()+1; i++)
       arr[i] = k[i];

    char *str;
    str =  strtok (arr," ");
    stack<int> box;

    while(str != NULL)
    {
        if(isoperator(str))
        {
       // cout << str << "str condition"<< endl;
        rator_operation(box,str);
        }

        else
        {
         int k = atoi(str);
         box.push(k);
        }

        str = strtok(NULL, " ");
    }

    cout << box.top();


}
