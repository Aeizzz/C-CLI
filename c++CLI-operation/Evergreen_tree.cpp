#include"evergreen_tree.h"

void Evergreen_tree::Draw() {
	for (int i = 0; i<3; i++) {
		for (int j = 4; j>i; j--) {
			Console::Write(" ");
		}
		for (int j = 0; j<2 * i + 1; j++) {
			Console::Write("*");
			
		}
		Console::WriteLine();
	}
	for (int i = 0; i<4; i++) {
		for (int j = 4; j>i; j--) {
			Console::Write(" ");
		}
		for (int j = 0; j<2 * i + 1; j++) {
			Console::Write("*");
		}
	Console::WriteLine();
	}
	for (int i = 0; i<5; i++) {
		for (int j = 4; j>i; j--) {
			Console::Write(" ");
		}
		for (int j = 0; j<2 * i + 1; j++) {
			Console::Write("*");
		}
		Console::WriteLine();
	}
	for (int i = 0; i<5; i++) {
		for (int j = 0; j<3; j++) {
			Console::Write(" ");
		}
		for (int j = 0; j<3; j++) {
			Console::Write("*");
		}
		Console::WriteLine();
	}
	for (int i = 0; i<2; i++) {
		for (int j = 0; j<10; j++) {
			Console::Write("*");
		}
		Console::WriteLine();
	}

}
Evergreen_tree::Evergreen_tree() {};

