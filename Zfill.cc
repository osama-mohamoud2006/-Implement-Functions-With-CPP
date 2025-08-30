#include <iostream>
using namespace std;
//4 len
//7 width 
string zfill(string str, short width, string Tofill)
{
    short len = str.length();
    for (short i = 0; i < str.length(); i++)
    {
        if(len!=width){
            str = Tofill+str;
            len++;
        }else break;
    }
    return str; 
}

int main(){
    cout<<zfill("5500",7,"0")<<endl;
    cout<<"the length of res now is: "<<zfill("5500",7,"0").size()<<endl;
}