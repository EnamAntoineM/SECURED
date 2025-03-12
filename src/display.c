/*
** EPITECH PROJECT, 2024
** project
** File description:
** display.c
*/

#include "../include/my.h"

void printlink(hashtable_t *print)
{
    while (print != NULL){
        if (print->value != NULL){
            printf("> %d - %s \n", print->hash, print->value);
        }
        print = print->next;
    }
}

void regprint(hashtable_t *ht, int i)
{
    printf("[%d] :\n", i);
        if (ht[i].filled && ht[i].value != NULL)
            printf("> %d - %s\n", ht[i].hash, ht[i].value);
}

void ht_dump(hashtable_t *ht)
{
    hashtable_t *print;

    for (int i = 0; i < ht->size; i++){
        if (ht[i].linkedl == true){
            print = &ht[i];
            printf("[%d] :\n", i);
            printlink(print);
        } else {
            regprint(ht, i);
        }
    }
}
