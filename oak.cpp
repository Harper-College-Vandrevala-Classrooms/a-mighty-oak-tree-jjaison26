#include <iostream>

using namespace std;

class Squirrel {
  private:
    string name;

  public:
    Squirrel(string name) {
      this->name = name;
    }

    string get_name() {
      return this->name;
    }
};

class Node {
        private:
                Squirrel* data;
                Node* leftptr;
                Node* rightptr;
        public:
                Node(Squirrel* s) {
                        data = s;
                        leftptr = nullptr;
                        rightptr= nullptr;
                }
                void set_left(Node* obj) {
                        leftptr = obj;
                }

                void set_right(Node* obj) {
                        rightptr = obj;
		}

                Node* left() {
                        return leftptr;
                }

                Node* right() {
                        return rightptr;
                }
};


int main() {
        Squirrel cheeks = Squirrel("Cheeks");
Node* node_one = new Node(&cheeks);

Squirrel squeaks = Squirrel("Squeaks");
Node* node_two = new Node(&squeaks);

Squirrel fluffybutt = Squirrel("Mr. Fluffy Butt");
Node* node_three = new Node(&fluffybutt);

node_one->set_left(node_two);
node_one->set_right(node_three);

Node* retrieved_node_one = node_one->left(); // This should retrieve the left node
Node* retrieved_node_two = node_one->right(); // This should retrieve the right node

        return 0;
}

