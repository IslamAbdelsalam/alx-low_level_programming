# C File I/O using Write(), open(), close(), and Read()

This README file provides a brief overview of how to perform file input and output operations in C programming language using the `write()`, `open()`, `close()`, and `read()` functions.

## `open()` function
The `open()` function is used to open a file and returns a file descriptor, which is a non-negative integer that uniquely identifies the opened file in the process. The syntax for the `open()` function is as follows:

```c
int open(const char *pathname, int flags);
```

The `pathname` argument is a string that specifies the name of the file to be opened, and the `flags` argument specifies the mode in which the file is to be opened. For example, the `O_RDONLY` flag is used to open the file for reading only, and the `O_WRONLY` flag is used to open the file for writing only.

## `write()` function
The `write()` function is used to write data to an open file. The syntax for the `write()` function is as follows:

```c
ssize_t write(int fd, const void *buf, size_t count);
```

The `fd` argument is the file descriptor of the open file, the `buf` argument is a pointer to the buffer containing the data to be written, and the `count` argument is the number of bytes to be written.

## `read()` function
The `read()` function is used to read data from an open file. The syntax for the `read()` function is as follows:

```c
ssize_t read(int fd, void *buf, size_t count);
```

The `fd` argument is the file descriptor of the open file, the `buf` argument is a pointer to the buffer where the data is to be stored, and the `count` argument is the maximum number of bytes to be read.

## `close()` function
The `close()` function is used to close an open file. The syntax for the `close()` function is as follows:

```c
int close(int fd);
```

The `fd` argument is the file descriptor of the open file to be closed.

## Example usage
Here is an example program that demonstrates the use of `open()`, `write()`, `read()`, and `close()` functions to copy the contents of one file to another:

```c
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 4096

int main(int argc, char *argv[]) {
    int source_fd, dest_fd;
    ssize_t num_read, num_written;
    char buffer[BUFFER_SIZE];

    if (argc != 3) {
        fprintf(stderr, "Usage: %s source_file dest_file\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    source_fd = open(argv[1], O_RDONLY);
    if (source_fd == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (dest_fd == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    while ((num_read = read(source_fd, buffer, BUFFER_SIZE)) > 0) {
        num_written = write(dest_fd, buffer, num_read);
        if (num_written != num_read) {
            perror("write");
            exit(EXIT_FAILURE);
        }
    }
    if (num_read == -1) {
        perror("read");
        exit(EXIT_FAILURE);
    }

    if (close(source_fd) == -1) {
        perror("close");
        exit(EXIT_FAILURE);
    }

    if (close(dest_fd) == -1) {
        perror("close");
        exit(EXIT_FAILURE);
    }

    exit(EXIT_SUCCESS);
}
```

In this program, we first check that two command-line arguments are provided, which are the names of the source file and the destination file, respectively. We then use the `open()` function to open the source file for reading and the destination file for writing. We use the `read()` and `write()` functions to copy the contents of the source file to the destination file, and finally, we close both files using the `close()` function.

