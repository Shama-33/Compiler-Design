# Compiler-Design : Custom Programming Language Compiler

A compiler and interpreter for a custom programming language built using Lex (Flex) and Yacc (Bison). This project implements lexical analysis, syntax parsing, semantic analysis, and code execution for a C-like programming language with custom syntax.

![C++](https://img.shields.io/badge/C++-Compiler-blue.svg)
![Lex](https://img.shields.io/badge/Lex-Lexical%20Analyzer-green.svg)
![Yacc](https://img.shields.io/badge/Yacc-Parser-orange.svg)

## 📋 Project Overview

This compiler translates and executes a custom programming language featuring:
- Custom syntax for control structures
- Variable declarations and type checking
- Functions with parameters
- Arithmetic and logical expressions
- Custom keywords and operators
- Runtime execution with error detection

## ✨ Language Features

### Data Types
- `Integer` - Integer numbers
- `Fraction` - Floating-point numbers
- `Symbol` - Single characters
- `String` - Text strings
- `Binary` - Boolean values (true/false)

### Control Structures
- **Conditionals**: `if`, `elif`, `else` with `begif`/`endif` blocks
- **Loops**: 
  - `for` loops with `LoopStart`/`LoopEnd`
  - `Range` loops
  - `RepeatWhile` loops
- **Switch**: `observe`/`scenario`/`default` (switch/case/default)

### Functions
- Function declaration with `Function` keyword
- `Core` - Main function (equivalent to main())
- `Void` and typed return values
- Parameter passing with `arg()`
- Function calls with `Invite`

### Keywords
- **Loop Control**: `next` (continue), `out` (break)
- **I/O**: `print()`, `input()`
- **Constants**: `Constant` keyword
- **Operators**: Custom operators including `ORbit`, `ANDbit`, `XORbit`

### Comments
- Single-line: `~! comment text`
- Multi-line: `# comment text #`

### Libraries
- System libraries: `<import <libname.lib>>`
- User headers: `<include <filename.h>>`

## 📂 Project Files

```
Compiler/
├── com33.l              # Lex file (Lexical analyzer)
├── com33.y              # Yacc file (Parser & semantic analyzer)
├── com33.tab.c          # Generated parser code
├── com33.tab.h          # Generated parser header
├── lex.yy.c             # Generated lexer code
├── input.c              # Sample test program 1
├── input1.c             # Sample test program 2
├── output.txt           # Sample compiler output
├── app.exe              # Compiled executable (Windows)
├── p.exe                # Alternative executable
├── 1907033.pdf          # Complete project documentation
└── README.md            # This file
```

## 🔧 Requirements

### For Running Pre-compiled Executables:
- Windows OS
- No additional dependencies

### For Compilation from Source:
- **Flex** (Lex) - Lexical analyzer generator
- **Bison** (Yacc) - Parser generator
- **GCC/G++** - C/C++ compiler
- **Make** (optional, for build automation)

## 🚀 Quick Start

### Option 1: Using Pre-compiled Executable

```bash
# Run the compiler
app.exe

# The compiler will:
# 1. Read from input.c
# 2. Generate output.txt
# 3. Display compilation results
```

### Option 2: Compile from Source

#### Step 1: Generate Lexer and Parser

```bash
# Generate lexer
flex com33.l

# Generate parser
bison -d com33.y

# This creates:
# - lex.yy.c (lexer)
# - com33.tab.c (parser)
# - com33.tab.h (header)
```

#### Step 2: Compile

```bash
# Compile all files together
g++ com33.tab.c lex.yy.c -o compiler.exe

# Or on Linux:
g++ com33.tab.c lex.yy.c -o compiler -lfl
```

#### Step 3: Run

```bash
# Windows
compiler.exe

# Linux
./compiler
```

## 📖 Usage

### Running Test Programs

The compiler reads from `input.c` and writes output to `output.txt`.

**To test with sample programs:**

1. **Use provided samples:**
   ```bash
   # input.c and input1.c are sample test files
   # Run directly with app.exe
   app.exe
   ```

2. **Create your own test file:**
   - Modify `input.c` with your custom code
   - Run the compiler
   - Check `output.txt` for results

3. **View output:**
   ```bash
   # Windows
   type output.txt
   
   # Linux
   cat output.txt
   ```

### Example Program

```
Core(){}{
begin
    Integer x;
    x = 5;
    print(x);
end
}
```

## 📚 Documentation

**For complete documentation, language specification, and implementation details:**

📄 **See `1907033.pdf`**

The PDF contains:
- Complete language grammar
- Detailed syntax rules
- Implementation approach
- Feature descriptions
- Test cases and examples
- Error handling mechanisms
- Compiler design decisions

## 🧪 Testing

### Test Files Provided

- **`input.c`** - Primary test file with sample programs
- **`input1.c`** - Additional test cases
- **`output.txt`** - Sample output showing compilation results

### Running Tests

```bash
# Test with input.c (default)
app.exe

# To test with input1.c:
# 1. Rename input1.c to input.c
# 2. Run app.exe
# 3. Check output.txt
```

### What the Compiler Does

1. **Lexical Analysis**: Tokenizes the input source code
2. **Syntax Analysis**: Parses tokens according to grammar rules
3. **Semantic Analysis**: Checks types, declarations, scopes
4. **Execution**: Interprets and runs the code
5. **Output Generation**: Produces compilation messages and results

### Expected Output

The compiler generates:
- ✅ Line-by-line compilation status
- ✅ Variable declarations
- ✅ Function definitions
- ✅ Execution output (print statements)
- ✅ Error messages (if any)
- ✅ Success message: "Compiled Successfully"

## 🔍 Features Showcase

### Variable Declarations
```
Integer x, y, z;
Fraction pi = 3.14;
String name = "Compiler";
Binary flag = true;
Symbol ch = 'A';
```

### Functions
```
Function add(Integer a, Integer b){Integer}{
begin
    return a + b;
end
}
```

### Control Flow
```
if(x > 5)begif
    print("Greater");
elif(x == 5)
    print("Equal");
else
    print("Less");
endif
```

### Loops
```
for(i : i < 10 : 1)LoopStart
    print(i);
LoopEnd
```


## 🛠️ Compilation Details

### Build Process

```
Source Code (input.c)
    ↓
Lexical Analyzer (lex.yy.c from com33.l)
    ↓
Tokens
    ↓
Parser (com33.tab.c from com33.y)
    ↓
Abstract Syntax Tree
    ↓
Semantic Analysis
    ↓
Execution/Interpretation
    ↓
Output (output.txt)
```

### File Dependencies

```
com33.y  →  bison  →  com33.tab.c + com33.tab.h
com33.l  →  flex   →  lex.yy.c
                 ↓
          g++ compiler
                 ↓
            app.exe/compiler
```


