#pragma once
#include"Shape.h"
using namespace System;

ref class DShape abstract: IShape{
public:
	virtual void Draw() =0;
	

};
