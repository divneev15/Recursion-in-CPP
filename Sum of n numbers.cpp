// Name: Divneev singh
// PRN: 24070123043
// Branch: EnTC A2

#include<iostream>
using namespace std;

int sum(int n)
{
    if (n <= 1)
        return n;
    else 
        return n + sum(n - 1);
}

int main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    cout << "Sum is: " << sum(num);
    return 0;
}

/*
SAMPLE OUTPUT ::

Enter a number:
5
Sum is: 15
*/
