#pragma once
#include"2DShape.h"

ref class Sin :DShape {
public:
	void Draw() override;
	Sin();
	Sin(int n);
	void SetNum(int n);
	int GetNum();
private:
	int num;



};
