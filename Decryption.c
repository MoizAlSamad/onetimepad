#include <stdio.h>
#include <string.h>

int main() {
    char cipher[100], key[100], msg[100];
    int i, len;

    printf("Enter the encrypted message: ");
    gets(cipher);

    len = strlen(cipher);

    printf("Enter the key used for encryption: ");
    gets(key);

    // Perform one-time pad decryption
    for(i=0; i<len; i++) {
        msg[i] = ((cipher[i]-'A') - (key[i]-'A') + 26) % 26 + 'A';
    }
    msg[i] = '\0';

    printf("Encrypted Message: %s\n", cipher);
    printf("Key: %s\n", key);
    printf("Decrypted Message: %s\n", msg);

    return 0;
}
