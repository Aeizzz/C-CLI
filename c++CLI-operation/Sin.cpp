#include"Sin.h"
#include<math.h>
Sin::Sin() {}

void Sin::Draw() {
	int n;
	for (double y = 1; y >= -1; y -= 0.1) {
		for (int x = 0; x <= 62; x++) {
			if (y >= 0)
				n = asin(y) * 10;
			else
				n = -asin(y) * 10;
			if ((y >= 0 && (x == n || x == 31 - n)) || (y < 0 && (x == 31 + n || x == 62 - n)))
				Console::Write("*");
			else
				Console::Write(" ");
		}
		Console::WriteLine();
	}
}

