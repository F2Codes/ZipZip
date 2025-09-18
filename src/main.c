#include <stdio.h>
#include <stdlib.h>

// ==================== Compression (RLE) ====================
void compress(const char *input_file, const char *output_file) {
    FILE *in = fopen(input_file, "r");
    FILE *out = fopen(output_file, "w");
    if (!in || !out) { printf("Error opening file.\n"); return; }

    char current, prev;
    int count = 1;
    if (fscanf(in, "%c", &prev) != 1) { fclose(in); fclose(out); return; }

    while (fscanf(in, "%c", &current) == 1) {
        if (current == prev) count++;
        else {
            fprintf(out, "%c%d", prev, count);
            prev = current;
            count = 1;
        }
    }
    fprintf(out, "%c%d", prev, count);

    fclose(in); fclose(out);
    printf("Compression done!\n");
}

// ==================== Decompression ====================
void decompress(const char *input_file, const char *output_file) {
    FILE *in = fopen(input_file, "r");
    FILE *out = fopen(output_file, "w");
    if (!in || !out) { printf("Error opening file.\n"); return; }

    char ch;
    int count;
    while (fscanf(in, "%c%d", &ch, &count) == 2)
        for (int i = 0; i < count; i++)
            fputc(ch, out);

    fclose(in); fclose(out);
    printf("Decompression done!\n");
}

// ==================== Main ====================
int main() {
    int choice;
    printf("1. Compress\n2. Decompress\nChoose: ");
    scanf("%d", &choice);

    if (choice == 1) compress("input.txt", "output.rle");
    else if (choice == 2) decompress("output.rle", "decompressed.txt");
    else printf("Invalid choice.\n");

    return 0;
}
