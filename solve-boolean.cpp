```cpp
#include <iostream>
#include <string>
using namespace std;

bool solveBoolean(string expression) {
    if(expression.empty())return false;
    bool result = true;
    int i = 0;
    while(i<expression.length())
    {
        if(expression[i]=='f'||expression[i]=='F')
            return false;
        else if(expression[i]=='t'||expression[i]=='T')
            i++;
        else
        {
            int j=i+1;
            while(j<expression.length()&&((expression[j]>' '&&expression[j]<'a')||(expression[j]>'z'&&expression[j]<'|')))
                j++;
            if(expression[j-1]== '&')
            {
                bool temp=true;
                i=j;
                while(i<expression.length())
                {
                    if(expression[i]=='f'||expression[i]=='F')
                        return false;
                    else if(expression[i]=='t'||expression[i]=='T')
                        i++;
                    else
                        return false;
                }
            }
            else if(expression[j-1] == '|')
            {
                bool temp1=false,temp2=true;
                i=j;
                while(i<expression.length())
                {
                    if(expression[i]=='f'&&temp1==false)
                        return false;
                    else if(expression[i]=='t'&&temp1==true)
                        {result=temp2;break;}
                    else if((expression[i]>' '&&expression[i]<'a')||(expression[i]>'z'&&expression[i]<'|'))
                    {
                        temp1=(temp1)?false:true;
                        i++;
                    }
                    else
                        return false;
                }
            }
        }
    }
    return result;
}

int main() {
    string expression;
    cout << "Enter the Boolean expression: ";
    cin >> expression;
    bool result = solveBoolean(expression);
    if (result) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}