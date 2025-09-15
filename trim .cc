#include <iostream>
using namespace std;

string trimLeft(string str)
{
    string res = " ";
    //$$$$$$$$$$string
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != ' ')
            return str.substr(i, str.size() - 1);
    }
}

string trimRight(string str)
{
    string res = " ";
    for (int i = str.size() - 1; i >= 0; i--)
    {
        if (str.at(i) != ' ')
            return str.substr(0, i + 1);
    }
}

string trim(string str, char spe = '#', string option = "all")
{
    string res = "";
    short countTheNotCharFirst = 0;
    for (short i = 0; i < str.size(); i++)
    {
        if (str.at(i) == spe)
            countTheNotCharFirst++;
        else
            break;
    }

    short countTheNotCharLast = 0;

    for (short i = str.size() - 1; i >= 0; i--)
    {
        if (str.at(i) == spe)
            countTheNotCharLast++;
        else
            break;
    }
    if (option == "all")
    {
        for (int i = countTheNotCharFirst; i <  str.size()-countTheNotCharLast; i++)
        {
            res += str[i];
        }
    }
    else if (option == "left")
    {
        for (int i = 0; i <  str.size()-countTheNotCharLast; i++)
        {
            res += str[i];
        }
    }
    else if (option == "right")
    {
        for (int i = countTheNotCharFirst; i < str.length(); i++)
        {
            res += str[i];
        }
    }
    return res; 
}
int main()
{
    cout << "       oidjuu" << endl;
    cout << trimLeft("       oidjuu") << endl;

    cout << "\n"
         << "fsdu       " << endl;
    cout << trimRight("fsdu       ") << endl;

    cout << "trim all: " << trimLeft(trimRight(" fsdajiofdoijusdf      "));

    cout<<"\n\n\n";
    cout<<trim("####DSIOD####",'#',"all")<<endl;
}