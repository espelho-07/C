//Shutdown Windows/Linux Shutdown Machine.

#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Shutting down the machine...\n");
    system("shutdown /s /t 0"); // Shutdown command
    return 0;
}

//restart Windows/Linux Shutdown Machine.

#include <stdlib.h>

int main() {
    // Execute the shutdown command to restart the computer immediately
    system("shutdown /r /t 0");
    return 0;
}
