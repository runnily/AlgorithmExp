#include "binarysearch.c"

int main(int argc, char** argv) {
    
    struct node *root = NULL;

    root = insert(root, 8);
  
    struct node* node = insert(root, 4);
    //printf("%d ", node->value);
    printf("%d ", root->left->value);
    
    //inorder(root);
    //root = insert(root, 9);
    //root = insert(root, 47);

    
    //struct node node = delete(&root);
    
    //printf("%d", root.left->value);
    
    //struct node node;
    //node = insert(&root, 4);


    //node = insert(&root, 55);
   // printf("%d ", root.left->value);
   // printf("%d ", root.right->value);

    //inorder(&root);
}