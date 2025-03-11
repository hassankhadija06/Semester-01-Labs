#include<iostream>
using namespace std;

struct Student{
		string firstname;
		string lastname;
		int marks;
		int rollno;

         //function to display student information
		void displayStudentinfo(){
			cout<<"Name: "<<firstname<<" "<<lastname<<endl;
			cout<<"Marks: "<<marks;
		}
		
	};
//
int main(){
//	
//Student std1;
//std1.firstname="Khadija";
//std1.lastname="Hassan";
//std1.marks=1094;
//std1.rollno=9;


//	calling the member function to display student information
//	std1.displayStudentinfo();


//int numStudents;
//    cout << "Enter number of students: ";
//    cin >> numStudents;
//    Student students[numStudents];
//
//    // Taking input for each student
//    for (int i = 0; i < numStudents; i++) {
//        cout << "Enter details for student " << i + 1 << ":\n";
//        cout << "First Name: ";
//        cin >> students[i].firstname;
//        cout << "Last Name: ";
//        cin >> students[i].lastname;
//        cout << "Roll Number: ";
//        cin >> students[i].rollno;
//        cout << "Marks: ";
//        cin >> students[i].marks;
//    }
//    // Displaying the information for each student
//    for (int i = 0; i < numStudents; i++) {
//        cout << "\nStudent " << i + 1 << " Information:\n";
//        students[i].displayStudentInfo();
//    }

//using pointers 
 int numStudents;
    cout << "Enter number of students: ";
    cin >> numStudents;

    Student *students = new Student[numStudents]; // Dynamically allocated array

    // Taking input for each student using pointer
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "First Name: ";
        cin >> students[i].firstname;
        cout << "Last Name: ";
        cin >> students[i].lastname;
        cout << "Roll Number: ";
        cin >> students[i].rollno;
        cout << "Marks: ";
        cin >> students[i].marks;
    }

    // Displaying the information for each student using pointer
    for (int i = 0; i < numStudents; i++) {
        cout << "\nStudent " << i + 1 << " Information:\n";
        students[i].displayStudentinfo();
    }

    delete[] students; // Freeing allocated memory
    return 0;
}



