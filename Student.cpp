#include "Student.h"
#include <iostream>
#include <string.h>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int stdid, char sname[]) {
    studentId = stdid;
    strcpy(name,sname);
}

// Display StudentId and Name
void Student::display() {

  cout<<"Student ID : "<<studentId<<endl;
  cout<<"Name : "<<name<<endl;
  
}
