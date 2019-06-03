//
//  BinaryTreeTester.hpp
//  DataStructure
//
//  Created by Kaufman, Robert on 4/16/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeTester_hpp
#define BinaryTreeTester_hpp

#include "../Model/Nodes/BinaryTree.hpp"
#include "../Model/Nodes/BinarySearchTree.hpp"

class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
public:
    void treeStuff();
};

#include <stdio.h>

#endif /* BinaryTreeTester_hpp */
