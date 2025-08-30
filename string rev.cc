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

        res += str[i];
    }
    return res;
}

string split(string str, string delmi = " ")
{
    short pos = 0;
    string Fi;
    string word;
    while ((pos = str.find(delmi)) != string::npos)
    {
        word = str.substr(0,pos);
        Fi +=revF(word)+delmi;
        str.erase(0,pos+delmi.length());

    }
    if(str!="")  Fi +=revF(str);

    return Fi; 
}

int main()
{
    cout << split("hi world") << endl;
    
}