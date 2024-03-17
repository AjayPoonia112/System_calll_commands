# System Commands in C Programming

This repository contains examples of various system calls in C programming language. System calls are requests made by a process for a service performed by the kernel. These examples demonstrate how to use different system calls for file manipulation, process management, interprocess communication, and more.

## Prerequisites

To compile and run the examples in this repository, you need:
- A C compiler (e.g., GCC)
- A Unix-like operating system (e.g., Linux)

## List of System Commands

1. `getpid`: Retrieves the Process ID (PID) of the current process.
2. `fork`: Creates a new process by duplicating the current process.
3. `execve`: Executes a program specified by the given path.
4. `wait`: Suspends the execution of the current process until one of its child processes terminates.
5. `exit`: Terminates the current process.
6. `abort`: Aborts the current process abruptly.
7. `pipe`: Creates a unidirectional communication channel between two processes.
8. `dup`: Duplicates a file descriptor.
9. `fcntl`: Performs various operations on file descriptors.
10. `select`: Monitors multiple file descriptors for readiness.
11. `mmap`: Maps a file or device into memory.
12. `munmap`: Unmaps a mapped memory region.
13. `socket`: Creates a communication endpoint for network communication.
14. `connect`: Initiates a connection on a socket.
15. `bind`: Associates a socket with a local address and port number.
16. `listen`: Marks a socket as passive, ready to accept incoming connections.
17. `accept`: Accepts an incoming connection on a socket.
18. `openat`: Opens a file specified by a path relative to a directory file descriptor.
19. `close`: Closes a file descriptor.
20. `read`: Reads data from a file descriptor into a buffer.
21. `write`: Writes data from a buffer to a file descriptor.
22. `lseek`: Changes the current file offset of a file descriptor.
23. `stat`: Retrieves information about a file specified by its path.
24. `fstat`: Retrieves information about an open file descriptor.
25. `mkdir`: Creates a new directory.
26. `rmdir`: Removes an empty directory.
27. `chdir`: Changes the current working directory.
28. `unlink`: Removes a specified file or directory entry.
29. `chmod`: Changes the permissions of a specified file or directory.
30. `chown`: Changes the owner and group of a specified file or directory.

## Usage

Each directory in this repository contains examples for a specific system call. Navigate to the desired directory and follow the instructions provided in the README file to compile and run the example.

## Contributing

Contributions are welcome! If you find any issues or want to add more examples, feel free to open a pull request.
