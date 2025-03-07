<h1 align="center">Minishell</h1>
<p align="center">
  <img src="imgs/minishellLogo.png" alt="Minishell Logo" width="200">
</p>
<h2 align="center">As beautiful as a shell</h2>

## Introduction
Minishell is a project from the 42 curriculum that involves creating a simple UNIX shell. The goal is to understand processes, file descriptors, and how a shell interprets and executes commands.

This project was successfully completed with a perfect score of **125/100**, including the mandatory and bonus parts.
<p align="center">
  <img src="imgs/eval.png" alt="Eval" width="300">
</p>

## Features

### Mandatory Features
- A prompt that waits for user input.
- Command execution with support for:
  - Relative and absolute paths.
  - The `PATH` environment variable.
- Handling of:
  - Single (`'`) and double (`"`) quotes.
  - Redirections:
    - `<` (input redirection)
    - `>` (output redirection)
    - `<<` (here-document)
    - `>>` (append output redirection)
  - Pipes (`|`): connecting multiple commands.
  - Environment variables (`$VAR`).
  - The special variable `$?` (exit status of the last command).
  - Signals:
    - `Ctrl+C` (interrupts current command and displays a new prompt).
    - `Ctrl+D` (exits the shell).
    - `Ctrl+\` (ignored).
- Built-in commands:
  - `echo` (with `-n` option)
  - `cd` (with absolute or relative paths)
  - `pwd` (prints the working directory)
  - `export` (sets environment variables)
  - `unset` (removes environment variables)
  - `env` (displays the environment variables)
  - `exit` (exits the shell)

### Bonus Features
- Logical operators `&&` and `||`, with support for parentheses to manage priorities.
- Wildcard `*` expansion for matching files in the current directory.

## Implementation Details
To implement the shell, we chose to understand and implement an **Abstract Syntax Tree (AST)** as close as possible to the one used in the original **Bash**, to fully fulfill the spirit of the project. This approach ensures correct parsing and execution of complex command structures while maintaining scalability and efficiency.

## Installation
1. Clone the repository:
   ```sh
   git clone <repository_url>
   cd minishell
   ```
2. Compile the project:
   ```sh
   make
   ```
3. Run the shell:
   ```sh
   ./minishell
   ```

## Usage
- Type commands as you would in Bash.
- Use redirections, pipes, and environment variables.
- Exit the shell using `exit` or `Ctrl+D`.

## Compilation
- The project follows the **42 Norm**.
- Uses `Makefile` with the following rules:
  - `make`: Compiles the project.
  - `make clean`: Removes object files.
  - `make fclean`: Removes compiled binaries.
  - `make re`: Recompiles the project.
  - `make bonus`: Compiles the bonus features.

## External Functions Used
- `readline`, `add_history`
- Standard system calls: `fork`, `execve`, `pipe`, `dup2`, `waitpid`, etc.

## Author
- **tarrapunchia (fzucconi@student.42firenze.it)**

This project was an invaluable learning experience in process handling, memory management, parsing, data structures...<br>
In summary: in shell behavior (which i loved :).

## Contributors
This project is part of the 42 School Network (42Luiss Firenze) and was done together with three other amazing programmers: Ulisse Colla (ucolla), Stefano Montuori (smontuor) and Tommaso Picchio (tpicchio).
