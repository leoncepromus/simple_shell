#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    const char* message = "Simple Shell Program Project";
    const char* filepath = "./example.txt";
    int file_descriptor = open(filepath, O_WRONLY | O_CREAT | O_TRUNC, 0666);
    if (file_descriptor == -1) {
        perror("Error opening file for writing");
        exit(EXIT_FAILURE);
    }

    ssize_t bytes_written = write(file_descriptor, message, strlen(message));
    if (bytes_written == -1) {
        perror("Error writing to file");
        exit(EXIT_FAILURE);
    }

    close(file_descriptor);
    return 0;
}
