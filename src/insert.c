/*
** EPITECH PROJECT, 2024
** project
** File description:
** insert.c
*/

#include "../include/my.h"

int getindex(int hash, hashtable_t *ht)
{
    int index = hash % ht->size;

    return index;
}

void insert(hashtable_t *addon, int hashkey, char *value)
{
    addon->hash = hashkey;
    addon->value = value;
    addon->filled = true;
    addon->next = NULL;
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    hashtable_t *addon;
    int hashkey = hash(key, ht->size);
    int index = getindex(hashkey, ht);
    hashtable_t *head = &ht[index];

    if (ht[index].filled == false ||
        (ht[index].linkedl && ht[index].value == NULL)){
        ht[index].filled = true;
        ht[index].hash = hashkey;
        ht[index].value = value;
    } else {
        addon = malloc(sizeof(hashtable_t));
        ht[index].linkedl = true;
        insert(addon, hashkey, value);
        while (head->next != NULL){
            head = head->next;
        }
        head->next = addon;
    }
    return 0;
}
