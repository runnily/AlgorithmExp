struct node {
    int value;
    struct node* right;
    struct node* left;
};

int insert(struct node* node, int value) {
    struct node* new = &(struct node){value};
    if (node->value) {
        if (value > node->value) {
            if (node->right) {
                node->right = new;
            } else {
                insert(node->right, value);
            }
        } else {
            if (node->left) {
                node->left = new;
            } else {
                insert(node->left, value);
            }
        }
    return 0;
    }
    return -1;
}

struct node* find(struct node* node, int value) {
    if (node->value) {
        if (node->value == value) {
            return node;
        } else if (node->value > value) {
            return find(node->right, value);
        } else {
            return find(node->left, value);
        }
    }
    return 0;
}

int delete(struct node* del) {
    if (del) {
        if (del->right) {
            struct node* node = del->right; 
            if (node->left) {
                while (node->left) {
                    if (!node->left->left) {
                        del = node->left;
                    }
                }
            } else {
                del = node;
            }
        } else { 
            del = del->left; //replace del with left pointer
        }
    return 0;
    }
    return -1;
}

void inorder(struct node* node) {
    //TODO: inorder
}

void preorder(struct node* node) {
    //TODO: preorder
}

void postorder(struct node* node){
    //TODO: post order
}

int main(int argc, char **argv) {
    //TODO: main
}