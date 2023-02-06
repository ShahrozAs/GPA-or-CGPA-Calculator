#include<iostream>
#include<conio.h>
using namespace std;
void main(){

	int n,creditHours,choice;
	float course[10], totalMarks = 0,GPA;
a:
	system("cls");
	cout << "[1] - Calculate GPA\n";
	cout << "[2] - Calculate CGPA\n";
	cout << "[3] - EXit\n";
	cout << "Enter your choice here :";
	cin >> choice;
	cout << "\n\n";
	if (choice==1)
	{
		cout << "Enter Number of Courses :";
		cin >> n;
		cout << "Enter Total Credit Hours :";
		cin >> creditHours;
		cout << "\n";
		for (int i = 0; i < n; i++)
		{
			cout << "Enter Course [" << i + 1 << "] Product marks :";
			cin >> course[i];
			totalMarks = totalMarks + course[i];
		}
		GPA = totalMarks / creditHours;
		cout << "\n\nThe Total GPA is :" << GPA << "\n\n";
		cout << "Press any key to continue....";
		_getch();
		goto a;
	}
	
	else if (choice==2)
	{
		int noOfSemester;
		float semesterGpa[8], totalGPA=0,CGPA;
		
		cout << "Enter Number of Semester's :";
		cin >> noOfSemester;
		for (int i = 0; i < noOfSemester; i++)
		{
			cout << "Enter Semester [" << i + 1 << "] GPA :";
			cin >> semesterGpa[i];
			totalGPA = totalGPA + semesterGpa[i];
		}
		CGPA = totalGPA / noOfSemester;
		cout << "\n\nThe Total CGPA is :" << CGPA << "\n\n";
		cout << "Press any key to continue....";
		_getch();
		goto a;
	}
	else if (choice==3)
	{
		exit(0);
	}
	else{
		cout << "\n\nInvalid Choice, try Again\n\n\n";
		cout << "Press any key to continue....";
		_getch();
		goto a;
	}

	system("pause");
}