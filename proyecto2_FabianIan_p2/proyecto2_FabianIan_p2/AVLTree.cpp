#include "pch.h"
#include "AVLTree.h"

int avl_tree::height(avl *t) {
   int h = 0;
   if (t != NULL) {
      int l_height = height(t->l);
      int r_height = height(t->r);
      int max_height = max(l_height, r_height);
      h = max_height + 1;
   }
   return h;
}

int avl_tree::difference(avl *t) {
   int l_height = height(t->l);
   int r_height = height(t->r);
   int b_factor = l_height - r_height;
   return b_factor;
}

avl *avl_tree::rr_rotat(avl *parent) {
   avl *t;
   t = parent->r;
   parent->r = t->l;
   t->l = parent;
   return t;
}
avl *avl_tree::ll_rotat(avl *parent) {
   avl *t;
   t = parent->l;
   parent->l = t->r;
   t->r = parent;
   return t;
}

avl *avl_tree::lr_rotat(avl *parent) {
   avl *t;
   t = parent->l;
   parent->l = rr_rotat(t);
   return ll_rotat(parent);
}

avl *avl_tree::rl_rotat(avl *parent) {
   avl *t;
   t = parent->r;
   parent->r = ll_rotat(t);
   return rr_rotat(parent);
}

avl *avl_tree::balance(avl *t) {
   int bal_factor = difference(t);
   if (bal_factor > 1) {
      if (difference(t->l) > 0)
         t = ll_rotat(t);
      else
         t = lr_rotat(t);
   } else if (bal_factor < -1) {
      if (difference(t->r) > 0)
         t = rl_rotat(t);
      else
         t = rr_rotat(t);
   }
   return t;
}

avl *avl_tree::insert(avl *r, double v) {
   if (r == NULL) {
      r = new avl;
      r->d = v;
      r->l = NULL;
      r->r = NULL;
      return r;
   } else if (v< r->d) {
      r->l = insert(r->l, v);
      r = balance(r);
   } else if (v >= r->d) {
      r->r = insert(r->r, v);
      r = balance(r);
   } return r;
}

void avl_tree::show(avl *p, double l) {
   int i;
   if (p != NULL) {
      show(p->r, l+ 1);
      cout<<" ";
      if (p == r)
         cout << "Root -> ";
      for (i = 0; i < l&& p != r; i++)
         cout << " ";
         cout << p->d;
         show(p->l, l + 1);
   }
}

void avl_tree::inorder(avl *t) {
   if (t == NULL)
      return;
      inorder(t->l);
      cout << t->d << " ";
      inorder(t->r);
}

void avl_tree::preorder(avl *t) {
   if (t == NULL)
      return;
      cout << t->d << " ";
      preorder(t->l);
      preorder(t->r);
}

void avl_tree::postorder(avl *t) {
   if (t == NULL)
      return;
      postorder(t ->l);
      postorder(t ->r);
      cout << t->d << " ";
}

int avl_tree::countNodes(avl* root) {
    if (root == nullptr) {
        return 0;
    }
    return 1 + countNodes(root->l) + countNodes(root->r);
}

avl* avl_tree::findMaxValueNode(avl* root) {
    if (root == nullptr) {
        return nullptr;
    }
    else if (root->r == nullptr) {
        return root;
    }
    return findMaxValueNode(root->r);
}

avl* avl_tree::deleteNode(avl* root, double v) {
    if (root == nullptr)
        return root;

    if (v < root->d) {
        root->l = deleteNode(root->l, v);
        root = balance(root);
    }
    else if (v > root->d) {
        root->r = deleteNode(root->r, v);
        root = balance(root);
    }
    else {
        if (root->l == nullptr || root->r == nullptr) {
            avl* temp = root->l ? root->l : root->r;
            if (temp == nullptr) {
                temp = root;
                root = nullptr;
            }
            else {
                *root = *temp;
            }
            delete temp;
        }
        else {
            avl* temp = findMaxValueNode(root->l);
            root->d = temp->d;
            root->l = deleteNode(root->l, temp->d);
            root = balance(root); // Se debe equilibrar el nodo root después de eliminar el nodo
        }
    }

    if (root == nullptr)
        return root;
    root = balance(root);
    return root;
}