**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**

Running: Process is executing

Waiting: Process is waiting for another thing to finish

Stopped: Process has been stopped

Zombie: Process is dead, but not gone


**2. What is a zombie process?**

With forking, a child process will run before the parent, and then stays in memory


**3. How does a zombie process get created? How does one get destroyed?**

wait() call cleans it up


**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**

No use of an interprator with a compiled language. So it can be more efficient, also can more directly access computer
