# desktop-tutorial

GitHub Desktop tutorial repository

## 仓库内容说明

1. cpp-practice：C++ 编程练习题
2. mini-projects：小型项目

---

## cpp-practice 练习项目说明

### 目录结构

```
desktop-tutorial/
├── cpp-practice/
│   ├── 01-hello-world.cpp          # Hello World
│   ├── 02-formatted-output.cpp     # Formatted output
│   ├── 03-add-two-numbers.cpp      # Add two numbers
│   ├── 04-char-input-output.cpp    # Character I/O
│   ├── 05-type-conversion.cpp      # Type conversion
│   ├── 06-char-triangle.cpp        # Character triangle
│   ├── 07-scanf-delimiter.cpp      # scanf delimiter
│   ├── 08-cout-output.cpp          # cout output
│   ├── 09-cin-input.cpp            # cin input
│   ├── 10-cin-read-all-chars.cpp   # cin read all chars
│   ├── 11-unsigned-overflow.cpp    # Unsigned overflow
│   ├── 12-division.cpp             # Division
│   ├── 13-increment-operator.cpp   # Increment operator
│   ├── 14-relational-operator.cpp  # Relational operator
│   ├── 15-logical-operator.cpp     # Logical operator
│   ├── 16-sphere-volume.cpp        # Sphere volume
│   ├── 17-if-odd-even.cpp          # If odd/even
│   ├── 18-if-nested.cpp            # If nested
│   ├── 19-year-check.cpp           # Year check
│   ├── 20-switch-weekday.cpp       # Switch weekday
│   ├── 21-switch-fallthrough.cpp   # Switch fallthrough
│   ├── 22-for-scope.cpp            # For scope
│   ├── 23-for-comma.cpp            # For comma
│   ├── 24-output-factors.cpp       # Output factors
│   ├── 25-nested-loops.cpp         # Nested loops
│   ├── 26-while-max-min-sum.cpp    # While max/min/sum
│   ├── 27-newton-sqrt.cpp          # Newton sqrt
│   ├── 28-power-of-two.cpp         # Power of two
│   ├── 29-odd-even.cpp             # Odd/even
│   ├── 30-triangle-check.cpp       # Triangle check
│   ├── 31-max-span.cpp             # Max span
│   ├── 32-find-brother-numbers.cpp # Find brother numbers
│   └── compile-all.ps1             # Batch compile script
├── CMakeLists.txt                  # CMake config
├── compile.bat                     # Single file compile
└── compile.ps1                     # Single file compile (response file)
```

### 编译方法

#### 方法 1：批量编译（推荐）

使用 `cpp-practice/compile-all.ps1` 一次性编译所有 .cpp 文件。

```powershell
# 编译所有 .cpp 文件
cd cpp-practice
powershell -ExecutionPolicy Bypass -File compile-all.ps1

# 只编译单个文件
powershell -ExecutionPolicy Bypass -File compile-all.ps1 -File "31-max-span.cpp"
```

#### 方法 2：单文件编译

```powershell
# 方式 1：使用 compile.ps1
powershell -ExecutionPolicy Bypass -File compile.ps1 -Source "cpp-practice\01-hello-world.cpp" -Output "cpp-practice\01-hello-world.exe"

# 方式 2：使用 compile.bat
compile.bat source.cpp output.exe
```

### 文件说明

| 文件名 | 说明 |
|--------|------|
| compile-all.ps1 | **主用**：批量编译所有文件 |
| compile.ps1 | 备用：单个文件编译，使用响应文件方式 |
| compile.bat | 简单场景，直接调用 g++ |
| CMakeLists.txt | CMake 项目配置（仅作为 IDE 配置参考） |

### 注意事项

1. 编译器路径：`D:\msy64\ucrt64\bin\g++.exe`
2. 编译产物（.exe 文件）与源文件在同一目录
3. 如果需要清理，可手动删除 .exe 文件