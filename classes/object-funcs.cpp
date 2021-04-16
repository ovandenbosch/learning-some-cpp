#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        string major;
        double gpa;
        Student(string aName, string aMajor, double aGpa) {
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        bool hasHonors() {
            if(gpa >= 3.5) {
                return true;
            }
            return false;
        }
};

int main() {

    Student student1("Jim", "Business", 3.6);  
    Student student2("Tim", "Economics", 4.0);  
    Student student3("Kim", "English", 3.2); 

    cout << student1.hasHonors(); 

    return 0;
}