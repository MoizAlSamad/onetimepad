#include <stdio.h>
#include <string.h>

int main() {
    char msg[100], key[100], cipher[100];
    int i, len;

    printf("Enter a message to encrypt: ");
    gets(msg);

    len = strlen(msg);

    printf("Enter a key of same length as the message: ");
    gets(key);

    // Perform one-time pad encryption
    for(i=0; i<len; i++) {
        cipher[i] = ((msg[i]-'A') + (key[i]-'A')) % 26 + 'A';
    }
    cipher[i] = '\0';

    printf("Original Message: %s\n", msg);
    printf("Key: %s\n", key);
    printf("Encrypted Message: %s\n", cipher);

    return 0;
}
