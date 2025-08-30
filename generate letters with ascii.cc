#include <iostream>
#include <iomanip>
using namespace std;

void print_range_letter(char start, char end)
{
    if (isdigit(start) == false && isdigit(end) == false)
    {
        for (char s = start; s <= end; s++)
        {
            if (isdigit(s) == false && ispunct(s) == false)
                cout << s << setw(3);
        }
    }
    else
        cout << "\nit must be char not other things!\n";
}

int main()
{
    print_range_letter('A', 'z');
}