#include <iostream>

// It's binary because each node has at most 2 children.
class BinaryTreeNode {
public:
	int value;
	BinaryTreeNode* child1;
	BinaryTreeNode* child2;

	BinaryTreeNode(int _value) {
		value = _value;
		child1 = nullptr;
		child2 = nullptr;
	}
};

int main() {
	BinaryTreeNode parent(1);
	BinaryTreeNode child1(2);
	BinaryTreeNode child2(3);

	parent.child1 = &child1;
	parent.child2 = &child2;

	std::cout << "parent: " << parent.value << '\n'; 
	std::cout << "child 1: " << parent.child1->value << '\n'; 
	std::cout << "child 2: " << parent.child2->value << '\n'; 

	return 0;
}
