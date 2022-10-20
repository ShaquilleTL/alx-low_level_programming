#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct list_s - singly linked list list
 * @str: malloc'ed string
 * @len: lentght of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
