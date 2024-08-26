#include <stdio.h>
#include <stdlib.h>

struct Node {
    char item;
    struct Node* next;
    struct Node* prev;
};

// Function to insert an item at the end of the playlist
void insertAtEnd(struct Node** head, char item) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->item = item;
    newNode->next = NULL;

    if (*head == NULL) {
        newNode->prev = NULL;
        *head = newNode;
        return;
    }

    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newNode;
    newNode->prev = current;
}

// Function to display the playlist in the forward direction
void displayForward(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%c ", current->item);
        current = current->next;
    }
    printf("\n");
}

// Function to display the playlist in the backward direction
void displayBackward(struct Node* tail) {
    struct Node* current = tail;
    while (current != NULL) {
        printf("%c ", current->item);
        current = current->prev;
    }
    printf("\n");
}

void freePlaylist(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
}

int main() {
    struct Node* playlist = NULL;
    char item;

    while (1) {
        scanf(" %c", &item);
        if (item == '-') {
            break;
        }
        insertAtEnd(&playlist, item);
    }

    struct Node* tail = playlist;
    while (tail->next != NULL) {
        tail = tail->next;
    }

    printf("Forward Playlist: ");
    displayForward(playlist);

    printf("Backward Playlist: ");
    displayBackward(tail);

    freePlaylist(playlist);

    return 0;
}
