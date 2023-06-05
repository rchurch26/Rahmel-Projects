# Project NPC Movement

[Markdown Cheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Here-Cheatsheet)

_REPLACE OR REMOVE EVERYTING BETWEEN "\_"_

### Student Info

-   Name: Rahmel Church Jr.
-   Section: 1

## Simulation Design

I will be simulating ants scavenging at different parts of the screen while they avoid a spider that is looking to eat them. 

### Controls

-   _List all of the actions the player can have in your simulation_
    -   _Include how to preform each action ( keyboard, mouse, UI Input )_
    -   _Include what impact an action has in the simulation ( if is could be unclear )_

## Ant

The ant will use pathfinding and some slight wandering to head to a specific spot on the map. If the ant notices the spider, they will begin to flee the spider.

### Woek

**Objective:** This is when the ant is heading to the spot it is supposed to be at.

#### Steering Behaviors

- Pathfinds and wanders towards its destination
- Obstacles - No obstacles
- Seperation - No separation since ants step on each other.
   
#### State Transistions

- When the ant doesn't see the spider.
   
### Survive

**Objective:** This is when the ant sees the spider and now has to run from it and survive.

#### Steering Behaviors

- Flees from the spider
- Obstacles - Avoids the spider
- Seperation - Still no separation
   
#### State Transistions

- The ant sees the spider or the spider gets really close to the ant.

## Spider

The spider wanders until an ant reaches its range. Once an ant is in its range, the spider will pursue the ant.

### Stalk

**Objective:** The spider wanders the map.

#### Steering Behaviors

- Wander is the only behavior used
- Obstacles - No obstacles
- Seperation - If multiple spiders, they separate from each other.
   
#### State Transistions

- There isn't an ant close to the spider.
   
### Hunt

**Objective:** The spider found an ant and pursues it.

#### Steering Behaviors

- Pursuit is used in this state
- Obstacles - No obstacles
- Seperation - No separation
   
#### State Transistions

- An ant reaches the spiders range.

## Sources

-  Ant Sprite - DudeMan https://opengameart.org/content/walking-ant-with-parts-and-rigged-spriter-file
- Spider Sprite - GameSupplyGuy https://gamesupply.itch.io/universal-game-toolkit

## Make it Your Own

I may have animations as well as a way for the user to input the number of ants or spiders they want in the simulation.

## Known Issues

_List any errors, lack of error checking, or specific information that I need to know to run your program_

### Requirements not completed

_If you did not complete a project requirement, notate that here_

