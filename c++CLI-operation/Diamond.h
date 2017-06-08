#pragma once
#include"2DShape.h"

/**
绘制菱形
默认边长为10

*/

ref class Diamond : DShape {
public:
	void Draw() override;
	Diamond();
	Diamond(int n);
	void SetNum(int n);
	int GetNum();
	

private:
	int num;
};
