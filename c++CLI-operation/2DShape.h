#pragma once
#include"Shape.h"
using namespace System;
ref class 2DShape abstract: Shape{
public:
	//����ͼ��
	void 2DShape();
	virtual void Draw() = 0;

};
