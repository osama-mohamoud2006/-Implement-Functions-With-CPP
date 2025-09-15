#include <iostream>
using namespace std;

string SubStr(string str, short start, short length)
{
    string res = "";
    for (int i = start; i < length; i++)
    {
        res+=str[i];
    }
    return res ;
}

int main(){
    
}