# My_Runner

This is a "runner style" game where you have to dodge obstacles, lot of controls are available to the player and good skills are recommended.

Made alone in 4 weeks.

Here you can find the video of the end result of this project :

[![](https://i.ytimg.com/vi/nQ-eQP18q6A/hqdefault.jpg?sqp=-oaymwEZCNACELwBSFXyq4qpAwsIARUAAIhCGAFwAQ==\u0026rs=AOn4CLBecMUO5DO_CEAPC5N5VhPpbwKgfA)](https://youtu.be/nQ-eQP18q6A "My_Runner")

## Usage

./my_runner [map]  
./my_runner [-h]  

## Description

Reach the end to win, skulls multiply by 2 your score each time you pick one up, blue zombies need to be hit two time to die, the second hit can only be done in his upper part.  

## Controls

- Arrow down to crouch  
- Arrow up to jump  
- Arrow right to hit  
- Space to throw your hat  
- You can hit or throw your hat while jumping or crouching  

## Map creator
 
You can create your map using the my_map file in the maps directory.  
Replace empty spaces with numbers of your choice:  
  
- 0 = low skull (points)  
- 1 = basic zombie (random size)  
- 2 = flying zombie  
- 3 = rotating axe1  
- 4 = rotating spiky ball  
- 5 = saw  
- 6 = rotating axe2  
- 7 = END OF MAP (only at the end of your level !)  
- 8 = spikes  
- 9 = high skill (points)  
  
## Infos

- **Binary name:** my_runner
- **Language:** C
- **Group Size:** 1
- **Compilation:** via Makefile, including re, clean and fclean rules
  
## Table of content
<!-- TOC depthFrom:1 depthTo:6 withLinks:1 updateOnSave:1 orderedList:0 -->

- [Subject](#subject)
	- [Requirements](#requirements)
		- [Must](#must)
		- [Should](#should)
		- [Could](#could)
	- [Authorized functions](#authorized-functions)

<!-- /TOC -->

## Subject
  
In this project, you are asked to make a small video game based on the rules of a finite Endless Running Game.  
  
The basic rules for the my_runner are as follows:  
• the player is a character who runs in a map you took as parameter.  
• enemies and obstacles must appear on the opposite side to the player position.  
• the player can use the space bar to jump and avoid obstacles and enemies.  
• as the player runs, a score, which will be displayed, will increase.  
• when the player dies or finishes the map, the score is displayed inside the window.  
  
As you previously did, being able to manage inputs from the user and to display animated sprites are key skills when you want to develop basic games.   Furthermore, you will need to manage various new game making skills such as:  
• reading a file describing an environnement and use it to render a visual.  
• manage basic game physics.  
• manage multiple entities at the same time.  
  
Your project should of course fit the requirements below but we are expecting it to be more than just a technical demonstration:  
we want you to think about it as a real game. As such, try to have a consistency between your sprites, your sounds effects and your world.  
  
## Requirements

### Must

- The window must be closed using events.  
- The program must manage the input from the keyboard.  
- The program must contain animated sprites rendered thanks to sprite sheets.  
- The program must contain moving (rotating, translating, or scaling) elements.  
- The program background must include a parallax scrolling with at least 3 objects moving at different speeds.  
- The program must take a file in argument which will contain the map of your current game.  
- The program must display a score which is update regularly during the game.  
- The program must have an end whether it’s a victory or a defeat.  
- The program must handle basic game physics (jumping / falling / hitting a wall).  
- The program must have at least one music and one sound effect.  

### Should

- The program should have randomly spawning enemies.  
- Animations and movements in your program should not depend on the speed of your computer.  
- Animations and movements in your program should be timed by sfClock elements.  
- Your window should stick between 800x600 pixels and 1920x1080 pixels.  
- Your window should have a limited frame rate such that it can be compute without lagging.  
- The program should accept the “-h” option, then display usage of the program.  
- Possible user interactions should be explicitly explained in a usage.  

### Could

- The program could have several different levels.  
- The program could have a main menu.  
- The program could have a pause menu.  
- The program could store the highest score made.  
- The program could have an infinite mode where you generate randomly the map till the player dies.  
- The program could let the user customize its character.  
- The program could have bonus / malus which gives / removes points or advantages to the player.  

> :exclamation: The size of your repository (including the assets) must be as small as possible. Think about the format and the encoding of your resource files (sounds, musics, images, etc.).  
> An average maximal size might be 15MB, all included. Any repository exceeding this limit might not evaluated at all.  

## Gameplay

While the requirements don’t go deep into the gameplay, we are still asking you to make a video game.  
A basic example of what we are expecting is a simple game where we could score points by avoiding obstacles (either by jumping or crouching) while our character is running towards them.  
If you make an endless level the score should also based on how long the player can keep avoiding obstacles  

## Authorized functions

from the C library  
- malloc  
- free  
- memset  
- rand  
- srand  
- time (only with srand)  
- (f)open  
- (f)read  
- (f)write  
- (f)close  
- getline  
  
from the CSFML library  
All functions  
  
from the math library  
All functions  
  
> :exclamation: Any unspecified functions are de facto banned.  
