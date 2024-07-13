#include <iostream>
#include <string>

using namespace std;

struct Node {
    char value;
    Node* left;
    Node* right;
};

Node* parseExpression(std::string expression) {
    stack<Node*> s;
    Node* root = nullptr;
    for (int i = 0; i < expression.length(); i++) {
        if (expression[i] == '|') {
            Node* temp = new Node();
            temp->value = '|';
            temp->right = s.top();
            s.pop();
            temp->left = s.top();
            s.pop();
            s.push(temp);
        } else if (expression[i] == '&') {
            Node* temp = new Node();
            temp->value = '&';
            temp->right = s.top();
            s.pop();
            s.push(temp);
        } else if (expression[i] == 'T' || expression[i] == 'F') {
            Node* temp = new Node();
            temp->value = expression[i];
            s.push(temp);
        }
    }
    root = s.top();
    return root;
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