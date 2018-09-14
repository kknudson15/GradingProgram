#include <iostream>
#include "grading.h"
using namespace std;

void intro();
void get_Scores(grade *ptr);
void print_Results(grade * ptr);

int main ()
{	
	//instantiates the object
	grade *grade_ptr = NULL;
	grade_ptr = new grade;
	
	intro();
	get_Scores(grade_ptr);
	print_Results(grade_ptr);
	
	//terminates the function
return 0;	
}

//Welcomes the user and identifies the program
void intro()
{
	cout << "*************************************" << endl; 
	cout << "Grading Program                     *" << endl;
	cout << "*************************************" << endl;
	cout << "Computes grade based on a midterm,  *" << endl;
	cout << "2 quizes and a final.               *" << endl;
	cout << "                                    *" << endl;
	cout << "                                    *" << endl;
	cout << "                                    *" << endl;
	cout << "*************************************\n"<< endl;
}
//Reads in the values of the scores from the user.
void get_Scores(grade *grade_ptr)
{
	int midTermTest1, Quiz1, Quiz2, finalTest;
	string firstname, lastname;
	
	cout << " What is your first name?" << endl;
	cin >> firstname;
	cout << " What is your last name? " << endl;
	cin >> lastname;
	cout << " Please enter the the grade on the midterm " << endl;
	cin >> midTermTest1;
	cout << " Please enter the the grade on quiz1 " << endl;
	cin >> Quiz1;
	cout << " Please enter the the grade on the quiz2 " << endl;
	cin >> Quiz2;
	cout << " Please enter the the grade on the Final " << endl;
	cin >> finalTest;
	
	//calls the functions of the object grade1.
	(*grade_ptr).set_firstName(firstname);
	(*grade_ptr).set_lastName(lastname);
	(*grade_ptr).set_midTerm(midTermTest1);
	(*grade_ptr).set_quiz1(Quiz1);
	(*grade_ptr).set_quiz2(Quiz2);
	(*grade_ptr).set_final(finalTest);

}

//prints all of the data members and the computed student average. Utilizes getter functions to obtain the values of the scores.
void print_Results(grade *grade_ptr)
{
	cout << "The scores of: " << (*grade_ptr).get_firstName() << " " << (*grade_ptr).get_lastName() << endl;
	cout << "MidTerm Score is: " << (*grade_ptr).get_midTerm() << endl;
	cout << "Quiz Scores are: " << (*grade_ptr).get_quiz1() << " " << (*grade_ptr).get_quiz2() << endl;
	cout << "Final exam Score is: " << (*grade_ptr).get_final() << endl;
	cout << "\nTotal Percentage is: " << (*grade_ptr).compute_Average()<< "%" << endl;
	cout << "Grade: " << (*grade_ptr).assign_Grade() << endl;
	
	
}