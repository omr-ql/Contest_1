#include <iostream>
using namespace std;
int main()
{
    char var;
    cin >> var;
    if (var >= 97 && var < 122)
    {
        var = var + 1;
        cout << var << endl;
    }
    else if (var <= 122)
    {
        var = var - 25;
        cout << var << endl;
    }
}