/*
** EPITECH PROJECT, 2024
** project
** File description:
** deleten.c
*/

#include "../include/my.h"

hashtable_t *findadd(hashtable_t *delete, int hashkey)
{
    while (delete != NULL){
        if (delete->hash == hashkey){
            break;
        } else {
            delete = delete->next;
        }
    }
    return delete;
}

void tidy(hashtable_t *swap, hashtable_t *delete)
{
    while (swap != NULL){
        if (swap->next == delete){
            swap->next = delete->next;
            break;
        }
    }
}

void tidyend(hashtable_t *swap)
{
    while (swap != NULL){
        if (swap->next->next == NULL){
            break;
        }
        swap = swap->next;
    }
    swap->next = NULL;
}

void handle_case(hashtable_t *swap, hashtable_t *delete)
{
    if (delete->next == NULL){
        tidyend(swap);
    } else {
        tidy(swap, delete);
    }
}

int ht_delete(hashtable_t *ht, char *key)
{
    int hashkey;
    int index;
    hashtable_t *swap;

    hashtable_t *delete;
    hashkey = hash(key, ht->size);
    index = getindex(hashkey, ht);
    if (ht[index].hash == hashkey){
        ht[index].hash = 0;
        ht[index].value = NULL;
    } else if (ht[index].linkedl == true){
        delete = &ht[index];
        delete = findadd(delete, hashkey);
        swap = &ht[index];
        handle_case(swap, delete);
        free(delete);
    }
    return 0;
}
