#include <iostream>
#include <string>
using namespace std;

string StringRepeat(string str, short count, string seprator = "#", bool showend = false)
{

    string res = " ";
    for (short i = 0; i < count; i++)
    {
        if (showend == false)
        {

            if (i != count - 1)
            {
                res += str + seprator;
            }
            else
                res += str;
        }
        else
            res += str + seprator;
    }

    return res;
}

int main()
{
    cout << StringRepeat("osama", 4, " # ",true) << endl;
}