#pragma once
#include "GL/glut.h"//�ǵ����ø�ΪDebug x86ģʽ����Ȼ�����껷���Ҳ������ļ�
#include "string"
using namespace std;
#define MAX_CHAR 128

struct BlockTree;
class glDraw
{
public:
	static void render();//��Ⱦ����ͼ��
	static void PreOrderTraverse(BlockTree* node);//�ݹ��������������
	static void StackPreOrderTraverse(BlockTree * node);//�ǵݹ��������һ�ζ�����
	static string CalculateFilledArea(int width, int height);//������οռ��������
	static void DrawRectangle(float leftBottomX, float leftBottomY, float rightTopX, float rightTopY);//���ƾ���
	static void DrawString(string str);//����Ӣ�ġ����֡�����
	static void LBClick(int button, int state, int x, int y);//ÿ�ε������һ������
};

