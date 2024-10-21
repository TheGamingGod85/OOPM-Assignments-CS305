#include <iostream>
#include <string>
using namespace std;

class Person{
protected:
    string name;
    int age;
public:
    void getDetails() {
        cout<<"Enter name: ";
        cin >> name;
        cout<<"Enter age: ";
        cin >> age;
    }
};
class Student : public Person {
protected:
    int rollNum;
    double averageMarks;
    double marks[4];
public:
    void getAcademic() {
        cout<<"Enter Roll Number: ";
        cin >> rollNum;
        for (int i = 0; i<4; i++) {
            cout<<"Enter marks for subject - "<<i+1<<" (Out of 100): ";
            cin >> marks[i];
        }
        calculateAverageMarks();
    }
    void calculateAverageMarks() {
        double sum = 0;
        for (double mark : marks) {
            sum += mark;
        }
        averageMarks = sum / 4;
    }
    double getAverageMarks() {
        return averageMarks;
    }
};
class Graduate : public Student {
private:
    string subject;
    char empCase;
    bool isEmployed;
public:
    void getEmployment() {
        cout<<"Enter Field of Study: ";
        cin >> subject;
        cout<<"Employed (Y for Yes / N for No): ";
        cin >> empCase;
        switch (empCase) {
            case 'y': case 'Y':
                isEmployed = true;
                break;
            case 'n': case 'N':
                isEmployed = false;
                break;
        }
    }
    bool getEmploymentStatus() {
        return isEmployed;
    }
    void displayDetails() {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Subject: "<<subject<<endl;
        cout<<"Average Marks: "<<averageMarks<<endl;
    }
};
void GenerateReport(Graduate grads[], int year, int students) {
    cout<<"Report for the Year: "<<year<<endl;
    int workingCount = 0, nonWorkingCount = 0, firstDivCount = 0;
    Graduate topStudent = grads[0];
    for (int i = 0; i < students; i++) {
        if (grads[i].getEmploymentStatus()) {
            workingCount++;
        } else {
            nonWorkingCount++;
        }
        if (grads[i].getAverageMarks() >= 70) {
            firstDivCount++;
        }
        if (grads[i].getAverageMarks() > topStudent.getAverageMarks()) {
            topStudent = grads[i];
        }
    }
    cout<<"Number of Working Graduates: "<<workingCount<<endl;
    cout<<"Number of Non-Working Graduates: "<<nonWorkingCount<<endl;
    topStudent.displayDetails();cout << "% of Graduates This Year That Are Non-Working: " << (nonWorkingCount * 100.0 / students) << "%" << endl;
    cout << "% of First Divisions: "<< (firstDivCount * 100.0 / students) << "%" << endl;
}
int main() {
    int studentNum, sessionYear;
    cout<<"Enter Year: ";
    cin >> sessionYear;
    cout<<"Enter Number of Students: ";
    cin >> studentNum;
    Graduate people[studentNum];
    for (int i=0; i < studentNum; i++) {
        cout<<"Now Entering Details For Student: "<<i+1<<": "<<endl;
        people[i].getDetails();
        people[i].getAcademic();
        people[i].getEmployment();
    }
    GenerateReport(people, sessionYear, studentNum);
    return 0;
}
