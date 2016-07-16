#ifndef MAIN_H
#define MAIN_H

#include <gb/gb.h>

typedef enum {
	StateDisclaimer,
	StateMenu,
	StateGame,
	StateGameOver,
	StateWin,
	StateTests,

	N_STATES
} STATE;

typedef enum {
	SPRITE_TYPE_PRINCESS,
	SPRITE_TYPE_ZURRAPA,
	SPRITE_TYPE_DEAD_PARTICLE,
	SPRITE_TYPE_AXE,

	N_SPRITE_TYPES
} SPRITE_TYPE;

extern STATE current_state;
void SetState(STATE state);
extern UINT8 delta_time;

void PlayMusic(unsigned char* music, unsigned char bank, unsigned char loop);

#endif