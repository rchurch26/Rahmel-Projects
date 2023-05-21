# Project 1 SHMUP Project

[Markdown Cheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Here-Cheatsheet)

### Student Info

-   Name: Rahmel Church Jr.
-   Section: 1

## Game Design

-   Camera Orientation: The game will have a side camera orientation.
-   Camera Movement: The camera will be still and fixated while the player moves around in an 
-   Player Health: The player will have 3 lives(subject to change).
-   End Condition: The game ends when the player runs out of lives.
-   Scoring: Successfully hitting enemy ninjas.

### Game Description

A ninja has let her group escape an ambush of enemy ninjas but she must buy them time to escape. Using her kunai skill and slippery movement, can you help Hotaru stall hold off many waves of enemies?

### Controls

-   Movement
    -   Left: A/Left Arrow
    -   Right: D/Right Arrow
-   Fire: Left Click

## You Additions

I plan on adding an ability that the player can charge by obtaining points and kills where they have infinity frames and are able to move around slightly faster without getting hit but they can't attack in this state. Players can use this to gain new positioning or a break from all the chaos that can occur.
- Working Animations for Player and Enemies
- Projectiles Go Toward Mouse Position

## Sources

-  Female Ninja Sprite and Kunai: https://pzuh.itch.io/ninja-girl-free-sprites
- Enemy Ninja Sprite: https://pzuh.itch.io/ninja-adventure-free-sprites

## Known Issues

- No Enemy Projectile Collision
- No Rusher Chasing
- Rusher Collision Removes Health too fast
- Clucky Aiming
- Enemies Spawn too Close to Player

### Requirements not completed

Currently as of Checkpoint 3 I am struggling to spawn and move enemies, move the kunai projectile once thrown, and properly run the throw animation. Since I'm struggling to have the kunai projectile be thrown and enemies spawn, I can't properly test collisions.
Other issues include: switching between run animation and slide animation, flipping slide sprite

For the final part of this project, my collisions are clunky with the rushers colliding with the player and taking too much health. Enemy projectiles do not follow the player or collide with the player. Rushers are unable to chase the player properly. Pretty much the player can just run across the bottom of the screen, throw projectiles, and just get points. The aiming is broken as well with the player being unable to throw horizontally.
