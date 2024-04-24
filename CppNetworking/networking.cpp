#include <iostream>

using namespace std;

WSADATA wsaData;
int wsaerr;
WORD wVersionRequested = MAKEWORD(2, 2);
wsaerr = WSAStartup(wVersionRequested, &wsaData);

if (wsaerr != 0)
{
    cout << "The Winsock dll not found" << endl;
    return 0;
}
else
{
    cout << "The Winsock dll found" << endl;
    cout << "The status: " << wsaData.szSystemStatus << endl;
}

int main()
{
    return 0;
}