#include "square.h"

void Square :: Draw() {
	//绘图如果没有指定边长则边长为10
	if (num == 0) num = 10;
	for (int i = 0; i < num; i++) {
		Console::Write("* ");
	}
	Console::WriteLine();
	for (int j = 1; j < num - 1; j++) {
		for (int i = 0; i < num; i++) {
			if (i == 0 || i == num - 1) Console::Write("* ");
			else Console::Write("  ");
		}
		Console::WriteLine();
	}
	for (int i = 0; i < num; i++) {
		Console::Write("* ");
	}
}
Square::Square(int n) {
	num = n;

}
Square::Square() {}

void Square::SetNum(int n) {
	num = n;
}

int Square::GetNum() {
	return num;
}
