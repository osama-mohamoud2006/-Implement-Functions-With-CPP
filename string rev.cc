#include <iostream>
#include <string>
using namespace std;

string rev(string str)
{
    string res = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {

        res += str[i];
    }
    return res;
}
string revF(string str)
{
    string res;
    for (int i = str.size() - 1; i >= 0; i--)
    {
        if(str[i]==' ') res+=' ';
       else  res+=str[i];

    }
    return res;
}



int main()
{
    cout << revF("hi world") << endl;
    ;
}