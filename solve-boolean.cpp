#include <iostream>
#include <stack>
#include <string>

// Forward declaration of Node class
class Node;

bool solveBoolean(std::string expression) {
    // Convert the input string into an abstract syntax tree (AST)
    Node* ast = parseExpression(expression);

    // Evaluate the AST
    return evaluateBoolean(ast);
}

Node* parseExpression(std::string expression, int& index) {
    if (index >= expression.length())
        return nullptr;

    Node* node;
    if (expression[index] == 'T' || expression[index] == 'F') {
        node = new Node(expression[index], nullptr, nullptr);
        index++;
    } else if (expression[index] == '|') {
        node = new Node('|', parseExpression(expression, ++index), nullptr);
    } else if (expression[index] == '&') {
        node = new Node('&', parseExpression(expression, ++index), nullptr);
    }

    return node;
}

bool evaluateBoolean(Node* node) {
    if (node->value == 'T' || node->value == 'F')
        return node->value == 'T';

    bool left = evaluateBoolean(node->left);
    bool right = evaluateBoolean(node->right);

    if (node->value == '|') {
        return left || right;
    } else if (node->value == '&') {
        return left && right;
    }
}

class Node {
public:
    char value;
    Node* left;
    Node* right;

    Node(char v, Node* l = nullptr, Node* r = nullptr)
        : value(v), left(l), right(r) {}
};