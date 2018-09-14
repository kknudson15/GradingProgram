#include <iostream>
using namespace std;
#include <cstdlib>
#include "grading.h"

// constructor that sets all of the data members to either 0 or an empty string.
grade::grade() 
{
	midTerm = 0;
	quiz1 = 0;
	quiz2 = 0;
	finalExam = 0;
	firstName = "";
	lastName = "";
}

//sets the value for the midterm by reading in the value from the main function as a parameter.  
// If the score entered is outside the bounds than an error message will be printed.
void grade :: set_midTerm(int midTermTest1)
{
	if (midTermTest1 >=0 && midTermTest1 <= 100)
	midTerm = midTermTest1;
	else
	{
		cout << " Invalid midterm Grade \n";
		exit(EXIT_FAILURE);
	}
}

//sets the value for the first quiz by reading in the value from the main function as a parameter.  
// If the score entered is outside the bounds than an error message will be printed.
void grade :: set_quiz1(int Quiz1)
{
	if(Quiz1 >=0 && Quiz1 <= 50)
	quiz1 = Quiz1;
	else
	{
		cout << " Invalid Quiz 1 Grade \n";
		exit(EXIT_FAILURE);
	}
}

//sets the value for the second quiz by reading in the value from the main function as a parameter.  
// If the score entered is outside the bounds than an error message will be printed.
void grade :: set_quiz2(int Quiz2)
{
	
	if (Quiz2 >=0 && Quiz2 <= 50)
	quiz2 = Quiz2;
	else
	{
		cout << " Invalid Quiz 2 Grade \n";
		exit(EXIT_FAILURE);
	}
}

//sets the value for the final exam by reading in the value from the main function as a parameter.  
// If the score entered is outside the bounds than an error message will be printed.
void grade :: set_final (int finaltest)
{
	if (finaltest >=0 && finaltest <= 200)
	finalExam = finaltest;
	else
	{
		cout << " Invalid Final Grade \n";
		exit(EXIT_FAILURE);
	}
}

//sets the value for the persons first name.
void grade :: set_firstName (string firstname)
{
	firstName = firstname;
}

//sets the value for the person's last name.
void grade :: set_lastName(string lastname)
{
	lastName = lastname;
}

// returns the persons first name
string grade :: get_firstName()
{
	return firstName;
}

// returns the persons last name
string grade :: get_lastName()
{
	return lastName;
}

//returns the midterm score
int grade :: get_midTerm()
{
	return midTerm;
}

//returns the score to the first quiz
int grade :: get_quiz1()
{
	return quiz1;
}

//returns the score to the second quiz
int grade :: get_quiz2()
{
	return quiz2;
}

//returns the score to the final exam.
int grade :: get_final()
{
	return finalExam;
}


//takes the data members and computes the student's average grade.
// The function then returns the average of the student using a data member average.
int  grade :: compute_Average()
{
	average = ((midTerm + quiz1 + quiz2 + finalExam)/4);
	return average;
	
}

//assigns a grade based on the average score.
char grade :: assign_Grade()
{
	switch(average/10)
	{
		case(10):
				gradelet ='A';
				break;
		case(9):
				gradelet = 'A';
				break;
		case(8):
				gradelet = 'B';
				break;
		case(7):
				gradelet = 'C';
				break;
		case(6):
				gradelet = 'D';
				break;
		default:
				gradelet = 'F';
	}
	
	return gradelet;
}



