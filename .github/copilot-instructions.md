# Copilot Instructions

## General Guidelines
- Prefer validated input reading in the menu to avoid failed states of `std::cin`.
- Use `MENU.cpp` as the main entry point of the project. Ensure input validation in the menu, and avoid mixing `>>` and `getline`. El archivo `MENU.cpp` es el punto de entrada principal (main) del proyecto.
- Use function declarations from headers instead of duplicate forward declarations.

## Code Style
- Avoid declaring functions before their headers when they are already included.- Avoid declaring functions before their headers when they are already included.