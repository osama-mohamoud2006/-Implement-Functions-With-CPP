#include <vector>
#include <iostream>
using namespace std;

short min(vector<int> nums)
{
    short Min = 0;
    for (int n : nums)
    {
        if (n < Min)
            Min = n;
    }
    return Min;
}

int main()
{
    vector<int> v{-1, 2, 3, -4, 0, 5, 6, 7};

    cout<<"the min is "<<min(v)<<endl;
}