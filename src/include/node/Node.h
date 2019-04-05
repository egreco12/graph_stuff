#include <vector>

class Node {
  private:
    int value;
    std::vector<Node*> connections;
  public:
    Node() {}
};
