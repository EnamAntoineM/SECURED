/*
** EPITECH PROJECT, 2024
** project
** File description:
** pow_func.c
*/

#include "../../include/my.h"

size_t power(size_t num, int n)
{
    size_t mem = num;

    for (int i = 1; i < n; i++){
        num *= mem;
    }
    return num;
}
