/*
** EPITECH PROJECT, 2024
** AFFYKKE.MY_RADAR
** File description: Prototypes
** my.h
*/

#ifndef MY_H
    #define MY_H
    #include "c_lib.h"
    #include "hashtable.h"
    typedef struct {
    int i;
    int t;
    int a;
    int b;
    } variable_t;
    int getindex(int hash, hashtable_t *ht);
    int length(size_t num);
    size_t power(size_t num, int n);
    int jackreaper(size_t victim, int piece);
    size_t jackreaperjr(size_t victim, int piece);
    size_t firstseed(char *key);
    size_t compute(char *key);
    size_t small(int num, int pos);
#endif

