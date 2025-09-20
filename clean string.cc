#include<iostream>
using namespace std;

string CleanString(string str){
    // remove special chars and return only letters,_,nums 

    string res = "";
    
    for(int i=0; i<res.length(); i++)
    {
        // special char from 33 -> 47
        if(!(str.at(i)>=33 && str.at(i)>=47) ){
            res+=str.at(i);
        }
    }
}

int main(){
    cout<<"CLEANED STRING: "<<CleaN
}