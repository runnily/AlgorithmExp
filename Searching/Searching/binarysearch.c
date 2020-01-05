#include <stdio.h> 
#include <stdlib.h> 
typedef struct node node;

struct node {
    int value;
    struct node* right;
    struct node* left;
};

/*
* Description:
*   protoype for the insert method. The insert method
*   creates a new node in the given node provided. The node
*   given could be a root node, or an abitary root node.
*   A node would be inserted right or left depending on the 
*   value.
* ALGORTHIUM: INSERT
*   INPUTS: struct node pointer
*   VARABLES: none
*   OUTPUT: int
* This would output either 0 or -1. O if the node value provided is not null,
* -1 when the node value provided is null
*/
node* insert(node* node, int value);
node* insert(node* node, int value) {
    if (node) {
        struct node* new = (struct node*) malloc(sizeof(node));
        if (value > node->value) {
            if (node->right) {
                insert(node->right, value);
            } else {
                new->value = value;
                node->right = new;
            }
        } else {
            if (node->left) {
                insert(node->left, value);
            } else {
                new->value = value;
                node->left = new;
            }
        }
        return node;
    }
    node = (struct node*) malloc(sizeof(node));
    node->value = value;
    return node;
}

/*
* Description:
*   This functions finds a node from the binary tree,
*   given the value, and a node. This node is preassumly
*   a root node or an ablitary node.
* ALGORTHIUM: find
*   INPUT: struct node pointer, int value
*   VARIABLES: none
*   RETURNS: struct node
*/
node* find(struct node* node, int value);
node* find(struct node* node, int value) {
    if (node->value) {
        if (node->value == value) {
            return node;
        } else if (node->value > value) {
            return find(node->right, value);
        } else {
            return find(node->left, value);
        }
    }
    return NULL;
}
/*
* Description:
*   The delete function deletes the node provided from the parameter.
* ALGORTHUM: delete
*   INPUTS: struct node pointer
*   VARIABLES: struct node pointer
*   RETURNS: 0 or -1
*       0 - if success
*       -1 - for unsuccessfull deletions (usally when node is null)
*/
node* delete(node* del);
node* delete(node* del) {
    if (del) {
        struct node* new =  (struct node*) malloc(sizeof(node));
        if (del->right) { // ... if there is a right node
            struct node* right = del->right; // ... get right node
            if (right->left) { // ... if there is at right pointer
                //struct node* leftmost = right->left;
                while (right->left) { // ... while it has a left node
                    //leftmost = leftmost->left // ... resaign right, to right left's , lefts node
                    if (!right->left->left) { // ... if right left node has no left node stop
                        new = right->left;
                    }
                }
            } else {
                new = right; //del has right node
            }
        } else { 
            new = del->left; //replace del with left pointer
        }
    free(del);
    return new;
    }
    return del;
}
 
void inorder(node* node);
void inorder(node* node) {
    if (node) {
        inorder(node->left);
        printf("%d ", node->value);
        inorder(node->right);
    }
}

void preorder(node* node);
void preorder(node* node) {
    //TODO: preorder
}

void postorder(node*node);
void postorder(node* node){
    //TODO: post order
}
