#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX_STUDENTS = 100;
const int TOTAL_SUBJECTS = 5;
const int MAX_MARKS = 100;
const int TOTAL_MAX_MARKS = TOTAL_SUBJECTS * MAX_MARKS;

struct Student {
    string name;
    int rollNumber;
    int marks[TOTAL_SUBJECTS];
    int totalMarks;
    float average;
    char grade;
    string message;
};

// Global student array and count
Student students[MAX_STUDENTS];
int studentCount = 0;

// Function to calculate grade
void calculateGrade(Student &student) 
{
    student.totalMarks = 0;
    for (int i = 0; i < TOTAL_SUBJECTS; i++) 
	{
        student.totalMarks += student.marks[i];
    }
    student.average = student.totalMarks / (float)TOTAL_SUBJECTS;

    if (student.average >= 90) 
	{
        student.grade = 'A';
        student.message = "Excellent work! Keep it up!";
    } else if (student.average >= 75) 
	{
        student.grade = 'B';
        student.message = "Great job! You're doing very well.";
    } else if (student.average >= 50) 
	{
        student.grade = 'C';
        student.message = "Good effort. Try to push for more!";
    } else 
	{
        student.grade = 'D';
        student.message = "Needs improvement. Don't give up!";
    }
}

// Save student data to file
void saveToFile() 
{
    ofstream fout("students.txt");
    for (int i = 0; i < studentCount; i++) 
	{
        fout<<students[i].name<<endl;
        fout<<students[i].rollNumber<<endl;
        for (int j = 0 ; j < TOTAL_SUBJECTS ; j++) 
		{
            fout<<students[i].marks[j]<< " ";
        }
        fout << endl;
    }
    fout.close();
}

// Load student data from file
void loadFromFile()
{
    ifstream fin("students.txt");
    if (!fin) return;

    while (!fin.eof()) 
	{
        Student s;
        getline(fin, s.name);
        if(s.name.empty()) 
		break;
        fin >> s.rollNumber;
        for(int i = 0 ; i < TOTAL_SUBJECTS ; i++)
		{
            fin>>s.marks[i];
        }
        fin.ignore(); // consume the newline
        calculateGrade(s);
        students[studentCount++] = s;
    }
    fin.close();
}

void addStudent() 
{
    if (studentCount >= MAX_STUDENTS) 
	{
        cout<<"Maximum student limit reached.\n";
        return;
    }

    cout<<"\n------- Add New Student -------\n\n";
    cout<<"Enter full name: ";
    cin.ignore();
    getline(cin, students[studentCount].name);

    cout<<"Enter roll number: ";
    cin>>students[studentCount].rollNumber;

    cout<<"\nEnter marks for 5 subjects (0 to 100):\n\n";
    for (int i = 0; i < TOTAL_SUBJECTS; i++) 
	{
        cout<<"  Subject " << i + 1 <<": ";
        cin>>students[studentCount].marks[i];

        while (students[studentCount].marks[i] < 0 || students[studentCount].marks[i] > 100) 
		{
            cout<<"    Invalid! Enter again: ";
            cin>>students[studentCount].marks[i];
        }
    }

    calculateGrade(students[studentCount]);
    studentCount++;
    saveToFile();

    cout<<"\nStudent added successfully!\n";
}

void updateStudent()
{
    if (studentCount == 0)
	{
        cout<<"\nNo students to update.\n";
        return;
    }

    int roll;
    cout<<"\nEnter roll number to update: ";
    cin>>roll;

    for(int i = 0; i < studentCount; i++)
	{
        if(students[i].rollNumber == roll) 
		{
            cout<<"\nUpdating record for "<<students[i].name<<"\n";
            cout<<"Enter new marks:\n";
            for(int j = 0 ; j < TOTAL_SUBJECTS ; j++) 
			{
                cout << "  Subject " << j + 1 << ": ";
                cin >> students[i].marks[j];
                while(students[i].marks[j] < 0 || students[i].marks[j] > 100) {
                    cout <<"    Invalid! Enter again: ";
                    cin>>students[i].marks[j];
                }
            }
            calculateGrade(students[i]);
            saveToFile();
            cout<<"\nRecord updated.\n";
            return;
        }
    }

    cout<<"\nStudent with roll number "<<roll<<" not found.\n";
}

