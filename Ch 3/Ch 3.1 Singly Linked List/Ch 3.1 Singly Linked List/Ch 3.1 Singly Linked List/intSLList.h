#ifndef INT_LINKED_LIST
#define INT_LINKED_LIST

#pragma once
#include <iostream>

using namespace std;

class IntSLLNode {
public:
	IntSLLNode() {
		next = 0;
	}

	IntSLLNode(int el, IntSLLNode* ptr = 0) {
		info = el;
		next = ptr;
	}

	int info;
	IntSLLNode* next;
};

class IntSLList
{
public:
	IntSLList() {
		head = tail = 0;
	}

	~IntSLList();

	int isEmpty() {
		return head == 0;
	}

	void addToHead(int);
	void addToTail(int);
	int deleteFromHead();
	int deleteFromTail();
	void deleteNode(int);
	bool isInList(int) const;

	IntSLLNode *head, *tail;
};

#endif

