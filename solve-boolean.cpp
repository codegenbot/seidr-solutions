#include <iostream>
#include <stack>
#include <string>

struct Node {
    char value;
    Node* left;
    Node* right;
};

Node* parseExpression(std::string expression) {
    Node* root = nullptr;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            Node* node = new Node();
            node->value = '|';
            node->left = rightmostNode(root);
            root = node;
        } else if (expression[i] == '&') {
            Node* node = new Node();
            node->value = '&';
            node->right = rightmostNode(root);
            root = node;
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            Node* node = new Node();
            node->value = expression[i];
            node->left = nullptr;
            node->right = nullptr;
            root = node;
        }
    }
    return root;
}

Node* rightmostNode(Node* node) {
    if (node == nullptr) {
        return nullptr;
    }
    while (node->right != nullptr) {
        node = node->right;
    }
    return node;
}

bool evaluateBoolean(Node* node) {
    if (node->value == 'T') {
        return true;
    } else if (node->value == 'F') {
        return false;
    }

    bool left = evaluateBoolean(node->left);
    bool right = evaluateBoolean(node->right);

    if (node->value == '|') {
        return left || right;
    } else if (node->value == '&') {
        return left && right;
    }
}

bool solveBoolean(std::string expression) {
    Node* ast = parseExpression(expression);
    bool result = evaluateBoolean(ast);
    delete ast;
    return result;
}