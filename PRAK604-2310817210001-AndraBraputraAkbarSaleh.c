#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void decode_message(char *code, char *message, char *decoded_message, int *star_count, int *hash_count) {
    for (int i = 0; code[i] != '\0'; i++) {
        if (code[i] == ' ') {
            decoded_message[i] = ' ';
        }else if (code[i] == message[i]) {
            decoded_message[i] = '*';
            (*star_count)++;
        } else {
            decoded_message[i] = '#';
            (*hash_count)++;
        }
    }
    decoded_message[*star_count + *hash_count] = '\0';
}

const char *check_message_authenticity(char *decoded_message, int star_count, int hash_count) {
    if (star_count >= hash_count) {
        return "Pesan asli";
    } else {
        return "Pesan palsu";
    }
}

int main() {
    char code[100];
    char received_message[100];
    char decoded_message[100];
    int star_count = 0;
    int hash_count = 0;

    fgets(code, sizeof(code), stdin); 
    fgets(received_message, sizeof(received_message), stdin);

    code[strcspn(code, "\n")] = '\0';
    received_message[strcspn(received_message, "\n")] = '\0';

    if (strlen(code) != strlen(received_message)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
        exit(EXIT_FAILURE);
    }

    decode_message(code, received_message, decoded_message, &star_count, &hash_count);

    printf("%s\n", decoded_message);
    printf("* = %d\n", star_count);
    printf("# = %d\n", hash_count);
    printf("%s\n", check_message_authenticity(decoded_message, star_count, hash_count));

    return 0;
}