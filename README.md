
<h1 align="center">
  Cubicoid
</h1>
<h3 align="center">
  The 3D-Surface Graphing Utility
</h3>

<h4 align="center">
  <i> 4D now that I think about it. There are 3 parameters: u,v,w. W isn't used, but you can change it if you'd like </i>
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
6. Dear Imgui (already included when compiling)

### Prerequisites
1. All of the above dependencies installed
2. g++
<br />
The make file relies on the `find` command, so you may not be able to compile at all on a Windows machine, or just use WSL.

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
- Right now, I'm not utilizing compute shaders to their maximum potential. All vertices are calculated by the CPU and passed to the shaders only to draw stuff

