 #include <iostream.h>
#include <iomanip.h>
#include <fstream.h>
#include<winsock.h>
#pragma comment(lib, "ws2_32.lib")

int main()
{
WSADATA WSAData;
WSAStartup(MAKEWORD(2,0), &WSAData);

SOCKET sock;
SOCKADDR_IN sin;

char buffer[1024];
char canal[50] = "GET / HTTP/1.0\nAccept: text/html\n\n";
ofstream log("protsock.log"); // fichier pour enregistrer les données reçues.


sock = socket(AF_INET, SOCK_STREAM, 0);

sin.sin_addr.s_addr = inet_addr("81.25.196.136");
sin.sin_family = AF_INET;
sin.sin_port = htons(80); // port HTTP.

connect(sock, (SOCKADDR *)&sin, sizeof(sin)); // on se connecte sur le site web.
send(sock, canal, strlen(canal), 0); // on envoie la requête HTTP.
int i = recv(sock, buffer, sizeof(buffer), 0); // le buffer récupère les données reçues.


if (i != 0) // si le buffer reçoit des données.
{
log << buffer << endl; // enregistrement des données dans le fichier.
}

closesocket(sock); // on ferme le socket.
WSACleanup();
}