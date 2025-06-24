# 🧩 Rubik's Cube Solver (C++)

A beginner-friendly Rubik's Cube simulator and basic solver implemented in C++. Built using simple object-oriented design and designed to help understand cube rotations programmatically.

---

## ✨ Features

- Cube display in terminal (front, top, side views)
- Rotate cube faces clockwise
- Reset and scramble cube
- Placeholder `Solver` module for auto-solving (can be extended!)
- Command-line interaction

---

## 📁 Project Structure 
```
rubik-solver/
├── main.cpp # Entry point and menu
├── cube.h # Cube class definition
├── cube.cpp # Cube class logic (rotation, scramble, etc.)
├── solver.h # Solver class definition
├── solver.cpp # Solver logic (currently placeholder)
└── README.md # Project info
```

---

## 🛠️ How to Build and Run

🔧 Prerequisites
C++ compiler (e.g., g++)

▶️ Compile and Run
```
g++ main.cpp cube.cpp solver.cpp -o rubik-solver
./rubik-solver
```


## 🎮 Commands in Console
U, D, F, B, L, R  - Rotate faces clockwise  
s                 - Scramble cube  
r                 - Reset cube  
d                 - Display cube  
v                 - Solve cube (placeholder logic)  
q                 - Quit  


## 🧠 Future Work
 Implement actual solving logic (e.g., BFS or IDA*)
 Add undo functionality

Built by -[adithya-ram000](https://github.com/adithya-ram000)







