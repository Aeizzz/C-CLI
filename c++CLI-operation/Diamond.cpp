#include"Diamond.h"

//构造函数
Diamond::Diamond() {}
Diamond::Diamond(int n) :num(n) {}


void Diamond::Draw() {
	//从0开始要减一个
	if (num == 0) num = 9;
	else num--;
	//todo
	for (int i = 0; i <=num; i++) {
		if (i == 0) {
			for (int k = 0; k < num; k++) {
				Console::Write(" ");
			}
			Console::WriteLine("*");
		}
		else {
			for (int k = 0; k < num - i; k++) {
				Console::Write(" ");
			}
			Console::Write("*");
			for (int k = num - i + 1; k < num + i; k++) {
				Console::Write(" ");
			}
			Console::WriteLine("*");
		}
	}
	for (int i = num-1; i >=0; i--) {
		if (i == 0) {
			for (int k = 0; k < num; k++) {
				Console::Write(" ");
			}
			Console::WriteLine("*");
		}else{
			for (int k = 0; k < num - i; k++) {
				Console::Write(" ");
			}
			Console::Write("*");
			for (int k = num - i + 1; k < num + i; k++) {
				Console::Write(" ");
			}
			Console::WriteLine("*");
		}
	}
	
}

void Diamond::SetNum(int n) {
	num = n;
}
int Diamond::GetNum() {
	return num;
}