#include<iostream>
using namespace std;
typedef struct BiTNode
{
	int weight;
	struct BiTNode *left,*right;
}BiTNode,*BiTree;
void CreateBiTree(BiTree &T)
{//������������
	int x;
	cin>>x;
	if(x==0) T=NULL;
	else
    {
		T=new BiTNode;
		T->weight=x;
		CreateBiTree(T->left);
		CreateBiTree(T->right);
	}
}
void WPLCal(BiTree root, int depth, int &wpl)
{
    // ����ǿսڵ㣬ֱ�ӷ���
    if (root == NULL) {
        return;
    }
    
    // �����Ҷ�ӽڵ㣬�������Ȩ·������
    if (root->left == NULL && root->right == NULL) {
        wpl += root->weight * depth;
        return;
    }
    
    // �ݹ��������������WPL����ȼ�1
    WPLCal(root->left, depth + 1, wpl);
    WPLCal(root->right, depth + 1, wpl);
}
int WPL(BiTree root)
{
    /**************begin************/
    int wpl = 0;
    WPLCal(root, 0, wpl);
    return wpl;
    /**************end************/
}
int main()
{
	while(1)
    {
		BiTree T;
		CreateBiTree(T);
		if(!T) break;
		cout<<WPL(T)<<endl;
	}
	return 0;
}