#include <iostream>
using namespace std;

int main() {

    // Storing memory address location into variables

    int age = 19;
    int *pAge = &age;

    double gpa = 4.0;
    string name = "Oliver";
    
    cout << pAge << endl;
    cout << *pAge << endl; // De-referencing the pointer

    cout << *&gpa << endl;


    return 0;
}