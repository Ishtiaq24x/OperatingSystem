#include <unistd.h>
#include <stdio.h>

int main() {
    
    pid_t pid = getpid();
    printf("My Process ID (PID): %d\n", pid);
    pid_t ppid = getppid();
    printf("My Parent Process ID (PPID): %d\n", ppid);

    return 0;
}
