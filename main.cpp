//
// File: main.cpp
// Description: Playlist (output linked list)
// Created: Sun. March 5, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

/* Given main(), complete the SongNode class to include the function PrintSongInfo(). Then write the PrintPlaylist() function in main.cpp to print all songs in the playlist. DO NOT print the dummy head node.

Ex: If the input is:

Stomp!
380
The Brothers Johnson
The Dude
337
Quincy Jones
You Don't Own Me
151
Lesley Gore
-1
the output is:

LIST OF SONGS
-------------
Title: Stomp!
Length: 380
Artist: The Brothers Johnson

Title: The Dude
Length: 337
Artist: Quincy Jones

Title: You Don't Own Me
Length: 151
Artist: Lesley Gore */

#include <iostream>
#include "SongNode.h"

// TODO: Write PrintPlaylist() function
void PrintPlaylist(SongNode * head) {
 SongNode *temp = head;
 temp = temp->GetNext();
 
 while (temp != NULL) {
  temp->PrintSongInfo();
  temp = temp->GetNext();
  
  if (temp != nullptr) {
  cout << endl;  
 }
 }
}

int main() {
	SongNode* headNode;
	SongNode* currNode;
	SongNode* lastNode;

	string songTitle;
	string songLength;
	string songArtist;

	// Front of nodes list                                                                         
	headNode = new SongNode();
	lastNode = headNode;

	// Read user input until -1  entered
	getline(cin, songTitle);
	while (songTitle != "-1") {
		getline(cin, songLength);
		getline(cin, songArtist);

		currNode = new SongNode(songTitle, songLength, songArtist);
		lastNode->InsertAfter(currNode);
		lastNode = currNode;

		getline(cin, songTitle);
	}

	// Print linked list
	cout << "LIST OF SONGS" << endl;
	cout << "-------------" << endl;
	PrintPlaylist(headNode);
	
	return 0;
}