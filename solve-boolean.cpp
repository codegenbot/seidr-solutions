#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Node structure for binary tree representing Boolean expression.
struct Node {
    char value;
    Node* left;
    Node* right;
};

bool solveBoolean(std::string expression) {
    // Convert the input string into an abstract syntax tree (AST)
    Node* ast = parseExpression(expression);

    // Evaluate the AST
    return evaluateBoolean(ast);

    // Cleanup memory after processing the AST
    delete ast;
}

// Parse the input string into a binary tree.
Node* parseExpression(std::string expression) {
    stack<Node*> s;
    Node* node = NULL;

    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            node->right = new Node();
            node->right->value = '|';
            s.push(node);
            node = node->right;
        } else if (expression[i] == '&') {
            node->right = new Node();
            node->right->value = '&';
            s.push(node);
            node = node->right;
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            node = new Node();
            node->value = expression[i];
            s.push(node);
        }
    }

    // Pop the remaining nodes from the stack
    while (!s.empty()) {
        node = s.pop();
    }

    return node;
}

// Evaluate the binary tree representing a Boolean expression.
bool evaluateBoolean(Node* node) {
    if (node->value == 'T' || node->value == 'F') {
        return node->value == 'T';
    }

    bool left = evaluateBoolean(node->left);
    bool right = evaluateBoolean(node->right);

    if (node->value == '|') {
        return left || right;
    } else if (node->value == '&') {
        return left && right;
    }
}