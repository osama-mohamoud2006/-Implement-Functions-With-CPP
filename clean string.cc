#include <iostream>
using namespace std;

string CleanString(string str, bool AddNum = false)
{
    // remove special chars and return only letters,_,nums

    string res = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) >= 'A' && str.at(i) <= 'Z')
            res += str.at(i);
        else if (str[i] >= 'a' && str[i] <= 'z')
            res += str.at(i);
        else if ((str[i] >= '0' && str[i] <= '9') && AddNum == true)
        {
            res += str.at(i);
        }
    }
    return res;
}

int main()
{
    cout << "CLEANED STRING: " << CleanString("o1s#a#m#a",true) << endl;
}