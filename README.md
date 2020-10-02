
<h1 align="center">
  Cubicoid
</h1>
<h3 align="center">
  The Surface Graphing Utility
</h3>

<p align="center">
  <img src="https://media.giphy.com/media/lw0vKUy5umSA1dlIgd/giphy.gif" />
  <br />
  <i> Parametric surface of a tumor cell I pulled out of my calc textbook </i>
</p>

### Dependencies
1. GLFW
2. GL 4.2
3. GLAD (already included when compiling)
4. STB_IMAGE (for loading images, also included)
5. GLM (install this from their repository)

### Compiling instructions
1. git clone https://github.com/classAndrew/cubicoid.git
2. cd cubicoid
3. mkdir bin
4. make

To run, bin/runner

### Usage
Currently, you have to write your own mini programs and compile with in order to graph anything. I'm currently working on implementing an evaluator or a nicer way to just link already compiled to objects together.
If you're itching to get graphing, take a look at vert_gen.cpp which specifies x, y, z coords with a given transformation of u, v, w (w is not used).

### Prospectives
- Dynamic loading of compiled functions for drawing the surface
- Maybe port to webGL some time
- Useful GUI

