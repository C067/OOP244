#ifndef GRAPH_H
#define GRAPH_H

/*
Name: Callum Dodge
Workshop: Workshop 1
Date: May 5, 2018
Section: OOP244SDD

*/

// Fills the samples array with the statistic samples
void getSamples(int samples[], int noOfSamples);

// Finds the largest sample in the samples array, if it is larger than 70,
// therwise it will return 70. 
int findMax(int samples[], int noOfSamples);

// Prints a scaled bar relevant to the maximum value in samples array
void printBar(int val, int max);

// Prints a graph comparing the sample values visually 
void printGraph(int samples[], int noOfSamples);

#endif // !GRAPH_H