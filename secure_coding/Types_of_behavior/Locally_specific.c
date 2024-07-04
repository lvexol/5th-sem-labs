
#include <stdio.h>
#include <time.h>

int main() {// Set the locale to the user's default locale
    
    time_t currentTime;
    struct tm *localTime;
    char timeString[100];
    
    // Get the current time
    currentTime = time(NULL);
    
    // Convert the current time to the local time
    localTime = localtime(&currentTime);
    
    // Format the local time as a string
    strftime(timeString, sizeof(timeString), "%c", localTime);
    
    // Print the current time
    printf("Current time: %s\n", timeString);
    
    // Rest of the code
    
    return 0;
}