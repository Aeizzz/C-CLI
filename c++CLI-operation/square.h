#pragma once
#include"2DShape.h"
/***
����������
�߳�Ϊn*n
���費ָ���߳�����Ĭ��Ϊ10
*/
ref class Square : DShape{
public:
	//��ͼ���û��ָ���߳���߳�Ϊ10
	void Draw() override;

	//���캯��
	Square();
	Square(int n);


	//get set����
	void SetNum(int n);
	int GetNum();

private:
	//�߳�
	int num;
};
