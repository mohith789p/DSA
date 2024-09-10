#include<iostream>
using namespace std;
int main(){
    int i = 1,n;
    cout << "Enter the number: ";
    cin >> n;
    for(int j = 1; j <= n; j++) {
        for(int k = 1; k <= n; k++) {
            cout << i << " ";
            i++;
        }
        cout << endl;
    }
}