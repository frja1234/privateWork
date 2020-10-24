#include <iostream>
#include <string>
using namespace std;
enum Sex { x, y };
class Teacher {
public:
  Teacher(int num, string name, Sex sex, int age);
  void display();
  int num;
  string name;
  Sex sex;
  int age;
};
Teacher::Teacher(int num, string name, Sex sex, int age)
    : num(num), name(name), sex(sex), age(age){};
void Teacher::display() {
  cout << num << "-" << name << "-" << sex << "-" << age << endl;
}
class Student {
public:
  Student(int num, string name, Sex sex);
  Student(Teacher &);
  void display();
  int num;
  string name;
  Sex sex;
};
Student::Student(int num, string name, Sex sex)
    : num(num), name(name), sex(sex) {}
Student::Student(Teacher &t) {
  num = t.num;
  name = t.name;
  sex = t.sex;
}
void Student::display() { cout << num << "-" << name << "-" << sex << endl; }
int main() {
  Teacher t(1, "frja", x, 20);
  t.display();
  Student s = Student(t);
  s.display();
}
