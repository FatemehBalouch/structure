#include <iostream>
using namespace std;

// ساختار برای اطلاعات دانشجو
struct Student {
    char name[50];
    int studentId;
    float gpa;
};

// ساختار برای اطلاعات درس
struct Course {
    char name[50];
    int courseCode;
    int credits;
};

// ساختار برای ثبت نام دانشجو در درس
struct Enrollment {
    Student student;
    Course course;
    char semester[20];
};

int main() {
    // ایجاد یک دانشجو
    Student stu1;
    cout << "Enter student name: ";
    cin.getline(stu1.name, 50);
    cout << "Enter student ID: ";
    cin >> stu1.studentId;
    cout << "Enter GPA: ";
    cin >> stu1.gpa;
    cin.ignore(); // برای پاک کردن بافر ورودی

    // ایجاد یک درس
    Course cs101;
    strcpy(cs101.name, "Introduction to Programming");
    cs101.courseCode = 101;
    cs101.credits = 3;

    // ثبت نام دانشجو در درس
    Enrollment enroll1;
    enroll1.student = stu1;
    enroll1.course = cs101;
    strcpy(enroll1.semester, "Fall 2023");

    // نمایش اطلاعات
    cout << "\n--- Enrollment Information ---\n";
    cout << "Student: " << enroll1.student.name << endl;
    cout << "ID: " << enroll1.student.studentId << endl;
    cout << "Course: " << enroll1.course.name << " (" << enroll1.course.courseCode << ")\n";
    cout << "Credits: " << enroll1.course.credits << endl;
    cout << "Semester: " << enroll1.semester << endl;

    return 0;
}
