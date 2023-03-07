//
// File: SongNode.h
// Description: Playlist (output linked list)
// Created: Sun. March 5, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//
#include "iostream"
#include <string>

using namespace std;

class SongNode {
private:
	string songTitle;
	string songLength;
	string songArtist;
	SongNode* nextNodeRef; // Reference to the next node                                   

public:
	SongNode() {
		songTitle = "";
		songLength = "";
		songArtist = "";
		nextNodeRef = NULL;
	}

	// Constructor                                                                                     
	SongNode(string songTitleInit, string songLengthInit, string songArtistInit);

	// Constructor                                                                                     
	SongNode(string songTitleInit, string songLengthInit, string songArtistInit, SongNode* nextLoc);

	// insertAfter
	void InsertAfter(SongNode* nodeLoc);

	// Get location pointed by nextNodeRef                                                            
	SongNode* GetNext();
   
   // Prints song information   
	void PrintSongInfo();
};