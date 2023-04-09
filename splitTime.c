/* Authpr: Zaid Ansar
* Date: 03/30/2023
* Purpose: To turn seconds into hours.
*/


#include <stdio.h>

// Here we declare our function
void split_time(long total_sec, int *hr, int *min, int *sec);

int main() {
    // Here we declare variables
    int n, hr, min, sec;
    // Here we prompt user to input seconds
    printf("Enter seconds: ");
    // Here we read in seconds using scanf
    scanf("%d", &n);
    // Here we call split_time function, passing in seconds and addresses of hr, min, and sec variables
    split_time(n, &hr, &min, &sec);
    // Here we print out formatted output
    printf("Converted format: %d hour %d mins %d secs\n", hr, min, sec);
    return 0;
}

// In this block of code, we define our function
void split_time(long total_sec, int *hr, int *min, int *sec) {
    // calculate hours by dividing total seconds by 3600
    *hr = total_sec / 3600;
    // calculate remaining seconds after calculating hours
    total_sec %= 3600;
    // calculate minutes by dividing remaining seconds by 60
    *min = total_sec / 60;
    // remaining seconds after calculating minutes are just the seconds
    *sec = total_sec % 60;
}