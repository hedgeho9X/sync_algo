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
    {//������������
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
{//�������������������-��-�ң�
    if(T != NULL) {
        cout << T->data;           // �ȷ��ʸ��ڵ�
        PreOrderTraverse(T->lchild);  // �ٱ���������
        PreOrderTraverse(T->rchild);  // ������������
    }
}
void InOrderTraverse(BiTree T)
{//�������������������-��-�ң�
    if(T != NULL) {
        InOrderTraverse(T->lchild);   // �ȱ���������
        cout << T->data;           // �ٷ��ʸ��ڵ�
        InOrderTraverse(T->rchild);   // ������������
    }
}
void PostOrderTraverse(BiTree T)
{//�������ĺ����������-��-����
    if(T != NULL) {
        PostOrderTraverse(T->lchild);  // �ȱ���������
        PostOrderTraverse(T->rchild);  // �ٱ���������
        cout << T->data;            // �����ʸ��ڵ�
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