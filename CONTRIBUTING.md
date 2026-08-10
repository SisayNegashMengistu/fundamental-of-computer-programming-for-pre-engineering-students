# Contributing to Fundamentals of Computer Programming

Thank you for your interest in contributing! 🎉  
This guide explains how to contribute lessons, examples, exercises, or fixes.

---

## 📌 Types of Contributions Welcome

- **New or improved lesson notes** (Markdown files)
- **C++ example programs** with comments
- **Exercises and practice problems**
- **Bug fixes** (typos, incorrect code, broken examples)
- **Translations** of lesson content

---

## 🛠️ How to Contribute

### 1. Fork the Repository

Click the **Fork** button at the top right of the GitHub page to create your own copy.

### 2. Clone Your Fork

```bash
git clone https://github.com/<your-username>/fundamental-of-computer-programming-for-pre-engineering-students.git
cd fundamental-of-computer-programming-for-pre-engineering-students
```

### 3. Create a Branch

```bash
git checkout -b feature/module-XX-topic-name
```

Use a descriptive branch name, for example:
- `fix/module-07-if-else-typo`
- `feature/module-10-string-exercises`

### 4. Make Your Changes

Follow the style guidelines below, then stage and commit:

```bash
git add .
git commit -m "feat(module-10): add string reversal exercise"
```

### 5. Push and Open a Pull Request

```bash
git push origin feature/module-XX-topic-name
```

Then open a Pull Request on GitHub against the `main` branch.

---

## ✅ Style Guidelines

### Markdown Files
- Use `##` for section headings, `###` for subsections.
- Use fenced code blocks with language tags (e.g., ` ```cpp `).
- Keep lines under 100 characters where possible.

### C++ Files
- Use `// comments` to explain every non-obvious line.
- Follow the naming convention: `snake_case` for variables and functions.
- Include a file header comment block:

```cpp
/*
 * Module XX — Topic Name
 * File: example_name.cpp
 * Description: Brief description of what this program demonstrates.
 */
```

- Compile and test your code before submitting:

```bash
g++ -std=c++17 -Wall -o program program.cpp
```

---

## 🚫 What We Don't Accept

- Code that does not compile cleanly
- Content unrelated to the module topics
- Plagiarized content

---

## 🙏 Code of Conduct

Be respectful and constructive. This is an educational project — treat all contributors and learners with kindness.

---

Thank you for helping make this resource better for students everywhere! 🌍
