// Name : Rachana Sahu
// UID : 22BCS14778
// Section : 802 - A

// Question 1
#include "iostream"
using namespace std;

int main()
{
    int number;
    cin >> number;
    cout << (number * (number + 1)) / 2;
    return 0;
}

// Question 2
#include "iostream"
#include "cmath"
using namespace std;

int main()
{
    int inputValue, upperBound, factorFlag = 0;
    cin >> inputValue;

    upperBound = ceil(sqrt(inputValue));
    int originalValue = inputValue;

    for (int index = 2; index <= upperBound; index++)
    {
        if (originalValue % index == 0)
        {
            factorFlag = 1;
        }
    }

    if (factorFlag == 0 && originalValue != 1 || originalValue == 2 || originalValue == 3)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}

// Question 3
#include "iostream"
using namespace std;

int main()
{
    int limit;
    cin >> limit;

    for (int current = 0; current <= limit; current++)
    {
        if (current % 2 != 0)
        {
            cout << current << "\t";
        }
    }
    return 0;
}

// Question 4
#include "iostream"
using namespace std;

int main()
{
    int inputSquare;
    cin >> inputSquare;
    cout << inputSquare * inputSquare << endl;
}

// Question 5
#include "iostream"
using namespace std;

int main()
{
    int multiplier, index = 1;
    cin >> multiplier;
    while (index <= 10)
    {
        cout << index << " X " << multiplier << " = " << index * multiplier << endl;
        index++;
    }
}

// Question 6
#include "iostream"
#include "cmath"
using namespace std;

int main()
{
    int digitCount;
    cin >> digitCount;
    cout << floor(log10(digitCount) + 1) << endl;
}

// Question 7
#include "iostream"
using namespace std;

int main()
{
    int originalNumber, reverseNumber = 0;
    cin >> originalNumber;

    while (originalNumber != 0)
    {
        int remainder = originalNumber % 10;
        reverseNumber = reverseNumber * 10 + remainder;
        originalNumber = originalNumber / 10;
    }
    cout << reverseNumber << endl;
}

// Question 8
#include "iostream"
using namespace std;

int main()
{
    long long inputDigit, maxDigit = -1, currentDigit;
    cin >> inputDigit;
    while (inputDigit != 0)
    {
        currentDigit = inputDigit % 10;
        if (maxDigit == -1)
        {
            maxDigit = currentDigit;
        }
        else
        {
            maxDigit = max(maxDigit, currentDigit);
        }
        inputDigit = inputDigit / 10;
    }
    cout << maxDigit << endl;
}

// Question 9
#include "iostream"
using namespace std;

int main()
{
    int palindromeCheck, reversedValue = 0;
    cin >> palindromeCheck;
    int tempValue = palindromeCheck;
    while (tempValue != 0)
    {
        int remainderValue = tempValue % 10;
        reversedValue = reversedValue * 10 + remainderValue;
        tempValue = tempValue / 10;
    }
    if (reversedValue == palindromeCheck)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not a Palindrome" << endl;
    }
}

// Question 10
#include "iostream"
using namespace std;

int main()
{
    int sumDigits = 0, inputNumber;
    cin >> inputNumber;
    while (inputNumber != 0)
    {
        int singleDigit = inputNumber % 10;
        sumDigits += singleDigit;
        inputNumber = inputNumber / 10;
    }
    cout << sumDigits;
}

// Question 11
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void calculateArea(double radius) {
    cout << "Circle Area: " << 3.14159 * radius * radius << endl;
}
void calculateArea(double length, double width) {
    cout << "Rectangle Area: " << length * width << endl;
}
void calculateArea(double baseLength, double triangleHeight, int flag) {
    cout << "Triangle Area: " << 0.5 * baseLength * triangleHeight << endl;
}

void calculateSalary(int stipendValue) {
    cout << "Intern Salary: " << stipendValue << endl;
}
void calculateSalary(int basePay, int allowance) {
    cout << "Employee Salary: " << basePay + allowance << endl;
}
void calculateSalary(int basePay, int allowance, int bonus) {
    cout << "Manager Salary: " << basePay + allowance + bonus << endl;
}

class Staff {
private:
    int staffId;
    string staffName;
    float monthlySalary;

public:
    void setDetails(int id, string name, float salary) {
        staffId = id;
        staffName = name;
        monthlySalary = salary;
    }
    void displayDetails() {
        cout << "Staff ID: " << staffId << "\nName: " << staffName << "\nSalary: " << monthlySalary << endl;
    }
};

