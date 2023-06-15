//                                             made by NADEEM
#include <iostream>
using namespace std;

// Complete this function
int sumOfDigits(int n)
{
    if (n < 10)
        return n;
    return (n % 10) + sumOfDigits(n / 10);
}

int main()
{
    int T;

    //taking testcases
    cin >> T;
    while (T--)
    {
        int n;

        //taking input n
        cin >> n;

        //calling method sumOfDigits()
        cout << sumOfDigits(n) << endl;
    }
    return 0;
}