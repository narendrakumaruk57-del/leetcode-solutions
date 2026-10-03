#include <stdio.h>
#include <string.h>

// LeetCode function signature
void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;
    while (left < right) {
        // Swap characters
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

// Local testing main function
int main() {
    char s[] = "hello";
    int size = strlen(s);
    
    printf("Before reverse: %s\n", s);
    reverseString(s, size);
    printf("After reverse: %s\n", s);
    
    return 0;
}