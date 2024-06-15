#include "caesar_cipher.h"

void caesar_encrypt(char *message, int key) {
    if (key < 0) {
        key = 26 + (key % 26);  // Normalize negative keys
    }
    for (int i = 0; message[i] != '\0'; i++) {
        char c = message[i];
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            message[i] = (c - base + key) % 26 + base;
        }
    }
}

void caesar_decrypt(char *message, int key) {
    caesar_encrypt(message, -key);
}

