#ifndef _PHONEBOOK_H
#define _PHONEBOOK_H

#define MAX_LAST_NAME_SIZE 16

/* line to set OPT properly */
#define OPT 1

#define HASH_TABLE_SIZE 2048

#include <stdint.h>

typedef struct __PHONE_BOOK_ADDITION {
    char firstName[16];
    char email[16];
    char phone[10];
    char cell[10];
    char addr1[16];
    char addr2[16];
    char city[16];
    char state[2];
    char zip[5];
} addition;

typedef struct __PHONE_BOOK_ENTRY {
    char lastName[MAX_LAST_NAME_SIZE];
    uint16_t index;
    struct __PHONE_BOOK_ENTRY *pNext;
} entry;

entry *findName(char lastName[], entry **pHead);
entry *append(char lastName[], entry **e);

#endif
