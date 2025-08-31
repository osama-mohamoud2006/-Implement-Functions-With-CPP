#include <iostream>
using namespace std;

string trimLeft(string str)
{
    string res = " ";
    //$$$$$$$$$$string
    for (int i=0; i<str.size();i++)
    {
        if (str[i] != ' ')
           return str.substr(i,str.size()-1); 
    }
    
}

string trimRight(string str)
{
    string res = " ";
    for (int i = str.size() - 1; i >= 0; i--)
    {
        if(str.at(i)!=' ') return str.substr(0,i+1);
       
    }
     
}

int main()
{
    cout << "       oidjuu" << endl;
    cout << trimLeft("       oidjuu") << endl;

    cout<<"\n"<<"fsdu       "<<endl;
    cout<<trimRight("fsdu       ")<<endl;

    cout<<"trim all: "<<trimLeft(trimRight(" fsdajiofdoijusdf      "));
}