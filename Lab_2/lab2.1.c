void reverse(char str1[], char str2[]);

int main() {
    char text[50] = "I Love You";
    char out[50];
    reverse(text, out);

   
    return 0;
}

void reverse(char str1[], char str2[]) {
    int length = 0;
    while (str1[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length; i++) {
        str2[i] = str1[length - i - 1];
    }

    str2[length] = '\0'; // Null-terminate the reversed string
     printf("Original: %s\nReversed: %s\n", str1, str2);

}