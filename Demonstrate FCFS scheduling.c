#include<stdio.h>

int main(){
    int process[10], i, n, wt[10], tt[10], aw = 0, at = 0;
    printf("Enter number of processes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the burst time of process %d: ", i + 1);
        scanf("%d", &process[i]);
    }

    wt[0] = 0;
    printf("Process\t\tBurst Time\t\tWaiting Time\tTurn Around Time\n");

    for (i = 0; i < n; i++) {
        tt[i] = wt[i] + process[i];
        printf("P[%d]\t\t\t%d\t\t\t\t%d\t\t\t\t%d\n", i + 1, process[i], wt[i], tt[i]);
        wt[i + 1] = wt[i] + process[i];
    }

    for (i = 0; i < n; i++) {
        aw = aw + wt[i];
        at = at + tt[i];
    }

    aw = aw / n;
    at = at / n;

    printf("Average waiting time=%d\n", aw);
    printf("Average turn around time=%d\n", at);

    return 0;
}
