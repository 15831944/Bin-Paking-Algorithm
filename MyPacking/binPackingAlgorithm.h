/******************************************************************************

This is a very simple binary tree based bin packing algorithm that is initialized
with a fixed width and height and will fit each block into the first node where
it fits and then split that node into 2 parts (down and right) to track the
remaining whitespace.

Best results occur when the input blocks are sorted by width.
TODO:or even better when sorted by max(width,height).

******************************************************************************/
#pragma once
#include "PackStruct.h"
#include "vector"
using namespace std;

class binPackingAlgorithm
{
public:

	int curX = 0;//��ǰ����x
	int curY = 0;//��ǰ����y
	vector<vector<int>> blocks;//������еľ��δ�С

	void AddBlocks(int width, int height, int num);//�ظ����һ��������ͬһ����

	BlockTree* CreateNode(int x, int y, int w, int h);//����һ�����νڵ�
	BlockTree* SplitNode(BlockTree* targetNode, BlockTree* tempNode);//�Զ���������ʽ��ֵ�ǰ����Ϊ������
	BlockTree* GrowNode(BlockTree* block);//���ݹ����������
	BlockTree* GrowRight(BlockTree* block);
	BlockTree* GrowDown(BlockTree* block);
	void Fit();//�������о���
	BlockTree* FindNode(BlockTree* node, int fitW, int fitH,int isLeft);//Ϊ����Ѱ�Һ��ʵ�λ��
	void SortByWidth();
	void SortByHeight();
	void SortByArea();//��������������
	void SortByMaxside();//ȡ��������е����ߣ����бȽ�
	void PrintBlocks();
	void PrintTree(BlockTree * parent, BlockTree * node, string & prefix);\
};

