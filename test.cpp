#include <iostream>

using namespace std;

int main()
{
    fake_function(10);
}

bool fake_function(int num)
{
    if (num != 0)
    {
        cout << "Working properly" << endl;
        return true;
    }
    return false;
}
