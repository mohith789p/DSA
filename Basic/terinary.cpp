#include<iostream>
using namespace std;
int main() {
    int a,b,result;
    cout << "Enter two number: ";
    cin >> a >> b;
    result = ( a>b ) ? a : b;
    cout << "Maximum number is: " << result << endl;
}
