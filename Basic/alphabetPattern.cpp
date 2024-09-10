#include<iostream>
using namespace std;
int main(){
    char ch1,ch2,ch;
    cout << "Enter any character: ";
    cin >> ch2;
    ch1 = (ch2 < 'a')? 'A' : 'a';
    ch = ch1;
    for (int i = ch1; i <= ch2; i++) {
        for(int j = ch1; j <= ch2; j++) {
            cout << ch << ' ';
            ch ++;
        }
        cout << endl;
    }
}