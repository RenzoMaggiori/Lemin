# Lem-in

## Introduction

Lem-in is an ant-based calculation unit that simulates an anthill with rooms and tunnels. The objective is to find the quickest way to make the ants cross over the anthill while avoiding traffic jams and leading them to the exit room in a minimum number of laps.

## Project Details

- **Course**: Elementary Programming in C
- **Project Name**: Lem-in
- **Binary Name**: lem_in
- **Language**: C
- **Compilation**: Via Makefile, including rules for re, clean, and fclean

## Features

- **Input Handling**: Reads anthill description from standard input.
- **Algorithm**: Determines the quickest route for ants to cross the anthill.
- **Output**: Displays the movement of ants in each lap.
- **Error Handling**: Exits with error code 84 and displays error messages on stderr.

## Input Format

The program receives the anthill description as follows:
1. Number of ants.
2. Rooms with their positions.
3. Tunnels connecting rooms.

## Example Usage

```bash
./lem_in < anthill
#number_of_ants
3
#rooms
##start
0 1 0
##end
1 13 0
2 5 0
3 9 0
#tunnels
0-2
2-3
3-1
#moves
P1-2
P1-3 P2-2
P1-1 P2-3 P3-2
P2-1 P3-3
P3-1
```

## Tests
![alt text](.imgs/test)
