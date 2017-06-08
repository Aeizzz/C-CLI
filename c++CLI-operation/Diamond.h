#pragma once
#include"2DShape.h"

/**
ªÊ÷∆¡‚–Œ

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
