#include<stdio.h>

struct Process {
    int id;
    int arrival_time;
    int burst_time;
    int remaining_time;
};

int main() {
    int n, total_time = 0;
    float avg_wait_time = 0, avg_turnaround_time = 0;
    
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    
    struct Process processes[n];
    
    printf("Enter arrival time and burst time for each process:\n");
    for(int i = 0; i < n; i++) {
        processes[i].id = i+1;
        printf("Process %d:\n", i+1);
        printf("Arrival Time: ");
        scanf("%d", &processes[i].arrival_time);
        printf("Burst Time: ");
        scanf("%d", &processes[i].burst_time);
        processes[i].remaining_time = processes[i].burst_time;
        total_time += processes[i].burst_time;
    }
    
    int current_time = 0;
    printf("\nGantt Chart:\n");
    while (current_time < total_time) {
        int shortest_remaining_time = -1;
        int shortest_index = -1;
        for (int i = 0; i < n; i++) {
            if (processes[i].arrival_time <= current_time && processes[i].remaining_time > 0) {
                if (shortest_remaining_time == -1 || processes[i].remaining_time < shortest_remaining_time) {
                    shortest_remaining_time = processes[i].remaining_time;
                    shortest_index = i;
                }
            }
        }
        if (shortest_index == -1) {
            printf("Idle (%d-%d)\n", current_time, current_time + 1);
            current_time++;
        } else {
            printf("P%d (%d-%d)\n", processes[shortest_index].id, current_time, current_time + 1);
            processes[shortest_index].remaining_time--;
            current_time++;
            if (processes[shortest_index].remaining_time == 0) {
                int turnaround_time = current_time - processes[shortest_index].arrival_time;
                int wait_time = turnaround_time - processes[shortest_index].burst_time;
                avg_turnaround_time += turnaround_time;
                avg_wait_time += wait_time;
            }
        }
    }
    
    avg_turnaround_time /= n;
    avg_wait_time /= n;
    
    printf("\nAverage Waiting Time: %.2f\n", avg_wait_time);
    printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);
    
    return 0;
}
