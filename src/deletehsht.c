/*
** EPITECH PROJECT, 2024
** project
** File description:
** deletehsht.c
*/

#include "../include/my.h"

void dellink(hashtable_t *delete, hashtable_t *ht, int i)
{
    hashtable_t *helper;

    delete = ht[i].next;
    while (delete != NULL) {
        helper = delete->next;
        free(delete);
        delete = helper;
    }
}

void delete_hashtable(hashtable_t *ht)
{
    int size = ht->size;

    hashtable_t *delete;
    for (int i = 0; i < size; i++){
        if (ht[i].linkedl == true){
            delete = &ht[i];
            dellink(delete, ht, i);
        }
    }
    free(ht);
}
