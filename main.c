#include <stdio.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include <termios.h>

int main(){
char input[] = "the quick brown fox jumps over the lazy dog";
char typed[100];

printf("Write This : \n %s\n", input);

printf("3...\n");
fflush(stdout);
sleep(1);

printf("2...\n");
fflush(stdout);
sleep(1);

printf("1...\n");
fflush(stdout);
sleep(1);


printf("GO!\n");
fflush(stdout);

tcflush(STDIN_FILENO, TCIFLUSH);

time_t start = time(NULL);
fgets(typed, sizeof(typed), stdin);
typed[strcspn(typed, "\n")] = 0;
time_t end = time(NULL);
printf("You Typed : \n %s \n", typed);
double timetaken = difftime(end, start);
if (timetaken == 0) {
    timetaken = 1;
}
double wpm = (strlen(typed) / 5.0) / (timetaken / 60.0);
if (strcmp(input,typed) == 0){
    printf("Correct!\n");
 printf("Your WPM is : %.2f WPM \n ", wpm);
} else {
    printf("Incorrect!");
}
}
