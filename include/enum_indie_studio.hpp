/*
** EPITECH PROJECT, 2019
** OOP_indie_studio_2019
** File description:
** enum_indie_studio.hpp
*/

#ifndef ENUM_INDIE_STUDIO_HPP_
#define ENUM_INDIE_STUDIO_HPP_

enum MENU_BUTTON {
    BUTTON_PLAY = 0,
    BUTTON_SETTINGS,
    BUTTON_QUIT,
    BUTTON_RETURN,
    BUTTON_MAP_LITTLE,
    BUTTON_MAP_NORMAL,
    BUTTON_MAP_BIG,
    BUTTON_MOINS_VOLUME,
    BUTTON_PLUS_VOLUME,
    BUTTON_CONFIRM,
    BUTTON_DELETE,
    BUTTON_CONFIRM_TWO,
    BUTTON_DELETE_TWO,
    BUTTON_SCORE,
    BUTTON_RETURN_TWO
};

enum MENU_VAR {
    VOLUME,
    MULTIPLAYER,
    MAP,
    VOLUME_NUMBER
};

enum MENU_ENV {
    MENU = 0,
    SETTINGS_MENU,
    SCORE_MENU,
    PLAYER_MENU
};

enum MAP_SIZE {
    SMALL = 0,
    MEDIUM,
    LARGE
};

enum DEATH {
    PLAYER_ONE = 0,
    PLAYER_TWO
};

enum KEY {
    _KEY_UP = 0,
    _KEY_RIGHT,
    _KEY_LEFT,
    _KEY_BACK,
    _KEY_BOMB
};

#endif /* !ENUM_INDIE_STUDIO_HPP_ */