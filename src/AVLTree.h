#ifndef AVLTREE_AVLTREE_H
#define AVLTREE_AVLTREE_H

#include <iostream>
#include <stack>
#include "NodeTree.h"

template<class T>
class AVLTree {
public:
    explicit AVLTree<T>();

    /**
     * Insere uma informação na árvore mantendo balanceamento.
     * @param info informação a ser inserida.
     */
    void insert(T const &info);

    /**
     * Remove uma informação na árvore mantendo balanceamento.
     * @param info informação a ser removida.
     */
    void remove(T const &info);

    /**
     * Verifica se a informação existe na árvore.
     * @param info info é a informação a ser buscada.
     * @return true se ela existe na árvore, caso contrário false.
     */
    bool contains(T const &info);

    /**
     * Overload <<
     * @see https://www.geeksforgeeks.org/level-order-tree-traversal/
     * @details Usado Level Order Tree Traversal
     */
    template<typename U>
    friend std::ostream &operator<<(std::ostream &os, const AVLTree<U> &avl);

private:
    NodeTree<T> *root;

    void balance(std::stack<NodeTree<T> *> &stack);

    void leftRotation(NodeTree<T> *father, NodeTree<T> *child);

    void rightRotation(NodeTree<T> *father, NodeTree<T> *child);
};

#include "AVLTree.inl"

#endif //AVLTREE_AVLTREE_H
