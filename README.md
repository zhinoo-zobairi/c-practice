# C Practice Repository

This repository contains my hands-on C programming exercises, organized by concept and focused on building a strong mental model of low-level programming.

## Source

The exercises are based on and inspired by  
[Mastering Data Structures & Algorithms using C and C++](https://www.udemy.com/course/datastructurescncpp/), a widely used resource for learning data structures from first principles.

Each file inside the `functions/` directory focuses on a specific concept, such as memory management, pointer manipulation, or struct behavior.

## Automation ⚙️

A GitHub Actions workflow runs on weekdays to:

1. Generate a new pointer-focused exercise file in `exercises/`
2. Commit it to the repository
3. Open a GitHub Issue linking to the new drill for progress tracking

## Notes on C Semantics

C has several historical design characteristics that influence how code is written and read.

When declaring arrays in C, it is important to understand that arrays are not standalone, first-class types. Unlike Java, TypeScript, or C#, C does not define a composable type such as `int[]`. As a result, writing `int[] name` is invalid in C.

C declarations are built around the identifier (the name being declared) and are interpreted by reading outward from that identifier. Conceptually, C does not express declarations as:

> “Here is a type; now assign it a name.”

Instead, it follows the model:

> “Here is a name. Describe what this name refers to.”

For this reason, array brackets are part of the declarator and must attach to the identifier rather than the base type.  
- `int name[]` declares `name` as an array of `int`
- `int *name[]` declares `name` as an array of pointers to `int`
