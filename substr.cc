#include <iostream>
using namespace std;

string SubStr(string str, short start, short length , bool inc_end=false,short count_space=0 )
{
    string res = "";
    for (int i = start; (inc_end ? i<=length : i<length) ; i++)
    {
        if(str[i]==' ') count_space++;
        res+=str[i];
    }
 
    return res ;
}

int main(){
    string w = "helloworld!";
    short count=0;
    cout<<"Full string is: "<<w<<endl;
    cout<<"the sub str from start length 5 "<<SubStr(w,0,5)<<endl;
        cout<<"the sub str from start length 5 "<<SubStr(w,0,5,true,count)<<endl;
        cout<<"the count of space: "<<count<<endl;
}