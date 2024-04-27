// ----------- ZAD71 -----------
//(class) Do klasy TreeNode z poprzedniego zadania (70) dodajmy klasę Tree reprezetującą całe drzewo

//Dodaj do klasy Tree metodę insert(), która dodaje koleją watość do drzewa
//<a href=https://en.wikipedia.org/wiki/Binary_tree#Insertion>Dodawanie wartości do drzewa binarnego</a> działa w następujący sposób:
//- jeśli kożeń nie istnieje to umieść pierwszą wartość jako kożeń
//- jeśli wkładana wartość jest większa lub równa wartości węzła w której jesteśmy to przechodzimy do prawego węzła w przeciwnym razie do lewego
//- jeśli węzeł do którego przechodzimy nie istnieje to tu mamy umieścić nową wartość
//(rozwiązaniem jest tylko brakujący kod)

//./tree ➞ WYDRUKUJE:
//8 should be 8
//6 should be 6

#include <iostream>

// TODO tu trzeba umieścić klasę TreeNode z poprzedniego zadania (70) <!--
class TreeNode {
private:

public:
    int val;
    TreeNode* left= nullptr;
    TreeNode* right= nullptr;
    TreeNode(int val){
        this->val = val;
    }
};
// -->

class Tree {
public:
	TreeNode* root;
	Tree() : root(nullptr) {}
// ROZWIĄZANIE POCZATEK
void insert(int val) {
    root = insertRecursive(root, val);
}

TreeNode* insertRecursive(TreeNode* node, int val) {
    if (node == nullptr) {
        return new TreeNode(val);
    }

    if (val >= node->val) {
        node->right = insertRecursive(node->right, val);
    } else {
        node->left = insertRecursive(node->left, val);
    }

    return node;
}

// ROZWIĄZANIE KONIEC

	~Tree() {
		deleteTree(root);
	}
private:
	void deleteTree(TreeNode* node) {
		if (node == nullptr)
			return;

		// first delete both subtrees
		deleteTree(node->left);
		deleteTree(node->right);

		// then delete the node
		delete node;
	}
};

using namespace std;
int main() {
Tree tree;
//     5
//    / \
//   3   7
//  / \ / \
// 2  4 6  8
// insert some values into the tree
tree.insert(5);
tree.insert(3);
tree.insert(7);
tree.insert(2);
tree.insert(4);
tree.insert(6);
tree.insert(8);

// test
cout << tree.root->right->right->val << " should be 8" << endl;
cout << tree.root->right->left->val << " should be 6" << endl;

}