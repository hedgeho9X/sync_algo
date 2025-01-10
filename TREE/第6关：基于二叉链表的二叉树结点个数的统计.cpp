#include<iostream>
#include<string.h>
using namespace std;
int a = 0;  // 度为0的节点个数
int b = 0;  // 度为1的节点个数
int c = 0;  // 度为2的节点个数

typedef struct BiTNode
{
	char data;
	struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;
void CreateBiTree(BiTree &T,char S[],int &i)
{//先序建立二叉树
	if(S[i]=='0')
		T=NULL;
	else
	{
		T=new BiTNode;
		T->data=S[i];
		CreateBiTree(T->lchild,S,++i);
		CreateBiTree(T->rchild,S,++i);
	}
}
void Count(BiTree T)
{
    /**************begin************/
    // 如果是空节点，直接返回
    if (T == NULL) {
        return;
    }
    
    // 判断当前节点的度数
    if (T->lchild == NULL && T->rchild == NULL) {
        // 度为0的节点（叶子节点）
        a++;
    }
    else if (T->lchild == NULL || T->rchild == NULL) {
        // 度为1的节点（只有一个子节点）
        b++;
    }
    else {
        // 度为2的节点（有两个子节点）
        c++;
    }
    
    // 递归统计左子树
    Count(T->lchild);
    // 递归统计右子树
    Count(T->rchild);
    /**************end************/
}
int main()
{
	char S[100];
	while(cin>>S)
	{
	    if(strcmp(S,"0")==0) break;
		a=b=c=0;
      	int i=-1;
	  	BiTree T;
		CreateBiTree(T,S,++i);
		Count(T);
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
	return 0;
}