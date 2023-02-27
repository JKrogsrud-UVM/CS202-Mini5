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

    Record * rec_tmp = malloc(sizeof (Record) * numRecords);

    for (int index = 0; index < numRecords; index++)
    {
        Record *r = malloc(sizeof (Record));
        r->id = ids[index];
        strcpy(r->name, names[index]);
        rec_tmp[index] = *r;
    }

    *records = rec_tmp;

    return 0;
}
