#include <iostream>
using namespace std;
int main()
{
    string code, guess;
    int blackPegs = 0, whitePegs = 0;
    cin >> code >> guess;
    for(int i=0;i<4;i++)
    {
        if (code[i] == guess[i])
            blackPegs++;
        else
        {
            for (int j = 0; j < 4; j++)
            {
                if (code[j] == guess[i])
                    whitePegs++;
            }
        }
    }
    cout << blackPegs << " " << whitePegs << endl;
}