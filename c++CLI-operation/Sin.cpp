#include"Sin.h"
#include<math.h>
Sin::Sin() {}

void Sin::Draw() {
	int n;
	//周期
	int t;
	if (num == 0) t = 1;
	else t = num;
	for (double y = 1; y >= -1; y -= 0.1) {
		for (int x = 0; x <= 62*t; x++) {
			if (y >= 0)
				n = asin(y) * 10;
			else
				n = -asin(y) * 10;
			if ((y >= 0 && (x%62 == n || x%62 == 31 - n)) || (y < 0 && (x%62 == 31 + n || x%62 == 62 - n)))
				Console::Write("*");
			else
				Console::Write(" ");
		}
		Console::WriteLine();
	}
}
Sin::Sin(int n) :num(n) {};
void Sin::SetNum(int n) {
	num = n;
}
int Sin::GetNum() {
	return num;
}

