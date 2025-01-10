#include<iostream>
#include<string.h>
using namespace std;
int a = 0;  // ��Ϊ0�Ľڵ����
int b = 0;  // ��Ϊ1�Ľڵ����
int c = 0;  // ��Ϊ2�Ľڵ����

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
void Count(BiTree T)
{
    /**************begin************/
    // ����ǿսڵ㣬ֱ�ӷ���
    if (T == NULL) {
        return;
    }
    
    // �жϵ�ǰ�ڵ�Ķ���
    if (T->lchild == NULL && T->rchild == NULL) {
        // ��Ϊ0�Ľڵ㣨Ҷ�ӽڵ㣩
        a++;
    }
    else if (T->lchild == NULL || T->rchild == NULL) {
        // ��Ϊ1�Ľڵ㣨ֻ��һ���ӽڵ㣩
        b++;
    }
    else {
        // ��Ϊ2�Ľڵ㣨�������ӽڵ㣩
        c++;
    }
    
    // �ݹ�ͳ��������
    Count(T->lchild);
    // �ݹ�ͳ��������
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