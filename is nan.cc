#include <iostream>
using namespace std;

bool isNAN(string str)
{
    for (char &st : str)
    {
        if (!(st >= '0' && st <= '9'))
        {
            return true; // if isn't num
        }
    }
    return false;
}

int main()
{
    cout << isNAN("11G123") << endl;
}