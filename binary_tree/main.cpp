//Sandy Zhang
//11/22/24

#include "btree.hpp"
#include <iostream>

int main() {
    btree<int> child;

    child.insert(8);
    child.insert(4);
    child.insert(55);
    child.insert(1);
    child.insert(7);
    child.insert(16);
    child.insert(87);
    child.insert(2);
    child.insert(9);
    child.insert(64);
    child.insert(99);

    // Demonstrating the find function
    std::cout << "Find Function Results: " << std::endl;
    std::cout << "Find 87: " << (child.find(87) ? "Found" : "Not Found") << std::endl;
    std::cout << "Find 21: " << (child.find(21) ? "Found" : "Not Found") << std::endl;
    std::cout << "Find 2: " << (child.find(2) ? "Found" : "Not Found") << std::endl;
    std::cout << "Find 99: " << (child.find(99) ? "Found" : "Not Found") << std::endl;
    std::cout << std::endl;

    // Demonstrate Inorder functions
    std::cout << "Inorder Traversal: ";
    child.inorder(std::cout);
    std::cout << std::endl;

    // Demonstrate Preorder Function
    std::cout << "Preorder Traversal: ";
    child.preorder(std::cout);
    std::cout << std::endl;

    //Demonstrate Postorder Function
    std::cout << "Postorder Traversal: ";
    child.postorder(std::cout);
    std::cout << std::endl;
    

    //Demonstrate findDepth function
    std::cout << "\nFindDepth Function Results:" << std::endl;
    std::cout << "Depth of 64: " << child.findDepth(64) << std::endl;  // Should print: 2
    std::cout << "Depth of 8: " << child.findDepth(8) << std::endl; // Should print: 0
    std::cout << "Depth of 20: " << child.findDepth(20) << std::endl; // Should print: 2
    std::cout << "Depth of 7: " << child.findDepth(7) << std::endl; // Should print: -1 (not found)

    return 0;
}