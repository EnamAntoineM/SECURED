/*
** EPITECH PROJECT, 2024
** project
** File description:
** newhsht.c
*/

#include "../include/my.h"

void initht(hashtable_t *ht, int len)
{
    for (int i = 0; i < len; i++){
        ht[i].size = len;
        ht[i].hash = 0;
        ht[i].value = NULL;
        ht[i].filled = NULL;
        ht[i].linkedl = NULL;
        ht[i].next = NULL;
    }
}

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *ht = malloc(len * sizeof(hashtable_t));

    initht(ht, len);
    return ht;
}
