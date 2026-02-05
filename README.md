*This project has been created as part of the 42 curriculum by julauren*

# **Description**

The mean of this project is to create a small 2D video game using the MiniLibX library in which a character take all collectibles before exit.

# **Instructions**

First of all, download and extract the MiniLibX in the working directory.
Like others projects, you have to run the Makefile file with the make command.

The so_long program is running with only one argument like a "*.ber" file.
In this file, you have to create the map you want following these rules :
- 0 for an empty space.
- 1 for a wall.
- C for a collectible.
- E for a map exit.
- P for the player’s starting position.

To be valid, a map :
- must contain 1 exit, 1 starting position and at least 1 collectible.
- must be rectangular.
- must be enclosed/surrounded by walls. If it is not, the program must
return an error.
- have a valid path.

# **Ressources**

- Pathfinding :
https://en.wikipedia.org/wiki/Flood_fill#Stack-based_recursive_implementation_(four-way)

- Use of MinilibX :
https://medium.com/@kayrabora.keskin/minilibx-library-01c8306f8d1c
https://medium.com/@ahmadbilla07/understanding-mlx-init-in-minilibx-beginner-friendly-7272b7ac9181

- assets :
https://www.spriters-resource.com/
