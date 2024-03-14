#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * new_dog - creates new dog
 * @name: dog.name
 * @age: dog.age
 * @owner: dog.owner
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *dog = malloc(sizeof(dog_t));

        if (dog == NULL)
                return (NULL);

        size_t name_len = 0;
        size_t owner_len = 0;

        char *temp_name = name;
        char *temp_owner = owner;

        while (*temp_name++ != '\0')
                name_len++;
        while (*temp_owner++ != '\0')
                owner_len++;

        (*dog).name = malloc(name_len + 1);
        if ((*dog).name == NULL)
        {
                free(dog);
                return (NULL);
        }

        (*dog).age = age;

        (*dog).owner = malloc(owner_len + 1);
        if ((*dog).owner == NULL)
        {
                free((*dog).name);
                free(dog);
                return (NULL);
        }

        strcpy((*dog).name, name);
        strcpy((*dog).owner, owner);
        return (dog);
}

