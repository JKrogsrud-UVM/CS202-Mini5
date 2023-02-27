//
// Created by Jared Krogsrud on 2/27/2023.
//
#include "mini-5.jkrogsru.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int createRecords(unsigned int numRecords, int *ids, char **names, Record **records)
{
    if (ids == NULL || records == NULL || names == NULL)
    {
        return 1;
    }
    if (numRecords == 0)
    {
        return 0;
    }

    // allocate memory to heap
    *records = malloc(numRecords * sizeof (Record));

    for (int index = 0; index < numRecords; ++index)
    {
        records[index]->id = ids[index];
        strcpy(names[index], records[index]->name);
    }

    return 0;
}
