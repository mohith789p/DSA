#include<iostream>
using namespace std;
int main(){
    char ch1,ch2,ch;
    cout << "Enter starting character: ";
    cin >> ch1;
    cout << "Enter ending character: ";
    cin >> ch2;
    if(ch1 < ch2){
        for(int i = ch1; i <= ch2; i++){
            ch = ch1;
            for(int j = ch1; j <= ch2; j++) {
                cout << ch << " ";
                ch += 1;
            }
            cout << endl;
        }
    } else {
        cout << "Invalid input. Starting character should be less than ending character." << endl;
    }
}