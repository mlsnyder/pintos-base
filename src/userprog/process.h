#ifndef USERPROG_PROCESS_H
#define USERPROG_PROCESS_H

#include "threads/thread.h"

/*Executes the user program from the designated file in the argument*/
tid_t process_execute (const char *file_name);
/*Waits for the child process with designated tid
to finish before continuing execution*/
int process_wait (tid_t);
/*Terminates user program currently running*/
void process_exit (void);
/*Sets up CPU to run user program in current thread*/
void process_activate (void);

#endif /* userprog/process.h */
