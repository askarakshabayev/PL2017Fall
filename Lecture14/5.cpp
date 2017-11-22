#include <iostream>
#include <vector>

using namespace std;

struct Student {
	string name;
	double gpa;
};

bool compare(Student s1, Student s2) {
	if (s1.gpa > s2.gpa)
		return true;
	if (s1.gpa < s2.gpa)
		return false;
	return (s1.name > s2.name);
}

int main() {
	vector<Student> v;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		Student st;
		cin >> st.name >> st.gpa;
		v.push_back(st);
	}

	sort(v.begin(), v.end(), compare);

	vector<Student>::iterator it;
	for (it = v.begin(); it != v.end(); it++) {
		cout << (*it).name << " " << (*it).gpa << endl;
	}

	return 0;
}