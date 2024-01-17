#include <stdio.h>

FILE* openFile(const char* filename, const char* mode) {
    FILE* file = fopen(filename, mode);
    if (file == NULL) {
        perror("Error opening file");
    }
    return file;
}

void writeDataToFile(FILE* file, const char* data) {
    fprintf(file, "%s", data);
}

void readDataFromFile(FILE* file, char* buffer, size_t bufferSize) {
    fscanf(file, "%s", buffer);
}

void writeCharToFile(FILE* file, char character) {
    fputc(character, file);
}

int readCharFromFile(FILE* file) {
    return fgetc(file);
}

void closeFile(FILE* file) {
    fclose(file);
}

void setFilePointer(FILE* file, long offset, int origin) {
    fseek(file, offset, origin);
}

void writeIntToFile(FILE* file, int num) {
    fputc(num, file);
}

int readIntFromFile(FILE* file) {
    return fgetc(file);
}

long getCurrentPosition(FILE* file) {
    return ftell(file);
}

int main() {
    const char* filename = "example.txt";
    FILE* file = openFile(filename, "w");

    if (file != NULL) {
        writeDataToFile(file, "Hello, World!\n");
        writeCharToFile(file, 'A');
        closeFile(file);
        printf("Data written to file successfully.\n");

        file = openFile(filename, "r");

        if (file != NULL) {
            char buffer[100];
            readDataFromFile(file, buffer, sizeof(buffer));
            printf("Read from file: %s", buffer);

            int character = readCharFromFile(file);
            printf("Read character from file: %c\n", character);

            closeFile(file);
        }
        printf("File closed successfully.\n");
    }

    return 0;
}