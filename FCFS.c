#include <stdio.h>
#include <conio.h>



void findWaitingTime(int processes[], int n, int bt[], int wt[]){
    wt[0] = 0;

    for(int i = 1; i < n; i++){
        wt[i] = bt[i-1] + wt[i-1];
    }
}
void findTurnAroundTime (int process[], int n, int bt[], int wt[], int tat[]){
    for(int i = 0; i < n; i++){
        tat[i] = bt[i] + wt[i];
    }
}
void findAvgTime(int processes[], int n, int bt[]){
    int wt[n], tat[n], total_wt = 0, total_tat = 0;

    findWaitingTime(processes, n, bt, wt);
    findTurnAroundTime(processes, n, bt, wt, tat);
    printf("Processes Burst Time Waiting Time Turn Around Time\n");

    for(int i = 0; i<n; i++){
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        printf("   %d ",(i+1));
        printf("       %d ", bt[i] );
        printf("       %d",wt[i] );
        printf("       %d\n",tat[i] ); 
    }
    float s=(float)total_wt / (float)n;
    float t=(float)total_tat / (float)n;
    printf("Average waiting time = %f",s);
    printf("\n");
    printf("Average turn around time = %f ",t); 
}
int main(){
    int preocess[] = {1,2,3};
    int n = sizeof(preocess)/sizeof(preocess[0]);

    int burst_time[] = {10,5,8};

    findAvgTime(preocess, n, burst_time);

    return 0;
}