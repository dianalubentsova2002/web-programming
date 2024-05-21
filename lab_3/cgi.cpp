#include <iostream>
#include <cstdlib>

int main() {
    // Вивід HTTP-заголовка
    std::cout << "Content-type: text/html\n\n";

    // Вивід інформації про сервер та оточення
    std::cout << "<pre>\n";
    
    // Перемінні оточення
    char* env[] = {
        "SERVER_SOFTWARE",
        "SERVER_NAME",
        "GATEWAY_INTERFACE",
        "SERVER_PROTOCOL",
        "SERVER_PORT",
        "REQUEST_METHOD",
        "PATH_INFO",
        "PATH_TRANSLATED",
        "SCRIPT_NAME",
        "QUERY_STRING",
        "REMOTE_HOST",
        "REMOTE_ADDR",
        "AUTH_TYPE",
        "REMOTE_USER",
        "REMOTE_IDENT",
        "CONTENT_TYPE",
        "CONTENT_LENGTH",
        nullptr
    };

    for (int i = 0; env[i] != nullptr; ++i) {
        char* value = getenv(env[i]);
        if (value != nullptr) {
            std::cout << env[i] << ": " << value << "\n";
        }
    }

    std::cout << "</pre>\n";

    return 0;
}
