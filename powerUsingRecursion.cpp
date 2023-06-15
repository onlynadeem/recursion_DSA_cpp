//                                             made by NADEEM

#include <iostream>
using namespace std;

//Complete this function
int RecursivePower(int n, int p)
{

    if (p == 0)
    {
        return 1;
    }

    return n * RecursivePower(n, p - 1);
}

int main()
{
    int T;
    cin >> T; //testcases
    while (T--)
    {
        int n, p;

        //taking n and p as inputs
        cin >> n >> p;

        //calling RecursivePower() function
        cout << RecursivePower(n, p) << endl;
    }
    return 0;
}