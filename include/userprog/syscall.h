#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H

void syscall_init (void);
void remove_file_descriptor(int fd);
struct lock file_lock;

#endif /* userprog/syscall.h */
