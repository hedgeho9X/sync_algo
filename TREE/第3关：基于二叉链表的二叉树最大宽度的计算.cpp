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
{// 先序建立二叉树
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
    int maxWidth = 1;  // 记录最大宽度
    
    while (!q.empty()) {
        int levelSize = q.size();  // 当前层的节点数
        maxWidth = max(maxWidth, levelSize);
        
        // 处理当前层的所有节点
        for (int i = 0; i < levelSize; i++) {
            BiTNode* node = q.front();
            q.pop();
            
            // 将下一层的非空节点加入队列
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
        int pos=0;                         // 标记字符串处理位置
        BiTree root=CreateBiTree(pos,str);
        cout<<Width(root)<<endl;
    }
    return 0;
}