/*
** EPITECH PROJECT, 2023
** arcade_architecture [SSH: 192.168.161.128]
** File description:
** arcade
*/

#ifndef ARCADE_HPP_
    #define ARCADE_HPP_

    #include <map>
/**
** @brief Arcade namespace.
*/
namespace arcd {
    /**
    @brief An enumeration for representing different events.
    */
    typedef enum event_e {
        NOTHING = 0, /* do nothing */
        UP, /*The "up" event. */
        DOWN, /*The "down" event. */
        LEFT, /*The "left" event. */
        RIGHT, /*The "right" event. */
        PAUSE, /*The "pause" event. */
        QUIT /*The "quit" event. */
    } event_t;
}
#endif /* !ARCADE_HPP_ */
