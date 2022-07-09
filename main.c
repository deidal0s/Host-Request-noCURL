#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *host = "host";
    char *port = "80";
    char *path = "/";
    char *method = "GET";
    char *version = "HTTP/1.0";
    char *request = "";
    char *response = "";
    char *buffer = "";

    request = malloc(strlen(method) + strlen(host) + strlen(port) + strlen(path) + strlen(version) + strlen("\r\n") + 1);
    sprintf(request, "%s %s:%s%s %s\r\n", method, host, port, path, version);

    printf("%s", request);

    buffer = malloc(1024);
    while (fgets(buffer, 1024, stdin) != NULL) {
        response = strcat(response, buffer);
    }

    printf("%s", response);

    return 0;
}
