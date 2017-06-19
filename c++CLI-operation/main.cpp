#include"Shape.h"
#include"square.h"
#include"Diamond.h"
#include"Sin.h"
#include"circle.h"
#include"evergreen_tree.h"
#include"Star.h"
using namespace System;


int main() {
	Square square;
	Diamond diamond;
	Sin sin;
	Circle circle;
	Evergreen_tree evergreen_tree;
	Star star;
	String ^s;
	int x;
	while (true) {
		Console::WriteLine("1.输出正方形");
		Console::WriteLine("2.输出菱形");
		Console::WriteLine("3.输出正弦曲线");
		Console::WriteLine("4.输出圆形");
		Console::WriteLine("5.输出圣诞树");
		Console::WriteLine("7.输出五角星");
		Console::WriteLine("0.退出");
		Console::WriteLine("请选择以上编号");
		s = Console::ReadLine();
		int p = Convert::ToInt32(s);
		switch(p)
		{
		case 1:
			Console::WriteLine("请输入正方形边长，默认为10");
			s = Console::ReadLine();
			if (!s->Equals("")) {
				x = Convert::ToInt32(s);
				square.SetNum(x);
			}
			square.Draw();
			break;
		case 2:
			Console::WriteLine("请输入菱形边长，默认为10");
			s = Console::ReadLine();
			if (!s->Equals("")) {
				x = Convert::ToInt32(s);
				diamond.SetNum(x);
			}
			
			diamond.Draw();
			break;
		case 3:
			Console::WriteLine("请输入正弦曲线周期，默认周期为1");
			s = Console::ReadLine();
			if (!s->Equals("")) {
				x = Convert::ToInt32(s);
				sin.SetNum(x);
			}
			sin.Draw();
			break;
		case 4:
			Console::WriteLine("请输入圆形周长,默认为10");
			s = Console::ReadLine();
			if (!s->Equals("")) {
				x = Convert::ToInt32(s);
				circle.SetNum(x);
			}
			circle.Draw();
			break;
		case 5:
			evergreen_tree.Draw();
			break;
		case 7:
			star.Draw();
			break;
		case 0:
			return 0;
			break;
		}
	}

	return 0;
}