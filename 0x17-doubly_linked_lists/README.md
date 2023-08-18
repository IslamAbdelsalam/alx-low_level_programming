# Doubly Linked List in C

This repository contains a basic implementation of a doubly linked list in the C programming language. A doubly linked list is a data structure that consists of a sequence of elements, where each element contains a value and pointers to the previous and next elements in the sequence.

## Table of Contents

- [Introduction](#introduction)
- [Features](#features)
- [Usage](#usage)
  - [Prerequisites](#prerequisites)
  - [Compilation](#compilation)
  - [Example](#example)
- [Functions](#functions)
- [Contributing](#contributing)
- [License](#license)

## Introduction

A doubly linked list is an extension of a singly linked list, where each node in the list contains a value and two pointers: one to the previous node and one to the next node. This structure allows for more versatile traversal in both directions.

## Features

- Insertion of elements at the beginning, end, or at a specific position in the list.
- Deletion of elements from the list.
- Forward and backward traversal of the list.
- Checking if the list is empty.
- Finding the length of the list.

## Usage

### Prerequisites

To use the doubly linked list implementation, you need a C compiler such as GCC.

### Compilation

Compile the code using the following command:

```sh
gcc doubly_linked_list.c -o doubly_linked_list
```

### Example

```c
#include <stdio.h>
#include "doubly_linked_list.h"

int main() {
    // Create a new doubly linked list
    DoublyLinkedList* list = createDoublyLinkedList();

    // Insert elements into the list
    insertAtBeginning(list, 5);
    insertAtEnd(list, 10);
    insertAfterNode(list, list->head, 7);

    // Print the list
    printf("List: ");
    displayForward(list);

    // Delete an element
    deleteNode(list, 5);

    // Print the list after deletion
    printf("List after deletion: ");
    displayForward(list);

    // Clean up
    destroyDoublyLinkedList(list);

    return 0;
}
```

## Functions

- `DoublyLinkedList* createDoublyLinkedList()`: Creates and returns an empty doubly linked list.
- `void insertAtBeginning(DoublyLinkedList* list, int value)`: Inserts a new node with the given value at the beginning of the list.
- `void insertAtEnd(DoublyLinkedList* list, int value)`: Inserts a new node with the given value at the end of the list.
- `void insertAfterNode(DoublyLinkedList* list, Node* prevNode, int value)`: Inserts a new node with the given value after the specified node.
- `void deleteNode(DoublyLinkedList* list, int value)`: Deletes the first occurrence of a node with the given value from the list.
- `void displayForward(DoublyLinkedList* list)`: Displays the elements of the list in forward order.
- `void displayBackward(DoublyLinkedList* list)`: Displays the elements of the list in backward order.
- `int isEmpty(DoublyLinkedList* list)`: Returns 1 if the list is empty, 0 otherwise.
- `int getLength(DoublyLinkedList* list)`: Returns the number of elements in the list.
- `void destroyDoublyLinkedList(DoublyLinkedList* list)`: Frees the memory occupied by the list and its nodes.

## Contributing

Contributions to this repository are welcome! If you find any issues or want to add improvements, feel free to open a pull request.

## License

This project is licensed under the [MIT License](LICENSE). You are free to use, modify, and distribute the code for your purposes.