//
// File: stack.hpp
//
// Programmer:
// Date:        Spring 2024
//
//
// Do not change the names of the classes or methods.  Otherwise, instructor
//  tests will not work.
//
#ifndef CS2_STACK_HPP_
#define CS2_STACK_HPP_
#include <new>
#include <cassert>
#include "../string/string.hpp"


template<typename T> 
class Node {
	public:
		Node() : next(0) {}
		Node(const T& value) : data(value), next(0) {}

		T data;
		Node<T>* next;
};


// CLASS INV:
//
template <typename T>
class stack {
public:
              stack     () : tos(0) {};
              stack     (const stack<T>&); //Copy
              ~stack    (); //Destructor
    void      swap      (stack<T>&); //Constant Swap
    stack<T>& operator= (stack<T> rhs) {swap(rhs); return *this;}; //Overloading Assignment
    
	bool      empty     () const {return tos == 0;};
	bool      full      () const;
	T         top       () const;
	T         pop       ();
	void      push      (const T&);

private:
	Node<T>   *tos;
};

template <typename T>
stack<T>::stack(const stack<T>& copy) : stack() {
    Node<T>* temp = copy.tos;
    Node<T>* bottom;

    while(temp != 0) {
        if(tos == 0) {
            tos = new Node<T>(temp->data);
            bottom = tos;
        }
        else {
            bottom->next = new Node<T>(temp->data);
            bottom = bottom->next;
        }

        temp = temp->next;
    }
}

template <typename T>
T stack<T>::top() const {
    assert(!empty());
    return tos->data;
}

template <typename T>
bool stack<T>::full() const {
    Node<T>* temp = new(std::nothrow) Node<T>();
    if(temp == 0) {return true;}
    delete temp; //just incase it alloc something
    return false;
}

template <typename T>
void stack<T>::swap(stack<T>& rhs) {
    Node<T>* temp = rhs.tos;
    rhs.tos = tos;
    tos = temp;
}

template <typename T>
stack<T>::~stack() {//destructor
    Node<T>* temp = tos;
    while(tos != 0) {
        tos = tos->next;
        delete temp;
        temp = tos;
    }
}

template <typename T>
void stack<T>::push(const T& val) {
    assert(!full());
    Node<T>* temp = new Node<T>(val);

    temp->next = tos;
    tos = temp;
}

template <typename T>
T stack<T>::pop() {
    assert(!empty());
    Node<T>* temp = tos;
    T returnData = tos->data;
    tos = tos->next;
    delete temp;
    return returnData;
}


#endif
