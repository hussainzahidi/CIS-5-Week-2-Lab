#include <iostream>
#include <string>

// Lab 2 — Hussain Zahidi
// CIS 5 Week 02 · Program structure

int main() {
	using std::string;
	using std::cout;
	using std::cin;

  // TODO: replace TODOs with YOUR labeled lines (5–6 total)
	string name;
	int age = 26;
	cout << "Enter name: ";
	cin >> name;
	cout << "Name: " << "My name is " << name << ".\n";
	cout << "Interest: I like to learn new recipes from different cuisines.\n";
	cout << "CIS 5 goal: Understand programming logic through C++ and start an ai agent personal learning project!\n";
	cout << "Tool path: I used Visual Studio 2022 with C++ build tools installed. I clone a repo from github and push through VS.\n";
	cout << "Fun fact: I lived as an expat in Ras Tanura, Saudi Arabia for 10 years!\n";
	cout << "Age: " << "I am " << age << " years old.\n";
  return 0;
}