void deleteStudent() 
{
    if (studentCount == 0) 
	{
        cout<<"\nNo student records to delete.\n";
        return;
    }

    int roll;
    cout<<"\nEnter roll number to delete: ";
    cin>>roll;

    for(int i = 0 ; i < studentCount ; i++) 
	{
        if(students[i].rollNumber == roll) 
		{
            cout << "\nDeleting record of " << students[i].name << ".\n";
            for(int j = i ; j < studentCount - 1 ; j++) 
			{	
                students[j] = students[j + 1];
            }
            studentCount--;
            saveToFile();
            cout<<"Record deleted successfully.\n";
            return;
        }
    }

    cout<<"\nStudent with roll number "<<roll<<" not found.\n";
}

void displayStudent(const Student &student) 
{
    cout<<"\n------- Student Report Card -------\n";
    cout<<"Name        : "<< student.name<<endl;
    cout<<"Roll Number : "<< student.rollNumber<<endl;
    cout<<"Marks       : ";
    for(int i = 0 ; i < TOTAL_SUBJECTS ; i++) 
	{
        cout<<student.marks[i] << " ";
    }
    cout<<"\nTotal Marks : "<<student.totalMarks<<"/"<<TOTAL_MAX_MARKS;
    cout<<"\nAverage     : "<<fixed<<setprecision(2)<<student.average;
    cout<<"\nGrade       : "<<student.grade;
    cout<<"\nMessage     : "<<student.message<<endl;
}

void displayAllStudents() 
{
    if(studentCount == 0) 
	{
        cout<<"\nNo student records available.\n";
        return;
    }

    cout<<"\n------- All Students Report Cards -------\n";
    for(int i = 0 ; i < studentCount ; i++) 
	{
        displayStudent(students[i]);
    }
}

void showReportSummary() 
{
    if(studentCount == 0) 
	{
        cout<<"\nNo student data for summary.\n";
        return;
    }

    float totalAverage = 0;
    int gradeA = 0, gradeB = 0, gradeC = 0, gradeD = 0;
    int highest = students[0].totalMarks;
    string topper = students[0].name;

    for(int i = 0 ; i < studentCount ; i++) 
	{
        totalAverage += students[i].average;

        if(students[i].totalMarks > highest) 
		{
            highest = students[i].totalMarks;
            topper = students[i].name;
        }

        switch (students[i].grade) 
		{
            case 'A': 
			gradeA++;
			break;
            case 'B': 
			gradeB++; 
			break;
            case 'C': 
			gradeC++; 
			break;
            case 'D': 
			gradeD++; 
			break;
        }
    }

    cout<<"\n------- Report Summary -------\n\n";
    cout<<"Class Average  : "<<fixed<<setprecision(2)<<(totalAverage / studentCount)<<endl;
    cout<<"Topper         : "<<topper<<" (" <<highest<<" marks)"<<endl;
    cout<<"\nGrade Distribution:\n";
    cout<<"A (Excellent) : "<<gradeA<<endl;
    cout<<"B (Good)      : "<<gradeB<<endl;
    cout<<"C (Average)   : "<<gradeC<<endl;
    cout<<"D (Weak)      : "<<gradeD<<endl;
}

void printStudentResult() 
{
    if(studentCount == 0) 
	{
        cout<<"\nNo student records available to print.\n";
        return;
    }

    int roll;
    cout<<"\nEnter Roll Number to Print Result: ";
    cin>>roll;

    for(int i = 0; i < studentCount; i++) 
	{
        if(students[i].rollNumber == roll) 
		{
            cout<<"\n------ Printing Result -------\n";
            displayStudent(students[i]);
            cout<<"\nResult printed successfully.\n";
            return;
        }
    }

    cout<<"\nStudent with roll number "<<roll<<" not found.\n";
}

int main() 
{
    loadFromFile(); // Load existing data

    int choice;
    do {
        cout<<"\n================== Student Grading System ==============\n\n";
        cout<<"1. Add Student Record\n";
        cout<<"2. Update Student Record\n";
        cout<<"3. Delete Student Record\n";
        cout<<"4. Display All Students\n";
        cout<<"5. Show Report Summary\n";
        cout<<"6. Print Student Result\n";
        cout<<"7. Exit\n\n";
        cout<<"==========================================================\n\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice) 
		{
            case 1: 
			addStudent(); 
			break;
            case 2: 
			updateStudent(); 
			break;
            case 3: 
			deleteStudent(); 
			break;
            case 4: 
			displayAllStudents(); 
			break;
            case 5: 
			showReportSummary(); 
			break;
            case 6: 
			printStudentResult(); 
			break;
            case 7:
                cout<<"\nThank you for using the Student Grading System.\n";
                cout<<"Have a great day!\n";
                break;
            default: 
			cout<<"\nInvalid choice. Please try again.\n";
        }

    } while(choice != 7);

    return 0;
}