// Question 12
void calculateSalary(int stipend) {
    cout << "Intern Salary: " << stipend << endl;
}
void calculateSalary(int baseSalary, int bonuses) {
    cout << "Employee Salary: " << baseSalary + bonuses << endl;
}
void calculateSalary(int baseSalary, int bonuses, int incentives) {
    cout << "Manager Salary: " << baseSalary + bonuses + incentives << endl;
}

// Question 13
class Employee {
private:
    int id;
    string name;
    float salary;

public:
    void setDetails(int empId, string empName, float empSalary) {
        id = empId;
        name = empName;
        salary = empSalary;
    }
    void displayDetails() {
        cout << "Employee ID: " << id << "\nEmployee Name: " << name << "\nEmployee Salary: " << salary << endl;
    }
};

// Question 14
class Student {
public:
    int rollNumber;
    string name;
    void setStudentDetails(int r, string n) {
        rollNumber = r;
        name = n;
    }
};

class Result : public Student {
public:
    int marks[3];
    void setMarks(int m1, int m2, int m3) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }
    void calculateAndDisplay() {
        int total = marks[0] + marks[1] + marks[2];
        cout << "Roll Number: " << rollNumber << "\nName: " << name
             << "\nTotal: " << total << "\nPercentage: " << (total / 3.0) << "%" << endl;
    }
};

// Question 15
class Shape {
public:
    virtual void calculateArea() = 0; // Pure virtual function
};
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void calculateArea() override {
        cout << "Circle Area: " << 3.14159 * radius * radius << endl;
    }
};
class Rectangle : public Shape {
    double length, breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    void calculateArea() override {
        cout << "Rectangle Area: " << length * breadth << endl;
    }
};
class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    void calculateArea() override {
        cout << "Triangle Area: " << 0.5 * base * height << endl;
    }
};

// Question 16:
class Shape {
public:
    virtual void calculateArea() = 0; // Pure virtual function
};
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void calculateArea() override {
        cout << "Circle Area: " << 3.14159 * radius * radius << endl;
    }
};
class Rectangle : public Shape {
    double length, breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    void calculateArea() override {
        cout << "Rectangle Area: " << length * breadth << endl;
    }
};
class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    void calculateArea() override {
        cout << "Triangle Area: " << 0.5 * base * height << endl;
    }
};
// Question 17
void operate(int matA[2][2], int matB[2][2], int operation) {
    int result[2][2] = {};
    if (operation == 1) { // Addition
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                result[i][j] = matA[i][j] + matB[i][j];
    } else if (operation == 2) { // Multiplication
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                for (int k = 0; k < 2; k++)
                    result[i][j] += matA[i][k] * matB[k][j];
    }
    cout << "Resultant Matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }
}

// Question 18
class Shape {
public:
    virtual void calculateArea() = 0; // Pure virtual function
};
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    void calculateArea() override {
        cout << "Circle Area: " << 3.14159 * radius * radius << endl;
    }
};
class Rectangle : public Shape {
    double length, breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}
    void calculateArea() override {
        cout << "Rectangle Area: " << length * breadth << endl;
    }
};
class Triangle : public Shape {
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    void calculateArea() override {
        cout << "Triangle Area: " << 0.5 * base * height << endl;
    }
};
// Question 19
class Book {
public:
    string title, author;
    int isbn;
    void setBookDetails(string t, string a, int i) {
        title = t;
        author = a;
        isbn = i;
    }
};
class Borrower {
public:
    string name;
    int id;
    void setBorrowerDetails(string n, int i) {
        name = n;
        id = i;
    }
};
class Library : public Book, public Borrower {
public:
    void borrowBook() {
        cout << name << " (ID: " << id << ") has borrowed \"" << title << "\" by " << author << " (ISBN: " << isbn << ")." << endl;
    }
    void returnBook() {
        cout << name << " (ID: " << id << ") has returned \"" << title << "\" by " << author << " (ISBN: " << isbn << ")." << endl;
    }
};
// Question 20
class Account {
public:
    virtual void calculateInterest() = 0; // Pure virtual function
};
class SavingsAccount : public Account {
    double balance, rate, time;
public:
    SavingsAccount(double b, double r, double t) : balance(b), rate(r), time(t) {}
    void calculateInterest() override {
        cout << "Savings Account Interest: " << (balance * rate * time / 100) << endl;
    }
};
class CurrentAccount : public Account {
    double balance, fee;
public:
    CurrentAccount(double b, double f) : balance(b), fee(f) {}
    void calculateInterest() override {
        cout << "Balance after fee deduction: " << (balance - fee) << endl;
    }
};
