#include <iostream>
#include "GenerateMaze.h"
#include "myGraph.h"

int main()
{
    myGraph graph;
    graph.readInfo("/Users/JonathanWesterfield/Documents/CSCE 221/PAssignment 4-Final/Maze/mazeInput.txt");
    graph.setEmptyVisited();
    graph.depthFirstSearch(0);

    cout << "\n\n\n\n\n\n\n\n" << endl;


    // text based menu
    bool exit = false;
    int choice;
    do
    {
        cout << "Make your choice" << endl << endl;
        cout << "(1) Print out Adjacency Matrix " << endl << endl;
        cout << "(2) Print length of the entry-exit path" << endl << endl;
        cout << "(3) Print out all room numbers on the entry exit path " << endl << endl;
        cout << "(4) EXIT PROGRAM" << endl << endl;

        cout << "Please choose what you want (1, 2, 3): ";
        cin >> choice;
        cout << endl;

        switch(choice)
        {
            case 1:
                graph.printAdjList();
                break;
            case 2:
                graph.printPathLength();
                break;
            case 3:
                graph.printPath();
                break;
            case 4:
                cout << "EXITING PROGRAM " << endl;
                exit = true;
                break;
            default:
                cout << "Input not recognized\nPlease try again\n\n" << endl;
                break;
        }
    } while(!exit);


}