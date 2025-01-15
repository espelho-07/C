//Display the current Date & Time.

#include <stdio.h>
#include <time.h>

int main() {
    // Get the current time
    time_t now;
    time(&now);

    // Convert to local time format
    char* dt = ctime(&now);

    // Display the current date and time
    printf("Current date and time: %s", dt);

    return 0;
}
