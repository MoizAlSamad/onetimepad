#include <stdio.h>
#include <stdlib.h>
#define len 12

int main() {
    FILE* randfile;
    FILE* outfile;
    unsigned char next;
    randfile = fopen("rand.txt", "rb");
    outfile = fopen("key.txt", "wb");
    if (randfile == NULL || outfile == NULL) {
        printf("File error!\n");
        return 1;
    }
    for (int i=0; i<len; i++) {
        fread(&next, 1, 1, randfile);
        fwrite(&next, 1, 1, outfile);
    }
    fclose(randfile);
    fclose(outfile);
    return 0;
}
