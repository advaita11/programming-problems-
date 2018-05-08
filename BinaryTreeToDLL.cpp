/*
Given a Binary Tree (BT), convert it to a Doubly Linked List(DLL) In-Place. 
The left and right pointers in nodes are to be used as previous and next pointers respectively in converted DLL. 
The order of nodes in DLL must be same as Inorder of the given Binary Tree. 
The first node of Inorder traversal (left most node in BT) must be head node of the DLL.
*/

/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* Structure for tree and linked list
struct Node
{
    int data;
    // left is used as previous and right is used
    // as next in DLL
    Node *left, *right;
}; */
// This function should convert a given Binary tree to Doubly
// Linked List
// root --> Root of Binary Tree
// head_ref --> Pointer to head node of created doubly linked list
void BToDLLRecur(Node *root, Node **head_ref, Node **prev)
{
    if(root == NULL) return;
    
    BToDLLRecur(root->left,head_ref,prev);
    
    if(*prev == NULL)
    {
        *head_ref = root;
        *prev = root;
    }
    else
    {
        root->left = *prev;
        (*prev)->right = root;
    }
    
    *prev = root;
   
    BToDLLRecur(root->right,head_ref,prev);
}
void BToDLL(Node *root, Node **head_ref)
{
   /*if(root == NULL)
    {
        *head_ref = NULL;
        return;
    }
    */
    Node *prev = NULL;
   
    BToDLLRecur(root,head_ref,&prev);
    
}
