#include <iostream>
using namespace std;

string upper_case(string s)
{
    string res = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            res += (s.at(i) - char(32)); // space is 32 in ascii table
        else
            res += s.at(i);
    }
    return res;
}

string lower_case(string s)
{
    string res = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z') // s
        {
            s.at(i) += char(32); // space is 32 in ascii table
        }

        res += s.at(i);
    }
    return res;
}

string swap_case(string str)
{
    string res = " ";
    for (char st : str)
    {
        if (st >= 'a' && st <= 'z')
        {
            res += (st - char(32));
        }
        else if (st >= 'A' && st <= 'Z')
        {
            res +=  (st + char(32));
        }
    }
    return res;
}

int main()
{
    cout << "UPPER: " << upper_case("osa2ma") << endl;
    cout << "lower: " << lower_case("OSA3MA") << endl;
    cout<<"invert: "<<swap_case("OsAa")<<endl;
}