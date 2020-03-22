//
// Created by Shou C on 3/17/20.
//
#include <iostream>
class Node {
private:
    int val;
    Node *next;
public:
    explicit Node(int v) { val = v; next = nullptr;}
    int get_val() {return val;}
    Node *get_next() {return next;}
    void set_next(Node *n) {next = n;}
};

class LinkedList {
private:
    Node * head;
public:
    LinkedList(){
        head = nullptr;
    };
    void insert(Node *n){
        if (head == nullptr){head = n;
            return;}
        auto currentNode = head;
        while (currentNode->get_next() != nullptr){
            currentNode = currentNode->get_next();
        }
        currentNode->set_next(n);
    }
// You have to implement the following function only
    int second_smallest(){
        int smallest = head->get_val();
        int smallestIndex = -1;
        int secondSmallest = INT_MAX;
        auto currentNode = head;
        int i = -1;
        while (currentNode != nullptr){
            i++;
            if (currentNode->get_val() <= smallest){
                smallest = currentNode->get_val();
                smallestIndex = i;
            }
            currentNode = currentNode->get_next();
        }
        currentNode = head;
        i = -1;
        while (currentNode != nullptr){
            i++;
            if (currentNode->get_val() <= secondSmallest &&
                currentNode->get_val() >= smallest &&
                i != smallestIndex){
                secondSmallest = currentNode->get_val();
            }
            currentNode = currentNode->get_next();
        }
        return secondSmallest;
    }
};

// T(n) = 2n as traversed twice of all nodes in the linked list
// O(n) = n



