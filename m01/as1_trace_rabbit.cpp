#include <iostream>
using namespace std;

int rabbit( int n );

int main() {
    int input;
    cout << "Enter number of months: ";
    cin >> input;
    cout << "Number of rabbits: " << rabbit(input);
}

int rabbit( int n ) {
cout << "Enter rabbit: n = " << n << endl;
            
    int rab;
    if(n<=2) rab = 1; // if n is 1 or 2 return as 1
    else
        rab = rabbit(n-1) + rabbit(n-2); // if n > 2
        
cout << "Leave rabbit: n = " << n << "value = " << rab << endl;
    return rab;
}