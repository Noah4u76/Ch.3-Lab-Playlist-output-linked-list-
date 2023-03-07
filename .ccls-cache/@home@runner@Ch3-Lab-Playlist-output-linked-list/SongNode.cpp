//
// File: SongNode.cpp
// Description: Playlist (output linked list)
// Created: Sun. March 5, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//
#include "SongNode.h"

// Constructor                                                                                     
SongNode::SongNode(string songTitleInit, string songLengthInit, string songArtistInit) {
	this->songTitle = songTitleInit;
	this->songLength = songLengthInit;
	this->songArtist = songArtistInit;
	this->nextNodeRef = NULL;
}

// Constructor                                                                                     
SongNode::SongNode(string songTitleInit, string songLengthInit, string songArtistInit, SongNode* nextLoc) {
	this->songTitle = songTitleInit;
	this->songLength = songLengthInit;
	this->songArtist = songArtistInit;
	this->nextNodeRef = nextLoc;
}

// insertAfter
void SongNode::InsertAfter(SongNode* nodeLoc) {
	SongNode* tmpNext;
	tmpNext = this->nextNodeRef;
	this->nextNodeRef = nodeLoc;
	nodeLoc->nextNodeRef = tmpNext;
}

// Get location pointed by nextNodeRef                                                            
SongNode* SongNode::GetNext() {
	return this->nextNodeRef;
}

// TODO: Write PrintSongInfo() function
void SongNode::PrintSongInfo() {
  cout << "Title: " << songTitle << endl;
  cout << "Length: " << songLength << endl;
  cout << "Artist: " << songArtist << endl;
}