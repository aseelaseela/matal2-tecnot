#ifndef _MY_MAT_H
#define _MY_MAT_H
#define size 10
#define INFINTY 99999999
#include<stdio.h>
#include<math.h>
/*
is an algorithm for finding shortest paths in a directed weighted graph
*/
void floyd_Warshall(int[][size]);
/*
cheak if there is a path from i to j 
*/
void func2(int[][size],int,int);
/*
return the shortest path between i to j
*/
void func3(int[][size],int,int);
#endif