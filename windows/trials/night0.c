//this is the beginning 

//to create a task do ctrlshiftp then configure tasks then ccg build task
//for debugging, you can add breakpoints next to lines with red dots to stop and list the tokens
// tap run , then create editable json , then gdb/lld then gcc.exe , it creates a json file that we can use then if breakpont is specified
//it builds then runs the program and then stops there
// launch.json tells the compile to run certain programs or hook to certain debuggers to enable deubgging of the file or project
//i'll delete those launch.jsons and star teh video for future reference if ever i want to dabble in jsonry

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
    int x = 15;
    printf("hello word!\n");
    return 0;
}