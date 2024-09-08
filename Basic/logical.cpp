#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Enter another two numbers: ";
    cin >> c >> d;
    if(a<b && cout << b << endl){

        c=a;
        d=b;
    }
    //  if(a<b || cout << b << endl){
    //     c=a;
    //     d=b;
    // }
    cout << c << " " << d << endl;
}