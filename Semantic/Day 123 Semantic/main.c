/* 
 * @copyright (c) 2008, Hedspi, Hanoi University of Technology
 * @author Huu-Duc Nguyen
 * @version 1.0
 */

#include <stdio.h>
#include <stdlib.h>

#include "reader.c"
#include "parser.c"
#include "scanner.c"
#include "charcode.c"
#include "debug.c"
#include "symtab.c"
#include "token.c"
#include "error.c"
#include "semantics.c"

/******************************************************************/

int main(int argc, char *argv[]) {
  if (argc <= 1) {
    printf("parser: no input file.\n");
    return -1;
  }

  if (compile(argv[1]) == IO_ERROR) {
    printf("Can\'t read input file!\n");
    return -1;
  }
    
  return 0;
}
