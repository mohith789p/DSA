#include<iostream>
using namespace std;
int main(){
    int num,sum = 0;
    cout << "Enter the number: ";
    cin >> num;
    int i = 0;
    while(i < num - 1){
        i++;
        if(i%2){
            sum += i;
        } else {
            continue;
        }
    }
    cout << "The sum of odd numbers: " << sum << endl;


}