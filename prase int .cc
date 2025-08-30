#include <iostream>
#include<string>
using namespace std;

// return numbers only

int nums_only(string str)
{
    string nums;
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) >= '0' && str.at(i) <= '9')
        {
            nums+=str.at(i);
        }
    }
    int res = stoi(nums);
    return res;
}

int main(){
    cout<<nums_only("123hi")<<endl;
}