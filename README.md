# programming_language
## Instructions
flex lexico.l
bison -d sintactico.y  
gcc -o analizador sintactico.tab.c -lfl
./analizador entrada.txt
