#include <stdio.h>

int main() {
    int stored_id = 101;
    int stored_pass = 4321;

    int entered_id;
    int entered_pass;

    
    printf("Enter User ID: ");
    scanf("%d", &entered_id);

    
    if (entered_id != stored_id) {
        printf("User not found\n");
    } else {
        
        printf("Enter Password: ");
        scanf("%d", &entered_pass);

        if (entered_pass == stored_pass) {
            printf("Login successful\n");
        } else {
            printf("Incorrect password\n");
        }
    }

    return 0;
}
