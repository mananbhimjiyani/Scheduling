# Scheduling Algorithms

## Introduction
Welcome to the Scheduling Algorithms repository! This repository provides an overview and documentation for three fundamental CPU scheduling algorithms: Preemptive Shortest Job First (SJF), Round Robin, and First-Come, First-Served (FCFS). Our aim is to offer insights into how these algorithms work, their advantages, limitations, and common use cases.

## Contents
1. [Preemptive Shortest Job First (SJF)](#preemptive-shortest-job-first-sjf)
2. [Round Robin](#round-robin)
3. [First-Come, First-Served (FCFS)](#first-come-first-served-fcfs)
4. [Conclusion](#conclusion)

## Preemptive Shortest Job First (SJF)
Preemptive SJF is a scheduling algorithm that selects the process with the smallest execution time to execute next. In a preemptive SJF scheduling, the running process can be interrupted by a newly arrived process with a shorter burst time. This algorithm aims to minimize the average waiting time and turnaround time of processes.

**Advantages:**
- Minimizes average waiting time.
- Provides better turnaround time for shorter processes.

**Limitations:**
- Requires knowledge of the burst times of all processes, which may not always be available.
- Can lead to starvation for longer processes if shorter processes keep arriving.

## Round Robin
Round Robin is a preemptive scheduling algorithm where each process is assigned a fixed time slot in a cyclic manner. Once a process's time slot expires, it is moved to the end of the ready queue, and the next process in line is selected for execution. This algorithm ensures fairness among processes and prevents starvation.

**Advantages:**
- Fair scheduling as each process gets equal time.
- Suitable for time-sharing systems.

**Limitations:**
- May lead to higher average waiting times, especially for processes with long burst times.
- The choice of time quantum (time slice) can affect performance significantly.

## First-Come, First-Served (FCFS)
FCFS is the simplest scheduling algorithm, where processes are executed in the order they arrive in the ready queue. The CPU is assigned to the first process in the queue until it completes its execution. FCFS is non-preemptive, meaning once a process starts executing, it continues until it finishes or blocks.

**Advantages:**
- Simple and easy to implement.
- No starvation as processes are executed in the order of arrival.

**Limitations:**
- May result in longer average waiting times, especially if long processes arrive first (convoy effect).
- Not suitable for time-sensitive or interactive systems.

## Conclusion
Understanding various CPU scheduling algorithms is crucial for designing efficient operating systems and improving system performance. Each scheduling algorithm has its own set of advantages, limitations, and suitable use cases. This repository aims to provide a starting point for exploring these fundamental scheduling algorithms.

Feel free to contribute to this repository by adding further insights, examples, or real-world use cases of these scheduling algorithms. Your contributions are valuable for enhancing the understanding and applicability of these concepts in practical scenarios.

---

**Authors:**
- [Manan Bhimjiyani](https://github.com/mananbhimjiyani)
- [Ayushi Kapgate](https://github.com/p0tat0dewd)
- [Kevin Tandon](https://github.com/kev0-4)