#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int num_st;
    cout << "Enter the num of students :" << endl;
    cin >> num_st;

    if (num_st < 1 || num_st > 100) {
        cerr << "Invalid Input" << endl;
        return 0;
    }

    int grade;
    int sum = 0;
    for (int i = 0; i < num_st; i++) {
        cout<<"Enter grade for student # "<<i+1<<": " << endl;
        cin >> grade;
        if (grade < 1 || grade > 100) {
            cout<<"Invalid Input" << endl;
            i--;
            continue;
        }
        sum += grade;

    }

    double average = 1.0* sum / num_st;
    cout << fixed << setprecision(2);
    cout<<"Average grade is "<<average<<endl;
}
