#include <vector>
#include <iostream>
using namespace std;

int sum(vector<int> &nums, char op = '+')
{
    int sumv = 0;
    if (op == '*' || op == '/')
        sumv = 1;
    for (int n : nums)
    {

        switch (op)
        {

        case '+':
            sumv += n;
            break;

        case '-':
            sumv -= n;
            break;

        case '*':

            sumv = sumv * n;
            break;

        case '/':
            sumv /= n;
            break;

        default:
            break;
        }
    }
    return sumv;
}

int main()
{
    vector<int> v{1, 2, 3, 4, 5};
    cout << sum(v, '*') << endl;
}
