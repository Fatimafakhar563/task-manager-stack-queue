# Task Manager Using Stack and Queue

# About the Project

This project is a simple Task Manager System developed using C++. It helps users manage their daily tasks by organizing pending and completed tasks using two basic data structures: Stack and Queue.

The project demonstrates the practical implementation of data structures, arrays, functions, and basic C++ programming concepts.

# Features

- Add Task: Add new tasks to the pending task list.
- Complete Task: Move a pending task to the completed task list.
- View Pending Tasks: Display all tasks waiting to be completed.
- View Completed Tasks: Display all completed tasks.
- Undo Last Completion: Restore the last completed task to the pending task list.
- Exit: Close the program.

# Technologies Used

- C++
- Arrays
- Functions
- String Handling
- Stack
- Queue

 # Data Structures Used

 1. Queue (FIFO)
Queue is used to store pending tasks. It follows the FIFO (First In, First Out) principle, meaning the first added task is completed first.

 2. Stack (LIFO)
Stack is used to store completed tasks. It follows the LIFO (Last In, First Out) principle, meaning the last completed task can be restored first.

# How It Works

1. Users add tasks to the Queue.
2. When a task is completed, it is removed from the Queue.
3. The completed task is pushed into the Stack.
4. Users can view both pending and completed tasks.
5. The undo feature pops the last completed task from the Stack and adds it back to the Queue.

 # How to Run

1. Download or clone this repository.
2. Open the project in a C++ compiler (such as Dev-C++ or VS Code).
3. Compile and run the program.
4. Select options from the menu to manage your tasks.

 # Learning Objectives

  Understand Stack and Queue concepts.
  Learn FIFO and LIFO operations.
  Practice implementing data structures using arrays.
  Improve problem-solving and programming logic.
 Understand how data structures work in a practical application.

# Developed as a C++ Data Structures project.

---

If you find this project useful, feel free to explore the code!
