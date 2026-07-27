#ifndef INCLUDED_HTTP_TCPSERVER_LINUX
#define INCLUDED_HTTP_TCPSERVER_LINUX

#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdlib.h>
#include <string>

namespace http
{

    class TcpServer
    {
    public:
        TcpServer(std::string ip_address, int port);
        ~TcpServer();
        void startListen();

    private:
        int m_client_counter;
        std::string m_ip_address;
        int m_port;
        int m_socket;
        int m_new_socket;
        long m_incomingMessage;
        struct sockaddr_in m_socketAddress;
        unsigned int m_socketAddress_len;
        std::string m_serverMessage;

        int startServer();
        void closeServer();
        void acceptConnection(int &new_socket);
        std::string buildResponse();
        void sendResponse();
    };

} // namespace http

#endif


// what is the purpose of this code? The purpose of this code is to define a header file for a C++ class named `TcpServer


// what is #ifndef and #endif?  The `#ifndef` and `#endif` directives are part of the C++ preprocessor and are used to prevent multiple inclusions of the same header file, which can lead to compilation errors.
