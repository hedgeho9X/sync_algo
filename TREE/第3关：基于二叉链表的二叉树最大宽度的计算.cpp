#include <iostream>
#include <string.h>
#include <queue>
using namespace std;

typedef struct BiTNode
{
    char data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

BiTree CreateBiTree(int &pos, char *str)
{// ������������
    char c=str[pos++];
    if(c=='0') return NULL;
    BiTree root=new BiTNode();
    root->data=c;
    root->lchild=CreateBiTree(pos,str);
    root->rchild=CreateBiTree(pos,str);
    return root;
}

int Width(BiTree T)
{
    if (T == NULL) return 0;
    
    queue<BiTNode*> q;
    q.push(T);
    int maxWidth = 1;  // ��¼�����
    
    while (!q.empty()) {
        int levelSize = q.size();  // ��ǰ��Ľڵ���
        maxWidth = max(maxWidth, levelSize);
        
        // ����ǰ������нڵ�
        for (int i = 0; i < levelSize; i++) {
            BiTNode* node = q.front();
            q.pop();
            
            // ����һ��ķǿսڵ�������
            if (node->lchild) {
                q.push(node->lchild);
            }
            if (node->rchild) {
                q.push(node->rchild);
            }
        }
    }
    
    return maxWidth;
}

int main()
{
    char str[1000];
    while(cin>>str)
    {
        if(strcmp(str,"0")==0) break;
        int pos=0;                         // ����ַ�������λ��
        BiTree root=CreateBiTree(pos,str);
        cout<<Width(root)<<endl;
    }
    return 0;
}