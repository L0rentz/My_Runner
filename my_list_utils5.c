/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** my_list_utils4
*/

#include "my.h"

dlist_node_t *new_node_traps_axe2(all_t *all, int pos)
{
    dlist_node_t *element;
    element = malloc(sizeof(*element));
    element->who = 6;
    element->dead = 0;
    element->traps.sprite = sfSprite_create();
    sfSprite_setTexture(element->traps.sprite, all->texture.text_traps, sfTrue);
    element->traps.pos_traps.y = 725;
    element->traps.pos_traps.x = pos + 52;
    element->traps.origin_traps.x = 67, element->traps.origin_traps.y = 0;
    sfSprite_setOrigin(element->traps.sprite, element->traps.origin_traps);
    element->traps.rect_traps.top = 215;
    element->traps.rect_traps.left = 360;
    element->traps.rect_traps.width = 135;
    element->traps.rect_traps.height = 200;
    element->traps.rotate = rand() % 360;
    element->traps.float_traps = 0.5 + (float)rand() / (float)(RAND_MAX / 0.7);
    sfSprite_setTextureRect(element->traps.sprite, element->traps.rect_traps);
    element->next = NULL, element->back = NULL;
    sfSprite_setPosition(element->traps.sprite, element->traps.pos_traps);
    return (element);
}

dlist_t *push_back_traps_axe2(all_t *all, dlist_t *li, int pos)
{
    dlist_node_t *element = new_node_traps_axe2(all, pos);
    if (is_empty_list(li)) {
        li = malloc(sizeof(*li));
        li->length = 0;
        li->begin = element;
        li->end = element;
    }
    else {
        li->end->next = element;
        element->back = li->end;
        li->end = element;
    }
    li->length++;
    return (li);
}

dlist_node_t *new_node_sign(all_t *all, int pos)
{
    dlist_node_t *element;
    element = malloc(sizeof(*element));
    element->who = 7, element->dead = 0;
    element->traps.sprite = sfSprite_create();
    sfSprite_setTexture(element->traps.sprite, all->texture.text_traps, sfTrue);
    element->traps.pos_traps.y = 600;
    element->traps.pos_traps.x = pos;
    element->traps.origin_traps.x = 0, element->traps.origin_traps.y = 0;
    element->traps.rect_traps.top = 10;
    element->traps.rect_traps.left = 400;
    element->traps.rect_traps.width = 135;
    element->traps.rect_traps.height = 130;
    element->traps.rotate = 0;
    element->traps.float_traps = 0.5 + (float)rand() / (float)(RAND_MAX / 0.7);
    sfSprite_setTextureRect(element->traps.sprite, element->traps.rect_traps);
    element->traps.scale_traps.x = 1.4, element->traps.scale_traps.y = 1.4;
    sfSprite_setScale(element->traps.sprite, element->traps.scale_traps);
    sfSprite_setPosition(element->traps.sprite, element->traps.pos_traps);
    element->next = NULL, element->back = NULL;
    return (element);
}

dlist_t *push_back_sign(all_t *all, dlist_t *li, int pos)
{
    dlist_node_t *element = new_node_sign(all, pos);
    if (is_empty_list(li)) {
        li = malloc(sizeof(*li));
        li->length = 0;
        li->begin = element;
        li->end = element;
    }
    else {
        li->end->next = element;
        element->back = li->end;
        li->end = element;
    }
    li->length++;
    return (li);
}

dlist_node_t *new_node_iron_spikes(all_t *all, int pos)
{
    dlist_node_t *element;
    element = malloc(sizeof(*element));
    element->who = 8, element->dead = 0;
    element->traps.sprite = sfSprite_create();
    sfSprite_setTexture(element->traps.sprite, all->texture.text_traps, sfTrue);
    element->traps.pos_traps.y = 700;
    element->traps.pos_traps.x = pos;
    element->traps.origin_traps.x = 0, element->traps.origin_traps.y = 0;
    element->traps.rect_traps.top = 80;
    element->traps.rect_traps.left = 20;
    element->traps.rect_traps.width = 140;
    element->traps.rect_traps.height = 50;
    element->traps.rotate = 0;
    element->traps.float_traps = 0.5 + (float)rand() / (float)(RAND_MAX / 0.7);
    sfSprite_setTextureRect(element->traps.sprite, element->traps.rect_traps);
    element->traps.scale_traps.x = 1.7, element->traps.scale_traps.y = 1.7;
    sfSprite_setScale(element->traps.sprite, element->traps.scale_traps);
    sfSprite_setPosition(element->traps.sprite, element->traps.pos_traps);
    element->next = NULL, element->back = NULL;
    return (element);
}