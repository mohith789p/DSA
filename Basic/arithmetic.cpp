#include<iostream>
using namespace std;
int main() {
     int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int sum = a + b;
    int diff = b - a;
    int mul = a * b;
    int div = b / a;
    int rem = b % a;
    cout << "The sum is: " << sum << endl;
    cout << "The difference is: " << diff << endl;
    cout << "The Product is: " << mul << endl;
    cout << "The Division is: " << div;
    cout << " and Remainder is: " << rem << endl;
    // cout << !(a=b) <<endl;
}