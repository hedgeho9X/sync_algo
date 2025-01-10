#include<iostream>
#include<string.h>
using namespace std;
int flag;
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
void PreOrderTraverse(BiTree T)
{//二叉树的先序遍历（根-左-右）
    if(T != NULL) {
        cout << T->data;           // 先访问根节点
        PreOrderTraverse(T->lchild);  // 再遍历左子树
        PreOrderTraverse(T->rchild);  // 最后遍历右子树
    }
}
void InOrderTraverse(BiTree T)
{//二叉树的中序遍历（左-根-右）
    if(T != NULL) {
        InOrderTraverse(T->lchild);   // 先遍历左子树
        cout << T->data;           // 再访问根节点
        InOrderTraverse(T->rchild);   // 最后遍历右子树
    }
}
void PostOrderTraverse(BiTree T)
{//二叉树的后序遍历（左-右-根）
    if(T != NULL) {
        PostOrderTraverse(T->lchild);  // 先遍历左子树
        PostOrderTraverse(T->rchild);  // 再遍历右子树
        cout << T->data;            // 最后访问根节点
    }
}
int main()
{
	char S[100];
	while(cin>>S)
	{
		if(strcmp(S,"0")==0) break;
		int i=-1;
	  	BiTree T;
		CreateBiTree(T,S,++i);
		PreOrderTraverse(T);
		cout<<endl;
  	    InOrderTraverse(T);
		cout<<endl;
		PostOrderTraverse(T);
		cout<<endl;
	}
	return 0;
}