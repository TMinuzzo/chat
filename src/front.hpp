#include "helper.hpp"
#include "sockets.hpp"

/* A struct used by the front-end to manage all the clients connected */
typedef struct
{
    bool free;
    ClientSocket *server_socket;
    int socket_id_client;
} str_clients_front;

void connect_to_server();
bool create_new_connection(ClientSocket *new_socket);
//ClientSocket* connect_client_to_server();
bool send_message(packet pkt, int socket_id);
void release_connection_by_id(int socket_id_client);
int write_to_socket(void *pkt, int size, int socket_id);