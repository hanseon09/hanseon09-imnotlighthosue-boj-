#include <iostream>
#include <queue>
#include <cstdio>
#include <vector>
#include <cstring>
#include <string>
#include <math.h>
#include <algorithm>
 
using namespace std;
 
typedef struct Node
{
    char alpha;
    struct Node * left;
    struct Node * right;
}Node;
 
int N = 0; // 노드의 개수
 
Node * root = NULL; // 루트 노드
 
bool stop = false;
 
void searchNode(Node * Root, Node * lc, Node * rc, char s)
{
    if (Root == NULL || stop) return;
 
    if (Root->alpha == s)
    {
        Root->left = lc;
        Root->right = rc;
 
        stop = true;
 
        return;
    }
 
    searchNode(Root->left, lc, rc, s);
    searchNode(Root->right, lc, rc, s);
}
 
void makeTree(char Self, char Left, char Right)
{
    Node * temp = (Node*)malloc(sizeof(Node));
    Node * left_child = (Node*)malloc(sizeof(Node));
    Node * right_child = (Node*)malloc(sizeof(Node));
 
    if (root == NULL) // 루트 노드가 없을 때 즉, 최초 노드 생성
    {
        // 자신
        temp->alpha = Self;
 
        if (Left == '.') temp->left = NULL;
        else
        {
            left_child->alpha = Left;
            left_child->left = NULL;
            left_child->right = NULL;
 
            temp->left = left_child;
 
        }
 
        if (Right == '.') temp->right = NULL;
        else
        {
            right_child->alpha = Right;
            right_child->left = NULL;
            right_child->right = NULL;
 
            temp->right = right_child;
        }
 
        root = temp;
 
        return;
    }
 
    // 루트 노드가 아니라면, 들어갈 위치를 찾는다.
    if (Left == '.') left_child = NULL;
    else
    {
        left_child->alpha = Left;
        left_child->left = NULL;
        left_child->right = NULL;
    }
 
    if (Right == '.') right_child = NULL;
    else
    {
        right_child->alpha = Right;
        right_child->left = NULL;
        right_child->right = NULL;
    }
 
    searchNode(root, left_child, right_child, Self);
 
    stop = false;
}
 
// 전위 순회 : 중앙 → 왼쪽 → 오른쪽
void preOrder(Node * Root)
{
    if (Root == NULL) return;
 
    printf("%c", Root->alpha); // 중
    preOrder(Root->left); // 왼
    preOrder(Root->right); // 오
}
 
void inOrder(Node * Root)
{
    if (Root == NULL) return;
 
    inOrder(Root->left); 
    printf("%c", Root->alpha); 
    inOrder(Root->right); 
}
 

void postOrder(Node * Root)
{
    if (Root == NULL) return;
 
    postOrder(Root->left); 
    postOrder(Root->right); 
    printf("%c", Root->alpha); 
}
 
int main(void)
{
    char S, L, R;
 
    scanf("%d", &N);
 
    for (int i = 0; i < N; i++)
    {
        cin >> S >> L >> R;
 
        makeTree(S, L, R);
    }
 
    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    postOrder(root);
    printf("\n");
 
    return 0;
}
