#include "helper.hpp"

#define MAX_CONNS 256

class Server
{
    public: 

    int port;

    void handle_communication(int sock);

    private:
};