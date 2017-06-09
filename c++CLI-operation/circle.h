#pragma once
#include"2DShape.h"

/***
	打印圆形
	半径默认为r=10
*/


ref class Circle : DShape {
public:
	void Draw() override;
	Circle();
	Circle(int n);
	void SetNum(int n);
	int GetNum();
	bool Judge(int a, int b,int r);
private:
	int num;



};
