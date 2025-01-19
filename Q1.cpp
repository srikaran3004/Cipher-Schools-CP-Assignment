#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    float marks[3];
};

void inputStudentDetails(Student* student) {
    cout << "Enter student's name: ";
    cin.ignore();
    getline(cin, student->name);
    cout << "Enter roll number: ";
    cin >> student->rollNumber;
    cout << "Enter marks for 3 subjects: ";
    for (int i = 0; i < 3; i++) {
        cin >> student->marks[i];
    }
}

float calculateAverage(const Student* student) {
    float sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += student->marks[i];
    }
    return sum / 3;
}

void displayStudentDetails(const Student* student, float average) {
    cout << "\nStudent Details:" << endl;
    cout << "Name: " << student->name << endl;
    cout << "Roll Number: " << student->rollNumber << endl;
    cout << "Marks: ";
    for (int i = 0; i < 3; i++) {
        cout << student->marks[i] << " ";
    }
    cout << "\nAverage Marks: " << average << endl;
}

int main() {
    Student* student = new Student;
    inputStudentDetails(student);
    float average = calculateAverage(student);
    displayStudentDetails(student, average);
    delete student;
    return 0;
}
