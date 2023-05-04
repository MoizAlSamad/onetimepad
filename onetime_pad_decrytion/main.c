#include <stdio.h>
#define len 12

int main() {
    FILE* keyfile;
    FILE* pfile;
    FILE* cfile;
    unsigned char ch1, ch2;
    keyfile = fopen("key.txt", "rb");
    pfile = fopen("ptext2.txt", "wb");
    cfile = fopen("ctext.txt", "rb");
    if (keyfile == NULL || pfile == NULL || cfile == NULL) {
        printf("File error!\n");
        return 1;
    }
    for (int i=0; i<len; i++) {
        fscanf(keyfile, "%c", &ch1);
        fscanf(cfile, "%c", &ch2);
        fprintf(pfile, "%c", ch1^ch2);
    }
    fclose(keyfile);
    fclose(pfile);
    fclose(cfile);
    return 0;
}

