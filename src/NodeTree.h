#ifndef AVLTREE_NODETREE_H
#define AVLTREE_NODETREE_H

template<class T>
class NodeTree {
public:
    explicit NodeTree<T>();

    explicit NodeTree<T>(const T &info);

    void setLeft(NodeTree<T> *left);

    void setRight(NodeTree<T> *right);

    void setInfo(const T &info);

    NodeTree<T> *getLeft();

    NodeTree<T> *getRight();

    T getInfo();

    NodeTree<T> *next(const T &info);

    bool isLeaf();

    int getBalanceFactor();

private:
    T info;
    NodeTree<T> *left;
    NodeTree<T> *right;

    int height(NodeTree<T> *node);

};

#include "NodeTree.inl"

#endif //AVLTREE_NODETREE_H
