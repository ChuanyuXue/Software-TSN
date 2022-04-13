#   Software-TSN
A Time-Sensitive Network End-Station purely achieved by software.



## 1. Periodically Socket



## 2. Preempt_RT Kernel



## 3. TSN Stack



## 4. User Space Improvement

### 4.1 Sockets selection

### 4.2 Cyclic Programming Schema

- **[UNIX repeating regular heart beat signal](https://stackoverflow.com/questions/25327519/how-to-send-udp-packet-every-1-ms)** 

### 4.3 CPU Isolation

### 4.4 CPU Affinity for task

### 4.5 Memory Lock

### 4.6 Multi-threaded improvement



### 

### 

## 5. Kernel Space Improvement

### 5.1 Linux Traffic Control

- **[Priority Queuing with MQPRIO Qdisc\*](https://arxiv.org/abs/1808.10821) **

### 5.2 Interrupt Request (IRQ) Control

### 5.3 OS Scheduling Policy

- **[CHRT scheduler](https://medium.com/@deryugin.denis/reducing-udp-latency-ce60d98c7bff)**
- SCHED_FIFO
- SCHED_RR

### 5.5 CPU Affinity for kernel

- BDI Writeback Affinity
- 

### 5.5 Optimize Real-Time Throttling

### 5.10 Preempt_RT Kernel Configuration*

- Preemption models (server, desktop, low-latency desktop, RT)
- Disable DFS (CONFIG_CPU_FREQ=n)
- Disable Lower power state (CONFIG_CPU_IDLE=n)
- Turn on Threaded Interrupts
- Disable Full Dynamic Ticks
- Disable Power Management
- Disable the Watchdog
- Increase flush time to disk
- Disable tick maximum deferment



## 6. MAC Space Improvement

### 6.1 NIC Configuration

### 6.2 Network Queues affinity

### 6.3 Priority Queuing with PCP mapping

### 

## 7. Additional Hardware



## 8. Evaluation Result

### 8.1 Evaluation methods

### 8.2 Communication Jitter Result

|              | User Space Jitter |                  |                  |                      | Kernel Space Jitter |                  |                  |                      | MAC Space Jitter |                  |                  |                      |
| ------------ | ----------------- | ---------------- | ---------------- | -------------------- | ------------------- | ---------------- | ---------------- | -------------------- | ---------------- | ---------------- | ---------------- | -------------------- |
|              | **Idle**          | **CPU stressed** | **I/O stressed** | **Network stressed** | **Idle**            | **CPU stressed** | **I/O stressed** | **Network stressed** | **Idle**         | **CPU stressed** | **I/O stressed** | **Network stressed** |
| **Baseline** |                   |                  |                  |                      |                     |                  |                  |                      |                  |                  |                  |                      |
|              |                   |                  |                  |                      |                     |                  |                  |                      |                  |                  |                  |                      |

### 8.3 Cyclictest Result

|              | CPU0     |          |          | CPU1     |          |          | CPU2     |          |          | CPU3     |          |          |
| ------------ | -------- | -------- | -------- | -------- | -------- | -------- | -------- | -------- | -------- | -------- | -------- | -------- |
|              | **Min.** | **Avg.** | **Max.** | **Min.** | **Avg.** | **Max.** | **Min.** | **Avg.** | **Max.** | **Min.** | **Avg.** | **Max**. |
| **Baseline** | 13       | 14       | 106      | 15       | 14       | 79       | 15       | 15       | 66       | 16       | 14       | 59       |
|              |          |          |          |          |          |          |          |          |          |          |          |          |





## 9. Appendix

- `sudo timeout 100`  stop the command after a fixed period
