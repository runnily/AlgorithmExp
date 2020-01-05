node insert(node* node, int value);
//...was not working before because node was not returned and so values
// got lost.
node insert(node* node, int value) {
    //struct node* new =  (struct node*) malloc(sizeof(node));
    struct node new = *node;
    if (node) {
        //struct node new = *node;
        if (value > node->value) {
            if (node->right) {
                insert(node->right, value);
            } else {
                 new.right = &(struct node){value};
                //new->value = value;
                //node->right = new;
            }
        } else {
            if (node->left) {
                insert(node->left, value);
            } else {
                new.left = &(struct node){value};
                //new->value = value;
                //node->left = new;
            }
        }
        return new;
    }
    return (struct node){value};
}

node insert(node* node, int value);
node insert(node* node, int value) {
    if (node) {
        struct node new = *node;
        if (value > node->value) {
            if (node->right) {
                insert(node->right, value);
            } else {
                new.right = &(struct node){value};
            }
        } else {
            if (node->left) {
                insert(node->left, value);
            } else {
                new.left = &(struct node){value};
            }
        }
        return new;
    }

    node = &(struct node){value};
    return *node;
}