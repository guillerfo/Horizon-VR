#include <stdio.h>
#include <string.h>

int main() {
    char username[50];
    char password[50];
    char correctUsername[] = "admin";
    char correctPassword[] = "1234";

    printf("Ingrese su nombre de usuario: ");
    scanf("%49s", username);

    printf("Ingrese su contraseña: ");
    scanf("%49s", password);

    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        printf("OK\n");
    } else {
        printf("Credenciales incorrectas\n");
    }

    printf("Interfaz de acceso\n");

    return 0;
}
