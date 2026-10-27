#include <stdio.h>

int main()
{
    int user_id, password;

    printf("Enter User ID: ");
    scanf("%d", &user_id);

    printf("Enter Password: ");
    scanf("%d", &password);

    if (user_id == 101)
    {
        if (password == 4321)
        {
            printf("Login successful");
        }
        else
        {
            printf("Incorrect password");
        }
    }
    else
    {
        printf("User not found");
    }

    return 0;
}
