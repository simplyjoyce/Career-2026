**# Project Title: Command-Line Sensor Monitor Simulator**

**## What it is:**
A simple C program that simulates a sensor monitoring system through the command line.
The program accepts sensor readings from the user and classifies each reading as LOW, NORMAL, or HIGH.

**## Why I built it**
I built this as my first C programming exercise after being rusty with C.
The goal was to practice turning a simple engineering-style problem into a working C program.

**## What it does**
This program:
- Accepts sensor readings from the user
- Classifies readings:
  - Below 50 → LOW
  - 50–100 → NORMAL
  - Above 100 → HIGH
- Counts the number of readings
- Tracks the highest reading
- Tracks the lowest reading
- Calculates the average
- Allows the user to continue entering readings or stop
- Prints a summary when finished

**## Concepts used**
- Variables
- `int`, `float`, and `char` data types
- `if`, `else if`, and `else`
- `while` loops
- `break`
- `scanf()` and `printf()`
- Comparison operators
- Counters
- Running totals
- Minimum and maximum values
- Type casting
- Floating-point division

**## Example output**

```text
Enter sensor reading:      
29                      
LOW                                                                                                                         
Do you want to add another reading, y|n?
y
Enter sensor reading: 
58
NORMAL
Do you want to add another reading, y|n?
y
Enter sensor reading: 
96
NORMAL
Do you want to add another reading, y|n?
y
Enter sensor reading: 
10
LOW
Do you want to add another reading, y|n?
y
Enter sensor reading: 
107
HIGH
Do you want to add another reading, y|n?
y
Enter sensor reading: 
87
NORMAL
Do you want to add another reading, y|n?
n
------------Summary-----------
No. of Reading: 6
Highest Reading Value: 107
Lowest Reading Value: 10
Average: 64.50

** ## What I struggled with **
- I initially thought I needed an array to store every sensor reading because I did not know how many readings the user would enter.
- I eventually realized that I did not need to store every reading. I could keep track of the information I actually needed using:
    - a reading counter
    - a running total
    - a maximum value
    - a minimum value
- I also initially had problems with:
    - initializing the minimum and maximum values
    - understanding the difference between = and ==
    - handling the char input for the user's y/n choice
    - understanding why scanf(" %c", &choice) needs a space before %c
    - understanding integer division when calculating the average
    - understanding why I needed to recompile my C program after changing the source code

** ## What I learned**
- I learned that solving a programming problem is not just about knowing syntax.
- I had to think about:
    - what information needs to persist between loop iterations
    - what happens on the first reading
    - how to update minimum and maximum values
    - how to keep a running total
    - how to calculate an average correctly
    - how user input affects program flow
    - how C source code is compiled into an executable
    - how to compile, run, debug, commit, and push a C project using Git and GitHub
- I also learned about invalid input handling with scanf() and the input buffer, although I am leaving more advanced input validation for later as I continue learning C.

**## Future improvements**
- Add validation for invalid sensor input
- Handle the case where no readings are entered
- Improve the user interface/output formatting
- Allow the user to choose or configure the LOW/NORMAL/HIGH thresholds