#include"circle.h"
Circle::Circle() {};
Circle::Circle(int n) :num(n) {};
void Circle::Draw() {
	if (num == 0) num = 10;
	int r = num;
	for (int i = 0; i <= r * 2+2; i++) {
		for (int j = 0; j <= r * 2+2; j++) {
			if (Judge(i, j,r)) Console::Write("* ");
			else Console::Write("  ");
		}
		Console::WriteLine();
	}

}
bool Circle::Judge(int a, int b,int r) {
	return (a - r)*(a - r) + (b - r)*(b - r) <= r*r;
}

void Circle::SetNum(int n) {
	num = n;
}
int Circle::GetNum() {
	return num;
}