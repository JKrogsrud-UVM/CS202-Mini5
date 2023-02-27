//
// Created by Jared Krogsrud on 2/27/2023.
//

#ifndef MINI5_MINI_5_JKROGSRU_H
#define MINI5_MINI_5_JKROGSRU_H

#define MAXNAMELEN 32

typedef struct {
    char name[MAXNAMELEN];
    int id;
} Record;

/*
 * This will take an array of numRecord ids and numRecord strings and use these values to allocate
 * an array of numRecords entries of type Record and fill in each entry with the corresponding
 * value from ids and names; and return the new array through the pass-by-reference param records.
 *
 * if ids or records or names is NULL, then the function should return 1 and not allocate any memory.
 * Otherwise, it should create the array and return 0.
 *
 * if numRecords is 0, then the function should not allocate a new array but it shoukld return 0
 */
int createRecords(unsigned int numRecords, int *ids, char **names, Record **records);

#endif //MINI5_MINI_5_JKROGSRU_H
