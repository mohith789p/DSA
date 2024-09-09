#include<iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    if(marks > 90){
        cout << "Grade A" << endl;
    } else if(marks > 75){
        cout << "Grade B" << endl;
    } else if(marks > 60){
        cout << "Grade c" << endl;
    } else {
        cout << "Pass" << endl;
        }
    }