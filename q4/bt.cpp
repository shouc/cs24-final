//
// Created by Shou C on 3/17/20.
//

class TreeNode {
private:
    char val;
    TreeNode *left;
    TreeNode *right;
public:
    TreeNode(int v) {val = v;left = right = nullptr;}
    TreeNode* get_left(){ return left; }
    TreeNode* get_right(){ return right; }
    char get_val(){ return val; }
    void set_left(TreeNode* v){ left = v; }
    void set_right(TreeNode* v){ right = v; }
    void set_val(char c){ val = c; }
};

bool is_full(TreeNode* n){
    if (n != nullptr){
        if (n->get_left() == nullptr && n->get_right() == nullptr){
            // leaf node
            return true;
        } else {
            if (n->get_left() == nullptr || n->get_right() == nullptr){
                // bad node
                return false;
            }
        }
        return is_full(n->get_left()) && is_full(n->get_right());
    } else {
        return true;
    }
}
// O(n), n is nodes in tree


TreeNode* swap(TreeNode* n){
    if (n == nullptr){ return nullptr; }
    auto newNode = new TreeNode(n->get_val());
    newNode->set_right(swap(n->get_left()));
    newNode->set_left(swap(n->get_right()));
    return newNode;
}

// O(n), n is nodes in tree
