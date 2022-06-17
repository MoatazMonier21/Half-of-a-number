#include<iostream>
using namespace std;

float readNum() {
	float num;
	cout << "Enter the number" << endl;
	cin >> num;
	return num;
}
float halfNum(float num) {
	float halfNum;
	halfNum = num / 2;
	return halfNum;
}
void displayHalfNum(float halfNum) {
	cout << "The half of Your num is: " << halfNum << endl;
}
int main() {
	displayHalfNum(halfNum(readNum()));
}