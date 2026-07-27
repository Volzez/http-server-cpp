<div align="center">

# 🌐 HTTP Server from Scratch in C++

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)
![Platform](https://img.shields.io/badge/Platform-Linux%20%7C%20macOS-brightgreen?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Working-success?style=for-the-badge)

```diff
+ A simple HTTP server built from scratch in C++ using low-level TCP/IP socket programming.
+ Built for educational purposes to understand how HTTP servers work under the hood —
+ from creating a socket, binding it to an address, listening for connections,
+ reading requests, and sending back HTTP responses.
```

## Features
- _Creates a TCP/IP socket using POSIX APIs_
- _Binds to a configurable IP address and port_
- _Listens and accepts incoming client connections_
- _Reads incoming HTTP requests_
- _Sends back a valid HTTP/1.1 response with an HTML page_
- _Tracks and logs each client connection_

## Platform
_Built for **Unix-based systems only** (Linux & macOS). Uses POSIX system calls (`socket`, `bind`, `listen`, `accept`, `read`, `write`, `close`) available on all Unix-based operating systems. Not compatible with Windows._

## How to Run
```bash
g++ server_linux.cpp http_tcpServer_linux.cpp -o server_linux
./server_linux
Then open your browser and visit http://localhost:8080
```
