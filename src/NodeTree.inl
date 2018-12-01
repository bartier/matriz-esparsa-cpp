#include <algorithm>

template<class T>
NodeTree<T>::NodeTree() {
    this->info = nullptr;
    this->left = nullptr;
    this->right = nullptr;
    this->balanceFactor = 0;
}

template<class T>
NodeTree<T>::NodeTree(const T &info) {
    this->info = info;
    this->left = nullptr;
    this->right = nullptr;
}

template<class T>
void NodeTree<T>::setLeft(NodeTree<T> *left) {
    this->left = left;
}

template<class T>
void NodeTree<T>::setRight(NodeTree<T> *right) {
    this->right = right;
}

template<class T>
int NodeTree<T>::getBalanceFactor() {
    if (this->isLeaf()) {
        return 0;
    }

    int leftHeight = height(this->left);
    int rightHeight = height(this->right);

    return leftHeight - rightHeight;
}

template<class T>
int NodeTree<T>::height(NodeTree<T> *node) {
    if (node == nullptr) {
        return 0;
    }

    if (node->isLeaf()) {
        return 1;
    }

    return std::max(height(node->left), height(node->right)) + 1;
}

template<class T>
NodeTree<T> *NodeTree<T>::next(const T &info) {
    if (info > this->info) {
        return this->right;
    } else if (info < this->info) {
        return this->left;
    }

    // Lançar exceção se for igual...
}

template<class T>
bool NodeTree<T>::isLeaf() {
    return this->left == nullptr && this->right == nullptr;
}

template<class T>
T NodeTree<T>::getInfo() {
    return this->info;
}

template<class T>
NodeTree<T> *NodeTree<T>::getLeft() {
    return this->left;
}

template<class T>
NodeTree<T> *NodeTree<T>::getRight() {
    return this->right;
}

template<class T>
void NodeTree<T>::setInfo(const T &info) {
    this->info = info;
}
