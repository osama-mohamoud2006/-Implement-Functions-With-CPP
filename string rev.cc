#include <iostream>
using namespace std;

string rev(string str)
{
    string res = "";
    for(int i= str.length()-1; i>=0; i--){
        
     res+= str[i];
    }
    return res;
}

int main(){
    cout<<rev("hi")<<endl;
}