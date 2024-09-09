#include<iostream>
using namespace std;
int main(){
    int num;
    bool isPrime = true;
    cout << "Enter a number: ";
    cin >> num;
    for(int i = 2; i < num; i++) { // i < num or i * i <= num 
        if(num % i == 0) {
            isPrime = false;
        }
    }
    if(isPrime){
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;

}
}
