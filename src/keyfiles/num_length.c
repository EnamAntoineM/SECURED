/*
** EPITECH PROJECT, 2024
** project
** File description:
** num_length.c
*/

#include "../../include/my.h"

int length(size_t num)
{
    int count = 0;

    while (num > 0){
        count++;
        num /= 10;
    }
    return count;
}
