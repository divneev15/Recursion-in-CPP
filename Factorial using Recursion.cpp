// Divneev 
// 24070123043
// EnTC A2

#include<iostream>
using namespace std;

unsigned long long fact(int n) {
    if (n == 0) {
        return 1;   // Base case: 0! = 1
    }
    return n * fact(n - 1);  // Recursive call
}

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial is: " << fact(n) << endl;
    }

    return 0;
}
/*
Enter an integer: 5
Factorial is: 120
*/
