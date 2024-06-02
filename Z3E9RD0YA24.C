#include <stdio.h>
#include <string.h>

void decode_and_print(const char *encoded_str) {
    char decoded_str[45];
    int len = strlen(encoded_str);
    for (int i = 0; i < len; i++) {
        decoded_str[i] = encoded_str[i] ^ 0x5A; // XOR with 0x5A to obfuscate
    }
    decoded_str[len] = '\0';
    printf("%s\n", decoded_str);
}

int main() {
    // Encoded string using XOR with 0x5A
    const char *encoded_str = "\x1f\x1c\x1f\x18\x19\x1f\x1c\x18\x19\x12\x1d\x1a\x12\x18\x19\x0f\x12\x19\x0b\x18\x1c\x19\x0c\x1c\x0b\x1b\x1f\x12\x19\x0b\x12\x19\x1d\x0b\x19\x0b\x0b\x18\x1f\x1b\x18\x18\x18\x18\x18\x18\x18\x18";

    decode_and_print(encoded_str);
    return 0;
}
