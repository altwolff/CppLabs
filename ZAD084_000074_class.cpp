// ----------- ZAD74 -----------
//(class) Do klasy TreeNode z poprzedniego zadania (70) dodajmy klasę Tree reprezetującą całe drzewo

//Dodaj do klasy Tree metodę printHorizontal(), która wydrukuje całe drzewo w ASCII tak jak w przykładzie
//(rozwiązaniem jest tylko brakujący kod)

//W przykładzie wydrukujemy drzewo 5 3 4 2 6 czyli:
//    5
//   / \
//  3   6
// / \
//2  4

//Drzewo ma być drukowane w taki sposób – poziomo:
//./tree 5 3 4 2 6 ➞ WYDRUKUJE:
// /6
//=5
//  /4
// \3
//  \2

#include <iostream>

// TODO tu trzeba umieścić klasę TreeNode z poprzedniego zadania (70) <!-- TODO brakuje insert!!!!!!!!!!!!!
class TreeNode {
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
    void printHorizontal(){
		printHorizontal_q(root, 0, 0);
    }

    void printHorizontal_q(TreeNode* c, int s, int d){
        if(c -> right != nullptr) {
            printHorizontal_q(c -> right, 1 , d + 1);
        }
        for(int i = 0; i < d; i++ ) {
            std::cout << " ";
        }
        if(s == -1) {
            std::cout<<"\\";
        }
        else if (s == 0) {
            std::cout << "=";
        }
        else{
            std::cout << "/";
        }
        std::cout<< c -> val << std::endl;
        if(c -> left != nullptr) {
            printHorizontal_q(c -> left, -1, d + 1);
        }
    }
// ROZWIĄZANIE KONIEC

// TODO insert z poprzedniego zadania <!--
void insert(int val) {
	if (root == nullptr) {
		root = new TreeNode(val);
		return;
	}
	TreeNode *c = root;
	while (true) {

		if (c->val <= val) {
			if (c->right == nullptr) {
				c->right = new TreeNode(val);
				break;
			} else
				c = c->right;

		} else{
			if (c->left == nullptr) {
				c->left = new TreeNode(val);
				break;
			} else
				c = c->left;
		}
	}
}
// -->
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
int main(int argc, char** argv) {
	Tree tree;

	// insert some values into the tree
	for(int i=1; i<argc; ++i)
		tree.insert(std::stoi(argv[i]));

	tree.printHorizontal();
	return 0;
}