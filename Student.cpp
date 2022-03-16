#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

// Assign studentId and name
Student::assignDetails(int stdid, char sname[]) {
    studentId = stdid;
    strcpy(name,sname);
}

// Display StudentId and Name
Student::display() {

  cout<<"Student ID : "<<studentId<<endl;
  cout<<"Name : "<<name<<endl;
  
}
