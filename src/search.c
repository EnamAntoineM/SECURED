/*
** EPITECH PROJECT, 2024
** project
** File description:
** search.c
*/

#include "../include/my.h"

char *loop(hashtable_t *print, int hashkey)
{
    while (print != NULL){
        if (print->hash == hashkey){
            return print->value;
        } else {
            print = print->next;
        }
    }
}

char *ht_search(hashtable_t *ht, char *key)
{
    int hashkey = hash(key, ht->size);
    int index = getindex(hashkey, ht);
    hashtable_t *print;

    if (ht[index].hash == hashkey){
        return ht[index].value;
    } else if (ht[index].linkedl == true){
        print = &ht[index];
        return loop(print, hashkey);
    }
    printf("Not found \n");
    exit(84);
}
