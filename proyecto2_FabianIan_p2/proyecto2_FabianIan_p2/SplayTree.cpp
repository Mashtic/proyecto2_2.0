#include "SplayTree.h"


s* SplayTree::RR_Rotate(s* k2)
{
    s* k1 = k2->lch;
    k2->lch = k1->rch;
    k1->rch = k2;
    return k1;
}
s* SplayTree::LL_Rotate(s* k2)
{
    s* k1 = k2->rch;
    k2->rch = k1->lch;
    k1->lch = k2;
    return k1;
}
s* SplayTree::Splay(double key, s* root)
{
    if (!root)
    return NULL;
    s header;
    header.lch= header.rch = NULL;
    s* LeftTreeMax = &header;
    s* RightTreeMin = &header;
    while (1)
    {
        if (key < root->k)
        {
        if (!root->lch)
        break;
        if (key< root->lch->k)
        {
            root = RR_Rotate(root);
            if (!root->lch)
            break;
        }
        RightTreeMin->lch= root;
        RightTreeMin = RightTreeMin->lch;
        root = root->lch;
        RightTreeMin->lch = NULL;
        }
        else if (key> root->k)
        {
        if (!root->rch)
        break;
       if (key > root->rch->k)
        {
            root = LL_Rotate(root);
            if (!root->rch)
            break;
        }
        LeftTreeMax->rch= root;
        LeftTreeMax = LeftTreeMax->rch;
        root = root->rch;
        LeftTreeMax->rch = NULL;
        }
        else
        break;
    }
    LeftTreeMax->rch = root->lch;
    RightTreeMin->lch = root->rch;
    root->lch = header.rch;
    root->rch = header.lch;
    return root;
}
s* SplayTree::New_Node(double key)
{
    s* p_node = new s;
    if (!p_node)
    {
        fprintf(stderr, "Out of memory!\n");
        exit(1);
    }
    p_node->k = key;
    p_node->lch = p_node->rch = NULL;
    return p_node;
}
s* SplayTree::Insert(double key, s* root)
{
    static s* p_node = NULL;
    if (!p_node)
    p_node = New_Node(key);
    else
    p_node->k = key;
    if (!root)
    {
        root = p_node;
        p_node = NULL;
        return root;
    }
    root = Splay(key, root);
    if (key < root->k)
    {
        p_node->lch= root->lch;
        p_node->rch = root;
        root->lch = NULL;
        root = p_node;
    }
    else if (key > root->k)
    {
        p_node->rch = root->rch;
        p_node->lch = root;
        root->rch = NULL;
        root = p_node;
    }
    else
    return root;
    p_node = NULL;
    return root;
}
s* SplayTree::Delete(double key, s* root)//delete node
{
    s* temp;
    if (!root)//if tree is empty
    return NULL;
    root = Splay(key, root);
    if (key != root->k)//if tree has one item
    return root;
    else
    {
        if (!root->lch)
        {
        temp = root;
        root = root->rch;
        }
        else
        {
        temp = root;
        root = Splay(key, root->lch);
        root->rch = temp->rch;
        }
        free(temp);
        return root;
    }
}
s* SplayTree::Search(double key, s* root)//seraching
{
    return Splay(key, root);
}
void SplayTree::InOrder(s* root)//inorder traversal
{
    if (root)
    {
        InOrder(root->lch);
        cout<< "key: " <<root->k;
        if(root->lch)
        cout<< " | left child: "<< root->lch->k;
        if(root->rch)
        cout << " | right child: " << root->rch->k;
        cout<< "\n";
        InOrder(root->rch);
    }
}

s* SplayTree::FindMaxNode(s* root)
{
    if (!root)
        return NULL;

    while (root->rch)
        root = root->rch;

    return root;
}

int SplayTree::CountNodes(s* root)
{
    if (!root)
        return 0;

    // Contar el nodo actual y realizar llamadas recursivas a los subárboles
    return 1 + CountNodes(root->lch) + CountNodes(root->rch);
}