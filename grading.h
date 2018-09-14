#include <iostream>
using namespace std;

class grade
{
	private: // data members
	
	int midTerm;
	int quiz1;
	int quiz2;
	int finalExam;
	int average;
	char gradelet;
	string firstName;
	string lastName;

	
	public: //function members
	grade(); // constructor
	void set_midTerm(int);
	void set_quiz1(int);
	void set_quiz2(int);
	void set_final(int);
	void set_firstName(string);
	void set_lastName(string);
	int  get_midTerm();
	int  get_quiz1();
	int  get_quiz2();
	int  get_final();
	string get_firstName();
	string get_lastName();
	int compute_Average();
	char assign_Grade();
	
};
