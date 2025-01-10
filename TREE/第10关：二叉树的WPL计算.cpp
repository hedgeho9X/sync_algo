#include<iostream>
using namespace std;
typedef struct BiTNode
{
	int weight;
	struct BiTNode *left,*right;
}BiTNode,*BiTree;
void CreateBiTree(BiTree &T)
{//先序建立二叉树
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
    // 如果是空节点，直接返回
    if (root == NULL) {
        return;
    }
    
    // 如果是叶子节点，计算其带权路径长度
    if (root->left == NULL && root->right == NULL) {
        wpl += root->weight * depth;
        return;
    }
    
    // 递归计算左右子树的WPL，深度加1
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