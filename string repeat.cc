#include <iostream>
#include <string>
using namespace std;

string StringRepeat(string str, short count, string seprator = "#")
{

    string res = " ";
    for (short i = 0; i < count; i++)
    {
        if (i != count - 1)
        {
            res += str + seprator;
        }
        else   res += str ;
    }

    return res;
}

int main()
{
    cout << StringRepeat("osama", 4) << endl;
}