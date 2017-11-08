#include <iostream>

using namespace std;

struct Student
{
	string id;
	string name, surname;
	double gpa;
	double quiz1, quiz2;
	// Student(string name, string surname, double gpa) {
	// 	this->name = name;
	// 	this->surname = surname;
	// 	this->gpa = gpa;
	// }

	double getQuizPoints() {
		return this->quiz1 + this->quiz2;
	}

	void print() {
		cout << this->name " " << this->surname << endl;
	}
};

int main() {
	freopen("input.txt", "r", stdin);

	Student students[200]; 

	int cnt = 0;
	while (cin >> students[cnt].id) {
		cin >> students[cnt].surname;
		cin >> students[cnt].name;
		cin >> students[cnt].gpa;
		cin >> students[cnt].quiz1;
		cin >> students[cnt].quiz2;
		cnt++;
	}

	for (int i = 0; i < cnt; i++) 
		students[i].print();
	// for (int i = 0; i < cnt; i++)
	// 	if (students[i].getQuizPoints() > 11)
	// 		cout << students[i].name << endl;
	return 0;
}