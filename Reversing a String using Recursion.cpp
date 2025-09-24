// Divneev Singh
// 24070123043
// EnTC A2

#include <iostream>
using namespace std;

int length(char *str) 
{
    int l = 0;
    while (str[l] != '\0') 
    {
        l++;
    }
    return l;
}

void reverse(char *str, int i, int n)  
{ 
    if (i == n) 
        return;  
    reverse(str, i + 1, n);  
    cout << str[i]; 
}

int main() 
{ 
    char str[50]; 
    cout << "Enter a string: ";
    cin >> str;

    int n = length(str);  
    cout << "Reversed string is: ";
    reverse(str, 0, n); 
    cout << endl;
    return 0; 
}
/* Sample Output
Enter a string: hello
Reversed string is: olleh*/
