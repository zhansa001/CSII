#ifndef CS2_TREE_LAB_BTREE_HPP
#define CS2_TREE_LAB_BTREE_HPP

#include <iostream>

template <typename T>
class btree {
public:
              btree    ()                 : left(0), right(0), empty(true) {}
              btree    (const T& val)     : left(0), right(0), empty(false), data(val) {}
              btree    (const btree<T>&);
              ~btree   ();
    void      swap     (btree<T>&);
    btree<T>& operator=(btree<T> rhs)     { swap(rhs); return *this; }

    bool      isEmpty  () const           { return empty; }
    void      insert   (const T&);

    // TODO - NEEDS IMPLEMENTING
    bool      find     (const T&) const;
    void      inorder  (std::ostream&) const;
    void      preorder (std::ostream&) const;
    void      postorder(std::ostream&) const;
    int       findDepth(const T&) const;

private:
    btree<T>* left;
    btree<T>* right;
    bool      empty;
    T         data;

};

template <typename T>
btree<T>::btree(const btree<T>& actual) : btree<T>() { //Copy constructor
    // Preorder
    // Visit - copy the data
    data = actual.data;
    empty = actual.empty;
    // Left
    if (actual.left)  { left  = new btree<T>(*(actual.left));  }
    // Right
    if (actual.right) { right = new btree<T>(*(actual.right)); }
}

template <typename T>
btree<T>::~btree() { //Destructor
    // Postorder
    // Left
    if (left)  delete left;
    // Right
    if (right) delete right;
    // Visit - compiler deletes *this.
}

template <typename T>
void btree<T>::swap(btree<T>& rhs) { //Swap function
    T temp = data;
    data = rhs.data;
    rhs.data = temp;
    bool tempty = empty;
    empty = rhs.empty;
    rhs.empty = tempty;
    
    btree<T> *ptr = left;
    left = rhs.left;
    rhs.left = ptr;
    ptr = right;
    right = rhs.right;
    rhs.right = ptr;
}


template <typename T>
void btree<T>::insert(const T& item) {
    if (empty) {
        data = item;
        empty = false;
    }
    else if (item < data) {
        if (!left) { left = new btree<T>(item); }
        else       { left->insert(item); }
    }
    else if (item > data) {
        if (!right) { right = new btree<T>(item); }
        else        { right->insert(item); }
    }
    else { return; } //No duplicates
}

template <typename T>
bool btree<T>::find(const T& key) const {
    // TODO - Needs implementing!
    if(empty){
        return false; 
    }
    else if(key == data){
        return true;
    }
    else if(key < data) {
        if(left) {
            return left->find(key);
        }
    }
    else if(key > data) {
        if(right) {
            return right->find(key);
        }
    }

    return false;
}

template <typename T>
void btree<T>::postorder(std::ostream& out) const {
    // TODO - Needs implementing!

    //Left
    if(left) {
        left->postorder(out);
    }

    //Right
    if(right) {
        right->postorder(out);
    }

    //Visit
    out << data << " ";
}

template <typename T>
void btree<T>::preorder(std::ostream& out) const {
    // TODO - Needs implementing!

    //Visit
    out << data << " ";

    //Left
    if(left) {
        left->preorder(out);
    }

    //Right
    if(right) {
        right->preorder(out);
    }

}

template <typename T>
void btree<T>::inorder(std::ostream& out) const {
    // TODO - Needs implementing!

    //Left
    if(left) {
        left->inorder(out); 
    }

    //Action
    out << data << " ";

    //Right
    if(right) {
        right->inorder(out); 
    }
}

template <typename T>
int btree<T>::findDepth(const T& key) const {
    if(empty){
        return -1; // Tree is empty, key not found
    }
    else if(key == data){
        return 0; // Found at the current node
    }
    else if(key < data) {
        if(left) {
            int depth = left->findDepth(key); // Search in left substree
            return (depth == -1) ? -1 : depth + 1; // Increment depth if found
        }
    }
    else if(key > data) {
        if(right) {
            int depth = right->findDepth(key); //Search in right left substree
            return (depth == -1) ? -1 : depth + 1; //Increment if found
        }
    }
    return -1;
}

#endif
