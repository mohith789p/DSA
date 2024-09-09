#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(num % 2){
        cout << num << " is odd." << endl;
    } else {
        cout << num << " is even." << endl;

    }
}