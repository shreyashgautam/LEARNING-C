#include <stdio.h>

// Function to simulate Tower of Hanoi without recursion
void towerOfHanoi(int n) {
    int stackN[1000], stackSource[1000], stackDest[1000], stackAux[1000], stackState[1000];
    int top = -1;  // Initialize top of the stack

    // Push the initial frame onto the stacks
    stackN[++top] = n;
    stackSource[top] = 'A';
    stackDest[top] = 'C';
    stackAux[top] = 'B';
    stackState[top] = 0;

    // Loop until the stack is empty
    while (top >= 0) {
        // Pop the top frame
        int currentN = stackN[top];
        char currentSource = stackSource[top];
        char currentDest = stackDest[top];
        char currentAux = stackAux[top];
        int currentState = stackState[top--];

        // Check the current state
        switch (currentState) {
            case 0:
                // Move n disks from source to auxiliary using destination as auxiliary
                if (currentN > 0) {
                    stackN[++top] = currentN - 1;
                    stackSource[top] = currentSource;
                    stackDest[top] = currentAux;
                    stackAux[top] = currentDest;
                    stackState[top] = 0;

                    stackN[++top] = currentN - 1;
                    stackSource[top] = currentAux;
                    stackDest[top] = currentDest;
                    stackAux[top] = currentSource;
                    stackState[top] = 0;

                    stackState[++top] = 1;
                }
                break;

            case 1:
                // Move the largest disk from source to destination
                printf("Move disk from %c to %c\n", currentSource, currentDest);
                stackState[++top] = 2;
                break;

            case 2:
                // Move n disks from auxiliary to destination using source as auxiliary
                if (currentN > 0) {
                    stackN[++top] = currentN - 1;
                    stackSource[top] = currentAux;
                    stackDest[top] = currentDest;
                    stackAux[top] = currentSource;
                    stackState[top] = 0;
                }
                break;
        }
    }
}

int main() {
    int n;

    // Input the number of disks
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    // Call the towerOfHanoi function
    towerOfHanoi(n);

    return 0;
}
