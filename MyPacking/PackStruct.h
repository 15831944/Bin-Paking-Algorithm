#pragma once
struct BlockInfo {//���ε�λ�����С
	int x;//x����
	int y;//y����
	int w;//���
	int h;//�߶�
};

struct BlockTree {//���ζ������ڵ�
	BlockInfo cur;//���ڵ�
	int isUsed;//�þ��οռ��Ƿ�ռ��
	int isLeft;
	BlockTree* right;//�������ǿվ��ε��±ߵ����� ���ýڵ���Ҷ�ӽڵ�ʱ��rightָ����һ��Ҷ��
	BlockTree* left;//�������ǿվ��ε��ұߵ�����
};

extern BlockTree* g_root;//���ڵ�
//Ҷ������ͷ�ڵ㣬��һ���ڵ��->right��ʼ����������,left����
//TODO�������β�ֳ�С����ʱ ˳�����Ҫ  g_root��g_leafҪ����ͬһ�Ŷ�����
extern BlockTree* g_leaf_head;
extern int g_maxW, g_maxH;//��ǰ���ο������С

class PackStruct
{
};

