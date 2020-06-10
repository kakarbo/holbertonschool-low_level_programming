Projects 0x00. C - Hello, World

Resources

Read or watch:
 -Everythin you need to know to star with c
 -Dennis Rithcie
 -"C" Programming Language: Brian Kernighan
 -Why C Programming ls Awesome
 -Learning to program in C part 1 - youtube
 -Learning to program in C part 2 - youtube
 -Understanfin C program Compilation Process
 -Holberton's Betty Coding Style
 -Hash-bang under the hood
 -Linus Torvalds on C vs C++

man or help

 -gcc
 -printf
 -puts
 -putchas

Learning Objectives

 General
  
  -Why C programming is awesone 
  -Who invented C
  -Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds
  -What happens when you type gcc main.c
  -What's an entry point
  -What's main
  -How to print text using printf, puts and putchar
  -How to get the size of a specific type using the unary operator sizeof
  -How to compile using gcc
  -What is the default program name when compiling with gcc
  -What is the official Holberton C coding style and how to check your code with betty-style
  -How to find the right header to include in your source code when using a standard library funtion
  -How does the main function influence the return value of the program

Requeriments

C

 -Allowed editors: vi, vim, emacs
 -All your files will be compiled on Ubuntu 14.04 LTS using gcc 4.8.4
 -All your files should end with a new line
 -A README.md file, at the root of the folder of this project, containing a description of the project
 -There should be no errors and no warnings during compilation
 -You are not allowed to use system
 -Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

Shell Scripts

 -Allowed editors: vi, vim, emacs
 -All your scripts will be tested on Ubuntu 14.04 LTS
 -All your scripts should be exactly two lines long ($ wc -l file should print 2)
 -All your files should end with a new line
 -The first line of all your files should be exactly #!/bin/bash

More Info

 Betty linter

  To run the Betty linter just with command betty <filename>:
 
   -Go to the Betty repository
   -Clone the repo to your local machine
   -cd into the Betty directory
   -Install the linter with sudo ./install.sh
   -emacs or vi a new file called betty, and copy the script below:


/*#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done*/

   -Once saved, exit file and change permissions to apply to all users with chmod a+x betty
   -Move the betty file into /bin/ directory or somewhere else in your $PATH with sudo mv betty /bin/

You can now type betty <filename> to run the Betty linter!

 