#pragma once
struct BlockInfo {//���ε�λ�����С
	int x;//x����
	int y;//y����
	int w;//���
	int h;//�߶�
};

struct BlockTree {//���ζ������ڵ�
	BlockInfo cur;//���ڵ�
	int isUsed;
	int isLeft;
	BlockTree* right;//�������ǿվ��ε��±ߵ�����
	BlockTree* left;//�������ǿվ��ε��ұߵ�����
};

extern BlockTree* g_root;//���ڵ�
extern int g_maxW, g_maxH;//��ǰ���ο������С

class PackStruct
{
};

