#ifndef MAZE_H
#define MAZE_H
#include<iostream>
#include<stack>
#include<vector>
#include <utility>


class Maze{
public:
    class Vertex
    {
    public:

    private:
        int init_x{} , init_y {},  final_x {} , final_y {};
        size_t  Visited;
        std::stack<std::pair<int, int>> stack;
        std::vector<int> neighbours;

    };
    Maze(size_t Height , size_t Width);
    void makeMaze ();
private:
    size_t  MazeWidth;
	size_t  MazeHeight;
	//int* MazeSize;

};

#endif