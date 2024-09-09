#include<iostream>
using namespace std;
int main(){
    char letter;
    cout << "Enter a alphabet: ";
    cin >> letter;
    if (letter >= 'a' && letter <= 'z'){
        cout << "Given alphabet is in lowercase" << endl;
    } else {
        cout << "Given alphabet is in uppercase" << endl;
    }
}