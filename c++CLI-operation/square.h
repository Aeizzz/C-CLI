#pragma once
#include"2DShape.h"
/***
绘制正方形
边长为n*n
假设不指定边长则变成默认为10
*/
ref class Square : DShape{
public:
	//绘图如果没有指定边长则边长为10
	void Draw() override;

	//构造函数
	Square();
	Square(int n);


	//get set方法
	void SetNum(int n);
	int GetNum();

private:
	//边长
	int num;
};
